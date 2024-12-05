//time.h
#ifndef TIMEH
#define TIMEH
#include <iostream>

using namespace std;

//기초 클래스
class Time {
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);

	void addHours(int);
	void addMins(int);

	//Time sum(Time&);
	Time operator+(Time&);
	Time operator*(int);

	//--------------------------------
	//friend 함수 선언(곱하기를 하게 되면, 오류 발생)
	//참조하는 형식으로 진행시킬 수 있다.
	friend Time operator*(int n, Time& t) {
		return t * n;
	}

	//----------------------------------
	//<< 오버라이딩
	friend ostream& operator<<(ostream&, Time&);

	//----------------------------------
	// 10-2.
	//다형 상속을 통해, 받는 타입 값에 따라서 알아서 그게 맞춰져서 자동적으로 출력되도록 처리.
	//가상 메소드
	int getHours() { return hours; }
	int getMins() { return mins; }

	virtual void show();
	//(1) 기초 클래스에서 가상메서드를 선언하면,
	//		그 함수는 기초 클래스 및 파생되는 클래스에서 모두 가상이 된다!
	//(2)객체에 대한 참조를 사용하여, 객체를 지시하는 포인터를 사용하여,
	//		가상 메서드가 호출되면 참조나 포인터를 위해 정의된 메서드를 사용하지 않고
	//		객체형을 위해 정의된 메서드를 사용한다. > 동적결합
	//(3)상속을 위해 기초 클래스로 사용할 클래스를 정의할 때,
	//		파생 클래스에서 다시 정의해야되는 클래스 메서드들은 가상 함수로 선언해야 함.

	virtual ~Time();

};


//파생 클래스
class NewTime : public Time {
	//1) 파생 클래스형의 객체 안에는, 기초 클래스형의 데이터 멤버 저장
	//2) 파생 클래스형의 객체는 기초 클래스형의 메서드 사용 가능
	//3) 파생 클래스는 자기 자신의 생성자를 필요로 함.
	//4) 파생 클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가 가능.

private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);

	//다형 상속을 통해, 받는 타입 값에 따라서 알아서 그게 맞춰져서 자동적으로 출력되도록 처리.
	//가상 메소드
	void show();
};

#endif // !TIMEH
