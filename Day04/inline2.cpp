//// 메크로는 전퍼리기가 처리하지만 inline함수는 컴파일러가 처리한다.
//
//#include<iostream>
//
//# define SQUARE(X) ((x)*(x))
//
//using namespace std;
//
//inline int funct(int x) {
//	return x * x;
//
//
//};
//
//
//int main() {
//	//cout << SQUARE(2) << endl;
//	cout << funct(2) << endl;
//	return 0;
//}