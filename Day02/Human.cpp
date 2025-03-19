#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char *c_name, int c_age, const char* c_ptel){

		pname = new char[strlen(c_name) + 1];
		strcpy(pname, c_name);

		age = c_age;

		ptel = new char[strlen(c_ptel) + 1];
		strcpy(ptel, c_ptel);
	}

	~Human(){
		delete[] pname;
		delete[] ptel;
	}

	void getData(){
		cout << "pname : " << pname << ", age : " << age << ", ptel : " << ptel << endl;
	}
};

// step1. �̸��� ��ȭ��ȣ�� �����Ҵ�
int main() {

	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();

	return 0;
}