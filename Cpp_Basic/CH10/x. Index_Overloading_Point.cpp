#include <iostream>
using namespace std;

//Point 클래스 객체를 배열로 저장하여, 객체를 배열처럼 사용, 추출 연산자로 배열 출력
/***************** Point Class **************************/
class Point {
private:
	int x, y;
public:
	Point(int _x=0, int _y=0):x(_x), y(_y){}

	friend ostream& operator<<(ostream& os, const Point& p);

	void operator=(const Point &p); //대입연산자
};

ostream& operator<<(ostream& os, const Point& p)
{
	os<<"["<<p.x<<", "<<p.y<<"]";	
	return os;
}

void Point::operator=(const Point &p)
{
	cout<<"operator=(Point &p) called. "<<endl;
	this->x=p.x;
	this->y=p.y;
}

/***************** PointArr Class **************************/
const int SIZE=5;  // 저장소의 크기.

class PointArr 
{
private:
	Point nArr[SIZE];
	int idx;
public:
	PointArr():idx(0){}
	int GetIdx()
	{
		return idx;
	}

	Point& operator[](int i); // 배열 요소에 접근.
};

Point& PointArr::operator[](int i)
{
	if(i<0 || i>=SIZE)
	{
			cout<<"Array index out of bound exception"<<endl;
			exit(1);
	}

	idx = i;
	return nArr[i];
}

int main()
{
	PointArr arr; 
	int i;

	// 개별 요소 접근 및 변경
	arr[0]=Point(10, 10); 
	arr[1]=Point(20, 20); 

	arr[2]=Point(30, 30); 
	arr[3]=Point(40, 40);  

	int idx = arr.GetIdx();

	for(i=0;i<=idx;i++)
	   cout<<arr[i]<<endl;  // 범위 넘으면 오류메세지 
							// 객체([]) 안의 객체(i)가 대상
							// ostream& operator<<(ostream& os, const Point& p)을 만들어줘야한다. 

	return 0;
}
