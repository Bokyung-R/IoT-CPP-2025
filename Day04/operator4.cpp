///*
//	연산자 오버로딩
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class MyClass {
//private:
//	int x, y;
//public:
//	MyClass(int ax, int ay): x(ax), y(ay){ }
//
//	MyClass add(MyClass& other){
//		cout << "add() " << endl;
//		return MyClass(x + other.x, y + other.y);
//	}
//
//	MyClass operator+(MyClass& other) {
//		cout << "operator + (obj)" << endl;
//		return MyClass(x + other.x, y + other.y);
//	}
//
//	MyClass operator+(int num) {
//		cout << "operator + (int)" << endl;
//		return MyClass(x + num, y + num);
//	}
//
//	void showMyClass() {
//		cout << "x: " << x << ", y: " << y << endl;
//	}
//};
//
//int main() {
//	MyClass obj(10, 20);
//	obj.showMyClass();
//	MyClass obj2(20, 30);
//	obj2.showMyClass();
//
//	MyClass obj3 = obj.add(obj2);
//	obj3.showMyClass();
//	MyClass obj4 = obj.operator+(obj3);
//	obj4.showMyClass();
//
//	MyClass obj5 = obj4 + 100;				// obj4.operator+(100);
//	obj5.showMyClass();
//
//	return 0;
//}
//
//// 오버로딩 할 수 없는 연산자 => ::, ., *, sizeof