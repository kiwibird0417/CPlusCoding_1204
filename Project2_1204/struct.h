//��ȣ���ȭ ���Ѽ�, �̹� ������ �ݺ������� ������� �ʴ´�!
//ó�� ���� �������� �����ϰ� �ȴ�.
#ifndef STRUCT

#include <iostream>

using namespace std;

//header���Ϸ� ���� ����
//1)�Լ� ����
//2)#define�̳� const�� ����ϴ� ��ȣ ���
//3)����ü ����
//4) Ŭ���� ����
//5) ���ø� ����
//6) �ζ��� �Լ�
struct MyStruct {
	string name;
	int age;
};

void display(MyStruct&);

#endif //