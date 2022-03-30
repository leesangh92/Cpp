#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
/*
vecStudent 초기 값
kim, 80, 65, 99, 244
lee, 90, 64, 74, 228
han, 63, 88, 55, 206
park, 90, 60, 98, 248

성적 내림차순
park, 90, 60, 98, 248
kim, 80, 65, 99, 244
lee, 90, 64, 74, 228
han, 63, 88, 55, 206

최고 점수 획득자는 park : 248
*/
using namespace std;

typedef struct Student
{
    char name[12];
    int  math;
    int  kor;
    int  eng;
    int  sum;
} Stu;

void printMax(vector<Student> vaStu)
{
    int index = 0;
    int max = vaStu[0].sum;

    for (int i = 0; i < vaStu.size(); i++)
    {                                                                            
        if (max < vaStu[i].sum)
        {
            max = vaStu[i].sum;
            index = i;
        }
    }

    printf("\n최고 점수 획득자는 %s : %d \n", vaStu[index].name, vaStu[index].sum);
}

bool compare(Student a, Student b)
{
    return a.sum > b.sum;
}

int main()
{
    Student myinfo;
    vector<Student> vecStudent;

    myinfo.kor = 80;
    myinfo.eng = 65;
    myinfo.math = 99;
    strcpy(myinfo.name, "kim");
    vecStudent.push_back(myinfo);

    myinfo.kor = 90;
    myinfo.eng = 64;
    myinfo.math = 74;
    strcpy(myinfo.name, "lee");
    vecStudent.push_back(myinfo);

    myinfo.kor = 63;
    myinfo.eng = 88;
    myinfo.math = 55;
    strcpy(myinfo.name, "han");
    vecStudent.push_back(myinfo);

    myinfo.kor = 90;
    myinfo.eng = 60;
    myinfo.math = 98;
    strcpy(myinfo.name, "park");
    vecStudent.push_back(myinfo);

    cout << "vecStudent 초기 값" << endl;
    for (int i = 0; i < vecStudent.size(); i++)
    {
        vecStudent[i].sum = vecStudent[i].kor + vecStudent[i].eng + vecStudent[i].math;
        cout << vecStudent[i].name << ", " << vecStudent[i].kor << ", " << vecStudent[i].eng
             << ", " << vecStudent[i].math << ", " << vecStudent[i].sum << endl;
    }


    sort(vecStudent.begin(), vecStudent.end(), compare);
    cout << "\n성적 내림차순 \n";
    for (int i = 0; i < vecStudent.size(); i++)
        cout << vecStudent[i].name << ", " << vecStudent[i].kor << ", " << vecStudent[i].eng
                    << ", " << vecStudent[i].math << ", " << vecStudent[i].sum <<endl;
 

    printMax(vecStudent);  //최고성적 index 를 확인하여 출력
}

