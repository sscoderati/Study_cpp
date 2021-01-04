// 이름을 묻고 인사를 건넴
#include <iostream>
#include <string>

int main()
{
    //이름을 물음
    std::cout << "Please enter your first name.";
    //이름을 읽어 들임
    std::string name;
    std::cin >> name;

    //인사말 작성
    std::cout <<"Hello, " << name << "!" << std::endl;

    return 0;
}
