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
//		cout << num << " constructor" << endl;
//	}
//	~MyClass() {
//		cout << num << " destructor" << endl;
//	}
//	void setData(int n) {
//		num = n;
//	}
//};
//
//int main() {
//
//	//MyClass* prt = &MyClass{ 10 };
//	//MyClass& obj2 = MyClass{ 20 };			// 임시객체는 참조를 할 수 없다
//
//	MyClass obj = MyClass{ 10 };
//	obj.setData(20);
//
//	// && : r-value 참조
//	MyClass&& obj2 = MyClass{ 20 };
//	obj2.setData(22);
//
//	const MyClass& obj3 = MyClass{ 30 };
//	//obj3.setData(33);							// 삼수 참조하므로 값 변경은 불허한다/.
//
//	cout << "bye " << endl;
//
//	return 0;
//}