#include <iostream>
#include <string.h>

//표준 라이브러리에서 사용할 이름을 언급
using std::cin; using std::cout;
using std::endl; using std::string;

int main()
{
    //사용자의 이름을 물음
    cout << "Please enter your first name: ";

    //이름을 읽음
    string name;
    cin >> name;

    //출력하려는 메시지 구성
    const string greeting = "Hello, " + name + "!";

    //인사말을 둘러싼 공백의 개수
    int xpad, ypad; // 행과 열에 적용할 공백의 개수를 저장한다.
    //xpad, ypad에 입력받음
    cout << "Input value of x, y\n";
    cin >> xpad;
    cin >> ypad;
    //출력할 행과 열 개수
    const int rows = xpad * 2 + 3;
    const string::size_type cols = greeting.size() + ypad * 2 + 3;

    //입력 부분과 출력 부분을 구분하려고 한 행을 건너뜀
    cout << endl;

    //rows개 행을 출력합니다.
    //불변성 : 지금까지 r개 행을 출력
    for (int r = 0; r!= rows; ++r)
    {
        string::size_type c = 0;
        
        //불변성: 현재 행에서 c개 문자를 출력
        while (c != cols) {
             //인사말 출력 여부를 판별
             if (r == xpad + 1 && c == ypad + 1) //판별할 때 사용하는 변수를 각기 다른 변수에 대조
             {
                cout << greeting;
                c += greeting.size();
             }
             else 
             //테두리 출력 여부를 판별
             {
                if(r == 0 || r == rows - 1 ||
                   c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
             }
        }
        cout << endl;
    }
    return 0;
}
