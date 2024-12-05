//func.cpp
#include "Stock.h"

// �ֽ� ����
/*
void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}
*/

//�ֽ� ���
void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}

//�ֽ� �ȱ�
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}

//�ֽ� ���� �ޱ�
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}

//�ֽ� ���� ���� ���
void Stock::show() {
	cout << "ȸ���: " << name << endl;
	cout << "�ֽ� ��: " << shares << endl;
	cout << "�ְ� : " << share_val << endl;
	cout << "�ֽ� �� ��ġ: " << total_val << endl;
}
//====================================================
//8-4. this ������, Ŭ���� ��ü �迭 
Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val) {
		return s;
	}
	else {
		//this�� �ּ���.
		return *this;
	}
}


//====================================================
//��� ���� ���� ������
Stock::Stock(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock() {
	cout << name << "Ŭ������ �Ҹ�Ǿ����ϴ�.\n";
}