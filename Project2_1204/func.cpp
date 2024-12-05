//func.cpp
#include "Stock.h"

// 주식 선언
/*
void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}
*/

//주식 사고
void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}

//주식 팔기
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}

//주식 가격 받기
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}

//주식 관련 정보 출력
void Stock::show() {
	cout << "회사명: " << name << endl;
	cout << "주식 수: " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치: " << total_val << endl;
}
//====================================================
//8-4. this 포인터, 클래스 객체 배열 
Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val) {
		return s;
	}
	else {
		//this는 주소임.
		return *this;
	}
}


//====================================================
//사용 범위 결정 연산자
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
	cout << name << "클래스가 소멸되었습니다.\n";
}