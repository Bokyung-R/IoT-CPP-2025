///*
//	step4.
//	char �������� name, int Ÿ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ֵ�
//	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
//	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
//	copyman = man�� �ǵ���
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
//
//	//Human operator=(Human& other) {
//	//	cout << "operator = " << endl;
//	//	this->name = new char[strlen(other.name) + 1];
//	//	strcpy(this->name, other.name);
//
//	//	this->age = other.age;
//	//	return *this;
//	//}
//
//	const Human& operator=(const Human& rhs);
//};
//
//const Human& Human::operator=(const Human& rhs) {
//	if (this != &rhs) {
//		delete[] name;
//		cout << "operator overloading" << endl;
//
//		this->name = new char[strlen(rhs.name) + 1];
//		strcpy(this->name, rhs.name);
//
//		this->age = rhs.age;
//		
//	}
//	return *this;
//}
//
//int main() {
//
//	Human man("ȫ��",30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;			// ���⼭ �Ʊ� ������ ����� ������ �����Ҵ��� �ϱ⶧��.
//	xman.showHuman();
//
//	return 0;
//}