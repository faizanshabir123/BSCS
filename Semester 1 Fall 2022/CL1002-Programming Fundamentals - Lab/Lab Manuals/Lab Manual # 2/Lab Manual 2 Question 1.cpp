#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year:";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << " IS A LEAP YEAR" << endl;
    }
    else if (year % 100 == 0)
    {
        cout << year << " IS NOT A LEAP YEAR" << endl;
    }
    else if (year % 4 == 0)
    {
        cout << year << " IS A LEAP YEAR" << endl;
    }
    else
    {
        cout << year << " IS NOT A LEAP YEAR" << endl;
    }
    cout << "THE END";
}