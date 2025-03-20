///*
//	static - 클래스 멤버다 (this 포인터가 없다.), 객체들이 공유하는 멤버
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class StaticTest {
//public:
//	int n;
//	static int static_n;		// static 멤버 면수
//	StaticTest();
//	void print();
//};
//
//int StaticTest::static_n = 10;		// static 멤버변수 초기화는 클래스 외부에서 이루어져야한다.
//
//StaticTest::StaticTest() {
//	n = 20;
//	//static_n = 10;
//}
//
//void StaticTest::print() {
//	cout << "Static_n : " << static_n << ", n : " << n << endl;
//}
//
//int main() {
//
//	StaticTest ob1, ob2;
//	ob1.print();
//	ob2.print();
//
//	ob2.static_n = 1000;
//	ob2.n = 50;
//	ob2.print();
//	ob1.print();				// ob1.static_n의 값도 같이 변경됨
//
//	return 0;
//}