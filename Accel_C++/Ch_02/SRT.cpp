#include <iostream>

using namespace std;

int square(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int rectangle(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int triangle(int n)
{
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}



int main()
{
    int n;
    cout << "Input value of N : ";
    cin >> n;
    square(n);
    cout << endl;
    rectangle(n);
    cout << endl;
    triangle(n);
    cout << endl;
}
