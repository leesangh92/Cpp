#include <iostream>
#include "Door.h"

using namespace std;

void Door::Close()
{
    state = CLOSE;
}
void Door::ShowState()
{
    cout << "���� ���� ���� : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}