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
//	MyClass obj2 = MyClass{ 20 };	// obj2�� MyClass{20}�̶�� �̸����� �ӽð�ü�� �����ؼ� ������ ��
//	MyClass{ 30 };
//
//	cout << "bye" << endl;
//
//
//	return 0;
//}