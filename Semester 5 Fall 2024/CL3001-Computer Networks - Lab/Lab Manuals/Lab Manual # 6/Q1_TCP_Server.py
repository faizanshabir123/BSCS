import socket
import sys

def main():
    # Create a TCP/IP socket
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind the socket to the port
    server_address = ('localhost', 10000)
    print('Starting Up On %s Port %s' % server_address, file=sys.stderr)

    sock.bind(server_address)

    # Listen for incoming connections
    sock.listen(1)

    while True:
        # Wait for a connection
        print('\n'+'Waiting for a Connection', file=sys.stderr)
        connection, client_address = sock.accept()

        try:
            print('Connection From', client_address, file=sys.stderr)

            # Receive the data in small chunks and retransmit it
            data = connection.recv(1024)
            print('Received from Client: "%s"' % data.decode(), file=sys.stderr)

            reply= "Hello I am server. Your received id is "+ data.decode()[-2]+"."
            print('Sending to Client: "%s"' % reply, file=sys.stderr)
            connection.sendall(reply.encode())

        finally:
            # Clean up the connection
            connection.close()

if __name__ == "__main__":
    main()