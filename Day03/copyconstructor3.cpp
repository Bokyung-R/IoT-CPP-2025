///*
//	(deep copy)���������
//	�����Ҵ� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ ������ �Ǿ����
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
//	Person(const char* name, int age) {			// �����Ҵ�
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
//	Person(Person& other){			// ���� ���� ������
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
//	Person p("ȫ�浿", 30);
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

// ����Ʈ�� �����Ǵ� ������ //   ������ ���� ������ �Ҹ��� <- �ٽ� Ȯ��