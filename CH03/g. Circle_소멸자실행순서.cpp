#include <iostream> 
using namespace std; 

//생성소멸은 생성 반대로 실행

class Circle
{
public:
	int radius;
	Circle(); 
	Circle(int r);
	~Circle(); 
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "Circle(int r) : " << radius <<  endl;
}

Circle::~Circle() {
	cout << "~Circle() :" << radius << " 소멸" << endl;
}

double Circle::getArea()  //멤버메서드
{
	return 3.14*radius*radius;
}

//전역 객체변수
Circle globalDonut(1000);    
Circle globalPizza(2000);    

void f() //전역함수
{
	Circle fDonut(100);    
	Circle fPizza(200);    
}

int main()
{
	Circle mainDonut;       
	Circle mainPizza(30);   

	f();

	//return 0; // 버전 업이 되면서 생략이 가능해졌다. 
}
