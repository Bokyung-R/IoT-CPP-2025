///*
//*	copy constructor(���������)
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class Person {
//private:
//	char m_name[20];
//	int m_age;
//public:
//	Person(const char* pname, int age) {
//		cout << "Constructor call!!!" << endl;
//		strcpy(m_name, pname);
//
//		m_age = age;
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//};
//
//int main() {
//	Person p("ȫ�浿", 30);
//	p.printPerson();
//
//	Person p2(p);				// �����ڰ� ȣ���������, �׷��� ��ü�� ������ <- ���� ������ 
//	p2.printPerson();			// ��������ڰ��� ��쿡�� ���� ������ ���� X, ���� �����ڰ� ��������
//
//	Person p3 = p;
//	p3.printPerson();
//
//	return 0;
//}