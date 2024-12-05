//10-3. 동적 결합
#include "time.h"

const int MAX = 3;


int main() {
	//타입이 다르더라도, 포인터 값을 배열로 활용해서 정리를 할 수 있다! 오오...
	Time* times[MAX];
	int day;
	int hours;
	int mins;

	//입력을 위한 반복문
	for (int i = 0;i < MAX;i++) {
		cout << i + 1 << "번째 원소를 정의합니다." << endl;
		cout << "시간을 입력하십시오." << endl;
		cin >> hours;
		cout << "분을 입력하십시오." << endl;
		cin >> mins;

		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
		cin >> check;
		if (check == '0') {
			times[i] = new Time(hours, mins);
		}
		else {
			cout << "일을 입력하십시오." << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	//출력을 위한 반복문
	for (int i = 0;i < MAX;i++) {
		cout << i + 1 << "번째 정보입니다." << endl;
		times[i]->show();
	}

	for (int i = 0;i < MAX;i++) {
		delete times[i];
	}

	return 0;
}
