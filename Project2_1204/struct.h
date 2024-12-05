//기호상수화 시켜서, 이미 있으면 반복적으로 실행되지 않는다!
//처음 이후 컴파일은 무시하게 된다.
#ifndef STRUCT

#include <iostream>

using namespace std;

//header파일로 구분 가능
//1)함수 원형
//2)#define이나 const를 사용하는 기호 상수
//3)구조체 선언
//4) 클래스 선언
//5) 템플릿 선언
//6) 인라인 함수
struct MyStruct {
	string name;
	int age;
};

void display(MyStruct&);

#endif //