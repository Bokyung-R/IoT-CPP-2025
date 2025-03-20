///*
//*	copy constructor(복사생성자)
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
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);				// 생성자가 호출되지않음, 그러나 객체는 존재함 <- 복사 생성자 
//	p2.printPerson();			// 복사생성자같은 경우에는 원본 생성자 실행 X, 복사 생성자가 따로있음
//
//	Person p3 = p;
//	p3.printPerson();
//
//	return 0;
//}