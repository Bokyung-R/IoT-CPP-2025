///*
//	(deep copy)복사생성자
//	동적할당 받은 경우 복사하는 객체도 동적 할당 받아서 별개로 저장이 되어야함
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* name, int age) {			// 동적할당
//		cout << "constructor call!!" << endl;
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//
//		this->age = age;
//	}
//
//	~Person() {
//		delete[] this->name;
//	}
//
//	Person(Person& other){			// 깊은 복사 생성자
//		cout << "copy constructor!!" << endl;
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//
//		this->age = other.age;
//	}
//
//	void printPerson() {
//		printf("name: %s, age: %d \n", this->name, this->age);
//	}
//};
//
//
//int main() {
//
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);
//	p2.printPerson();
//
//	Person p3(p);
//	p3.printPerson();
//
//
//	return 0;
//}

// 디폴트로 생성되는 생성자 //   생성자 복사 생성자 소명자 <- 다시 확인