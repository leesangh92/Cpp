#ifndef _DOOR_H_ // 여러 번 선언되어도 에러가 나지 않도록 해준다.
#define _DOOR_H_ // 이름은 같게, #ifdef, #endif  

const int OPEN = 1;
const int CLOSE = 2;

class Door
{
private:
    int state;

public:

    Door() {}

    //inline void Open();
    void Open();
    void Close();
    void ShowState();

};

// inline 함수는 헤더파일에 포함되어야 한다!!!
inline void Door::Open()
{
    state = OPEN;
}

#endif