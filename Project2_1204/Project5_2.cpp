//5-2. 논리 표현식
/*
#include <iostream>

using namespace std;

int main() {
	//1) 논리 표현식
	//논리합, 논리곱, 논리 부정 연산자

	//논리합 ||
	// 5 == 5 || 5 == 9 --> true
	// 5 > 3 || 5 > 10 --> true
	// 5 > 8 || 5 < 10 --> true
	// 5 > 9 || 5 < 2 --> false

	//논리곱 &&
	// 5 == 5 && 9 == 9 --> true
	// 5 == 5 && 9 != 9 --> false
	// 10 < 2 && 10 > 2 --> false

	//논리 부정 !
	//!(표현식)
	//==================================================
	cout << "당신의 나이를 입력하십시오.";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "거짓말 하시면 안 됩니다!" << endl;
	}
	else if (20 <= age && age <= 29) {
		cout << "당신은 20대시군요!\n";
	}
	else {
		cout << "당신의 나이를 잘 모르겠습니다.\n";
	}



	return 0;
}
*/