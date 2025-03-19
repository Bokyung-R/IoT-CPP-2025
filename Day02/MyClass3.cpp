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
//	// MyClass3(){}			// 디폴트 생성자
//	
//	~MyClass3() {			// 소멸자(자동 호출된다 - 동적할당경우 말고는 별도로 작성할 필요가 없다.)
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
//	name = new char[strlen(c_name) + 1];	// 동적할당
//	// name = c_name;				// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다
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
//	MyClass3 obj(1, "김철수", 20);
//	obj.getData();
//
//
//	return 0;
//}