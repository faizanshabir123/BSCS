#include <iostream>
using namespace std;

int
main()
{
    int A;
    int B;
    int C;
    cout << "Enter first angle";
    cin >> A;
    cout << "Enter second angle";
    cin >> B;
    cout << "Enter third angle";
    cin >> C;
    if ((A <= 0) || (B <= 0) || (C <= 0))
    {
        cout << "ALL ANGLES MUST BE POSITIVE" << endl;
    }
    else if (A + B + C == 180)
    {
        cout << "A triangle can be created using these angles" << endl;
    }
    else
    {
        cout << "A triangle cannot be created using these angles" << endl;
    }
    cout << "THE END";
}
