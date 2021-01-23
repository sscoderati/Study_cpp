#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> str;
    string s;
    cout << "Input words(finish : f) : ";
    while(cin >> s && s != "f")
    {
        cout << "Input words(finish : f) : ";
        str.push_back(s);
    }

    int min_length = str[0].size();
    int max_length = str[0].size();

    for(int i = 0; i < str.size(); i++)
    {
        min_length = min(min_length, int(str[i].size()));
        max_length = max(max_length, int(str[i].size()));
    }
    cout << "가장 긴 문자열의 길이 : " << max_length << "\n";
    cout << "가장 짧은 문자열의 길이 : " << min_length << "\n";

    return 0;
}
