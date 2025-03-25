///*
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) :num(n) {
//		cout << num << "constructor" << endl;
//	}
//	~MyClass() {
//		cout << num << "desturctor" << endl;
//	}
//};
//
//int main() {
//
//	MyClass obj{ 10 };
//	MyClass obj2 = MyClass{ 20 };	// obj2는 MyClass{20}이라는 이름없는 임시객체를 복사해서 생성한 것
//	MyClass{ 30 };
//
//	cout << "bye" << endl;
//
//
//	return 0;
//}