//#include<iostream>
//
//using namespace std;
//
//int coordinates(int x, int y = 0, int z = 0);	// default값은 선언(원형)에만 작성
//
//int main() {
//
//	cout << "(10, 20, 30) : " << coordinates(10, 20, 30) << endl;
//	cout << "(10, 20, def) : " << coordinates(10, 20) << endl;
//	cout << "(10, def, def) : " << coordinates(10) << endl;
//	// cout << "(10, def, 20) : " << coordinates(10, ,20) << endl;
//	return 0;
//}
//
//int coordinates(int x, int y,int z){
//	int res = pow(x, 2) + pow(y, 2) + pow(z, 2);	// 제곱
//	return sqrt(res);								// 제곱근
//}