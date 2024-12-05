//5-3. switch문과 break continue문
/*
#include <iostream>

using namespace std;

int main() {
	//1)switch문
	/*
	int a;
	cin >> a;

	switch (a) {
	case 1:
		cout << "입력하신 값은 1입니다.\n";
		break;
	case 2:
		cout << "입력하신 값은 2입니다.\n";
		break;
	case 3:
		cout << "입력하신 값은 3입니다.\n";
		break;
	default:
		cout << "입력하신 값은 1,2,3 이외의 값입니다.\n";
		break;	//break가 없으면, default 값도 그대로 출력이 되는 것이다.
		//모든 반복문에서 break 사용 가능
	}

	cout << "switch문이 끝났습니다.\n";
	*/

	//=====================================================
	//2) while문에서 break를 이용한 탈출
/*
int i = 0;
while (true) {
	cout << "i의 값은 " << i << "입니다." << endl;
	if (i > 10) {
		break;
	}
	i++;
}

cout << "while문이 끝났습니다.\n\n";

//==============================================
//3)continue문
const int SIZE = 30;

cout << "문장을 입력하십시오.\n";
char line[SIZE];
cin.get(line, SIZE);

cout << "입력하신 문장은\n";
int spaces = 0;
for (int i = 0;line[i] != '\0'; i++) {
	cout << line[i];

	if (line[i] != ' ') {
		continue;
	}
	spaces++;
}
cout << "입니다.\n";
cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개입니다.\n";


return 0;
}
*/