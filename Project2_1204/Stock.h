//Stock.h
#ifndef STOCK
#include <iostream>

using namespace std;

//ex. �ֽ� ���α׷�
class Stock {
	//private	---> ������ ����
private:
	string name;		//�ֽ� �̸�
	int shares;			//�ֽ� �󸶳� ���Ҵ���, ����
	float share_val;	//�ִ� ����;
	double total_val;	//�ֽ� �Ѱ���
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
