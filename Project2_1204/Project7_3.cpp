//7-3. 함수 오버로딩
/*
#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main() {
	//함수의 다형
	// 다형 : 다양하나 형태를 지닌
	//★함수의 오버로딩
	//여러 개의 함수를 같은 이름으로 연결함.
	// ---> 같은 기능을 가진 함수들이면 좋다, 남용하면 안 좋음.

	//(1) 함수의 리턴형만 다를 경우
	//(2) 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우

	cout << "두 정수를 입력하십시오.\n";
	int a, b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n\n";

	cout << "두 실수를 입력하십시오.\n";
	float c, d;
	cin >> c >> d;
	cout << "두 실수의 합은 " << sum(c, d) << "입니다.\n";

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}
*/