//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class MyClass3 {
//private:
//	int id;
//	char* name;
//	int age;
//
//public:
//	
//	// MyClass3(){}			// ����Ʈ ������
//	
//	~MyClass3() {			// �Ҹ���(�ڵ� ȣ��ȴ� - �����Ҵ��� ����� ������ �ۼ��� �ʿ䰡 ����.)
//		delete[] name;
//	}
//
//	MyClass3(int c_id, const char* c_name, int c_age);
//	void getData() const;
//
//
//};
//
//MyClass3::MyClass3(int c_id, const char* c_name, int c_age) {
//	id = c_id;
//
//	name = new char[strlen(c_name) + 1];	// �����Ҵ�
//	// name = c_name;				// �迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����
//	strcpy(name, c_name);
//
//	age = c_age;
//}
//
//void MyClass3::getData() const{
//	cout << "id : " << id << ", name : " << name << ", age : " << age << endl;
//}
//
//int main() {
//	MyClass3 obj(1, "��ö��", 20);
//	obj.getData();
//
//
//	return 0;
//}