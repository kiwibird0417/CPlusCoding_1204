//Stock.h
#ifndef STOCK
#include <iostream>

using namespace std;

//ex. 주식 프로그램
class Stock {
	//private	---> 데이터 은닉
private:
	string name;		//주식 이름
	int shares;			//주식 얼마나 남았는지, 수량
	float share_val;	//주당 가격;
	double total_val;	//주식 총가격
	void set_total() { total_val = shares * share_val; }

public:
	//void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();

	Stock& topval(Stock&);

	Stock(string, int, float);
	Stock();
	~Stock();
};

#endif
