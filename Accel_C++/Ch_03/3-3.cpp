#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> str;
    string s;
    cout << "Input words (finish : f) : ";
    str.push_back(s);
    sort(str.begin(), str.end());
    int cnt = 0;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != str[i + 1] or i == str.size() - 1)
        {
            cout << str[i] << ":" << cnt << "\n";
            cnt = 0;
        }
        cnt++;
    }
}
