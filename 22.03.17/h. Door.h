#ifndef _DOOR_H_ // ���� �� ����Ǿ ������ ���� �ʵ��� ���ش�.
#define _DOOR_H_ // �̸��� ����, #ifdef, #endif  

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

// inline �Լ��� ������Ͽ� ���ԵǾ�� �Ѵ�!!!
inline void Door::Open()
{
    state = OPEN;
}

#endif