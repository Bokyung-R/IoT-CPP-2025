/*
	C++ class
*/

#include<iostream>

using namespace std;

class Human {
public:
	char name[20];
	int age;
	char job[10];

	Human() {}	// ����Ʈ ������, ���ϰ��� ����, Ŭ�����̸��̶� ���� �̸� 

	void showHuman() {
		cout << "name : " << name << ", age : " << age << ", job : " << job << endl;
	}
};

int main() {

	Human h = { "��ö��", 30,"���" };
	h.showHuman();

	return 0;
}