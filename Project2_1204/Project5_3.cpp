//5-3. switch���� break continue��
/*
#include <iostream>

using namespace std;

int main() {
	//1)switch��
	/*
	int a;
	cin >> a;

	switch (a) {
	case 1:
		cout << "�Է��Ͻ� ���� 1�Դϴ�.\n";
		break;
	case 2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�.\n";
		break;
	case 3:
		cout << "�Է��Ͻ� ���� 3�Դϴ�.\n";
		break;
	default:
		cout << "�Է��Ͻ� ���� 1,2,3 �̿��� ���Դϴ�.\n";
		break;	//break�� ������, default ���� �״�� ����� �Ǵ� ���̴�.
		//��� �ݺ������� break ��� ����
	}

	cout << "switch���� �������ϴ�.\n";
	*/

	//=====================================================
	//2) while������ break�� �̿��� Ż��
/*
int i = 0;
while (true) {
	cout << "i�� ���� " << i << "�Դϴ�." << endl;
	if (i > 10) {
		break;
	}
	i++;
}

cout << "while���� �������ϴ�.\n\n";

//==============================================
//3)continue��
const int SIZE = 30;

cout << "������ �Է��Ͻʽÿ�.\n";
char line[SIZE];
cin.get(line, SIZE);

cout << "�Է��Ͻ� ������\n";
int spaces = 0;
for (int i = 0;line[i] != '\0'; i++) {
	cout << line[i];

	if (line[i] != ' ') {
		continue;
	}
	spaces++;
}
cout << "�Դϴ�.\n";
cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "���Դϴ�.\n";


return 0;
}
*/