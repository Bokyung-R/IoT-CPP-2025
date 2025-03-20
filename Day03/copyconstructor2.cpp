///*
//	복사생성자
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		cout << "constructor call!!" << endl;
//		strcpy(this->name, name);
//		this->age = age;
//	}
//
//	Person(Person& other) {		// 복사생성자
//		printf("copy constructor!!\n");
//		this->age = other.age;
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//void a(int aa) {
//	aa++;
//}
//
//int main() {
//
//
//
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);				
//	p2.printPerson();		
//
//	Person p3 = p;
//	p3.printPerson();
//
//
//
//	return 0;
//}