#include <iostream>

using namespace std;

int main()
{
    int result = 1;
    for(int i = 1; i <= 10; i++)
    {
        result *= i;
    }
    cout << result << endl;
    return 0;
}
