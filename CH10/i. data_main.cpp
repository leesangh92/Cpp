#include <iostream>
using namespace std;
#include "data.h"

int main() 
{
    Data<int> d1(100);
    cout << "d1.getData(): " << d1.getData() << endl;

    Data<double> d2(1.5);
    cout << "d2.getData(): " << d2.getData() << endl;

    Data<char> d3('A');
    cout << "d3.getData(): " << d3.getData() << endl;

    return 0;
}

//data_class_선언구현분리
//- 구현부
//- template<typename T> : 매 함수마다 작성 필수
//- Data<T>::Data(T n) {} : [클래스] <T>::형식으로 명시
//- 템플릿의 헤더 : 선언부와 구현부 둘다 둬야 함'
//- data.h(헤더, 선언)
//- #ifndef _DATA_
//- #define _DATA_
//- 템플릿 선언부 및 구현부
//- #endif
//- data_method.cpp(구현, 실행부)
//- #include "data.h"
//- 사실상 data_method 파일은 필요없음