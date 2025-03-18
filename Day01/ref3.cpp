///*
//
//*/
//
//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	int num = 10;
//	int num2 = 100;
//	int& ref = num;				// num의 메모리 공간을 ref라는 별명이 붙는다 
//	int* pn = &num;
//	int& rref = ref;			// num의 별명
//	rref = num2;				// 변경 가능
//	cout << rref << " " << num2 << endl;
//	// int& rref;	
//	// rref = ref;
//
//	num++;
//	ref++;
//	(*pn)++;
//
//	cout << "num++: " << num << endl;
//	cout << "ref++: " << ref << endl;
//	cout << "(*pn)++: " << *pn << endl;
//
//	cout << "&num: " << &num << endl;
//	cout << "&ref: " << &ref << endl;
//	cout << " pn : " << pn << endl;
//
//
//	return 0;
//}