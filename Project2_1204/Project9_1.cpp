//9-1. 연산자 오버로딩
/*
#include "time.h"

int main() {
	//Time
	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total, total2;
	//total = day1.sum(day2);
	total = day1.operator+(day2);
	total2 = day1 + day2;

	total.show();
	total2.show();

	return 0;
}
*/