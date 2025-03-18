///*
//	함수 오버로딩 : 이름은 같은데 매개변수의 타입이나 개수가 다르면 다른 함수이다.
//*/
//
//#include<iostream>
//
//using namespace std;
//
//int func() {
//	return 10;
//}
//
//int func(char c) {
//	return c;
//}
//
//// 출력은 사용되는 기준이 아님 int func(char c)와 겹침
////char func(char c) {
////	return c;
////}
//
//int func(int n) {
//	return 10 + n;
//}
//
//int func(int n1, int n2) {
//	return n1 + n2;
//}
//
//
//
//int main() {
//
//	cout << "func() : " << func() << endl;
//	cout << "func(char c) : " << func('a') << endl;
//	cout << "func(int n) : " << func(5) << endl;
//	cout << "func(int n1, int n2) : " << func(10, 20) << endl;
//
//	return 0;
//}