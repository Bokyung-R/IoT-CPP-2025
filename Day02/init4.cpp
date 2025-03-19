//
//// 생성과 동시에 초기화돼야하는것 1. reference, 2. const 상수 멤버 변수
//
//#include<iostream>
//
//using namespace std;
//
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;			// 상수 멤버변수는 개체 생성되기전에 반드시 초기화가 되어야한다 -- > 콜론 초기화를 해야함
//public:
//	ConstClass(int value, int value2) : m_value2(value2) {	// 콜론 초기화, 함수 머리에 위치하는 이유: 생성자가 생기기전에 미리 초기화를 시켜야함으로
//		m_value = value;
//		// m_value2 = value2; // 상수는 값을 변경 못하기때문에 선언과 동시에 초기화해줘야함 // 이 위지는 생성자가 이미 생긴 뒤
//	}
//	void showValue() {
//		cout << "m_value : " << m_value << ", m_value2 : " << m_value2 <<endl;
//	}
//};
//
//class RefClass {
//private:
//	int& ref;				// 레퍼런스 역시 객체가 생성되지 전에 반드시 초기화가 이루어져야한다.
//public:
//	RefClass(int& r) : ref(r) { }
//
//	void showValue() {
//		cout << "ref : " << ref  << endl;
//	}
//};
//
///*-----------------------------------------------------------------------------------------------*/
//
//class Position {
//private:
//	int m_x;
//	int m_y;
//public:
//	Position(int x, int y) {
//		cout << "Position 생성자!" << endl;
//		m_x = x;
//		m_y = y;
//	}
//	void getData() {
//		cout << "x : " << m_x << ", y : " << m_y << endl;
//	}
//};
//
//class ObjClass {
//private:
//	Position pos;		// 객체 멤버변수
//public:
//	ObjClass(int x,int y) : pos(x,y) { 	// obj 객체가 생성되기전에 초기화를 해야함으로
//		cout << "ObjClass constructor!! " << endl;
//	}
//	void showValue() {
//		pos.getData();
//	}
//};
//
///*-----------------------------------------------------------------------------------------------*/
//
//int main() {
//	ConstClass obj(10,20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//	obj2.showValue();
//
//	cout << "---------------------" << endl;
//	ObjClass o(3, 6);
//	o.showValue();
//
//	return 0;
//}