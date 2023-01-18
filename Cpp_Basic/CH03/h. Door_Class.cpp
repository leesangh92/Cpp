#include <iostream> 
using namespace std;

const int OPEN = 1;
const int CLOSE = 2;

class Door
{
private:
    int state;

public:

    Door() {}

    void Open();
    void Close();
    void ShowState();
    
};

inline void Door::Open() // inline 함수 선언
{
    state = OPEN;
}
void Door::Close()
{
    state = CLOSE;
}
void Door::ShowState()
{
    cout << "현재 문의 상태 : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}

int main()
{
    Door d1;
    d1.ShowState();

    d1.Open();
    d1.ShowState();

    d1.Close();
    d1.ShowState();

    return 0;
}