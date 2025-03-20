///*
//	변환 생성자
//	다른 타입의 객체로 변환될 때 호출되는 생성자. 입력을 한개만 가지는 생성자
//
//*/
//#include<iostream>
//
//using namespace std;
//
//class MyClass {
//private:
//	int value;
//public:
//	explicit MyClass(int value) {
//		cout << "변환 생성자 호출!" << endl;
//		this->value = value;
//	}
//
//	void printMyClass() {
//		cout << "value: " << value << endl;
//	}
//};
//
//int main() {
//
//	//MyClass obj = 10;		// 변환생성자 호출 - 객체 변환이 일어남 ( 10이 MyClass 형태로 객체변환)
//	//obj.printMyClass();
//
//	MyClass obj2(10);		// 이 경우는 변환생성자는 아니지만 출력시 변환생성자 호출이라고 뜸
//	obj2.printMyClass();
//
//
//	return 0;
//}