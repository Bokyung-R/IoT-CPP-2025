///*
//
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class AAA {
//private:
//	static int static_a;			// static 멤버 변수 : 클래스 밖에서 초기화
//	int n;
//public:
//	AAA(int n);
//	static void setStatic_a(int a);			// static 멤버 함수 : static변수를 건들이는 static 함수 앞에는 static 선언해줘야함
//	void print();
//};
//
//int AAA::static_a = 100;
//
//AAA::AAA(int n) {
//	this->n = n;
//}
//
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//
//void AAA::setStatic_a(int a) {
//	static_a = a;
//	//n = 0;	// static 함수 안에는 static 변수만 들어올 수 있고 일반 변수는 들어올 수 없음 // 일반 멤버의 접근은 허용되지않는다. static 멤버의 사용만 가능
//}
//
//int main() {
//
//	AAA obj1(10), obj2(20);
//
//	obj1.print();
//	obj2.print();
//
//	obj1.setStatic_a(50);
//	obj1.print();
//
//	return 0;
//}