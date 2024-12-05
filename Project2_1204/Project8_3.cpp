/*
//8-3. 클래스 생성자와 파괴자
//없어도 실행에 문제가 되지는 않음!

//C++의 지향점은, 클래스를 변수처럼 사용할 수 있는 것.

//main.cpp
#include "Stock.h"

int main() {
	//1) 생성자
	cout << "생성자를 이용하여 객체 생성\n";
	Stock temp = Stock("Kiwi", 100, 1000);

	cout << "디폴트 생성자를 이용하여 객체 생성\n";
	Stock temp2;

	cout << "temp를 temp2에 대입\n";
	temp2 = temp;

	cout << "temp와 temp2 출력\n";
	temp.show();
	temp2.show();

	cout << "생성자를 이용하여 temp 내용 재설정\n";
	temp = Stock("Coding", 200, 1000);
	cout << "재설정된 temp 출력\n";
	temp.show();

	return 0;
}
*/