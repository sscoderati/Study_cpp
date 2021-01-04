#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Input N1, N2";
    cout << endl;
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 > n2)
        cout << to_string(n1) + " is bigger than others." << endl;
    else if(n1 < n2)
        cout << to_string(n2) + " is bigger than others." << endl;
    else
        cout << "Same." << endl;

}
