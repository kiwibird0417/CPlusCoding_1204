//8-4. this ������, Ŭ���� ��ü �迭 
//main.cpp

/*
#include <iostream>
#include "Stock.h"

using namespace std;

int main() {
	//2) Ŭ���� ��ü �迭 �����غ���
	Stock s[4] = {
		Stock("A", 10, 1000),
		Stock("B", 20, 1200),
		Stock("C", 20, 1300),
		Stock("D", 20, 1400),
	};

	//s[0].show();
	Stock* first = &s[0];
	for (int i = 1;i < 4;i++) {
		//first = first.topval(s[i]);
		first = &first->topval(s[i]);
	}
	first->show();

	return 0;
}
*/