#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> num;
    cout << "Input Numbers (finish : f) : ";
    int n;

    while(cin >> n)
    {
        cout << "Input Numbers (finish : f) : ";
        num.push_back(n);
    }
    if(num.size() % 4 != 0)
    {
        cout << "정수들의 집합의 크기는 4의 배수여야 합니다.";
        return 1;
    }
    if(num.size() < 4)
    {
        cout << "정수들의 집합의 크기는 최소 4 이상이여야 합니다.";
        return 1;
    }
    sort(num.begin(), num.end());
    for(int i = 0; i < 4; i++)
    {
        cout << i + 1 << "번째 사분위수 : " << num[(i + 1) * num.size() / 4 - 1] << "\n";
    }
    return 0;
}
