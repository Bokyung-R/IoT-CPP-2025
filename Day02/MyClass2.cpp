//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
///*
//*	�迭(���ڿ�)�� = �� �ٸ� �迭(���ڿ�)�� ���� �������� ���ڿ� ó���� Ȱ���Ͽ� �������
//*	���ڿ� �̸��� �ּҸ� �ǹ��� ������ Ȱ���ϱ�
//* 
//*/
//
//using namespace std;
//
//class MyClass2 {
//private:
//	int id;
//	char name[20];
//	int age;
//public:
//	//MyClass2(int c_id, const char c_name[], int c_age) {
//	//	id = c_id;
//	//	strcpy(name, c_name);
//	//	age = c_age;
//	//}
//	
//	MyClass2(int c_id, const char *c_name, int c_age) {
//		id = c_id;
//		strcpy(name, c_name);
//		age = c_age;
//	}
//
//	void setData(int l_id, char l_name[], int l_age) {
//		id = l_id;
//		strcpy(name, l_name);
//		age = l_age;
//	
//	}
//
//	void getData() {
//		cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//	}
//
//};
//
//
//int main() {
//
//	MyClass2 obj(1, "��ö��", 20);
//	obj.getData();
//
//	return 0;
//}