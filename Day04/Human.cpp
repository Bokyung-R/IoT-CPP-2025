///*
//	step3.
//	char �������� name, int Ÿ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ֵ�
//	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
//	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* c_name="", int c_age=0) {
//		cout << "constructor" << endl;
//		this->name = new char[strlen(c_name) + 1];
//		strcpy(this->name, c_name);
//		this->age = c_age;
//	}
//
//	~Human() {
//		cout << "destructor" << endl;
//		delete[] name;
//	}
//
//	Human(Human& other) {
//		cout << "copy constructor" << endl;
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//
//		this->age = other.age;
//	}
//
//	void showHuman() {
//		cout << "�̸� : " << name << ", ���� : " << age << endl;
//	}
//};
//
//int main() {
//
//	Human man("ȫ��",30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	//Human xman;
//	//xman = copyman;
//	//xman.showHuman();
//
//	return 0;
//}