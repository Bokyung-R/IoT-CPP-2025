#include<iostream>
#include "scope.h"	// 내가 만든 헤더 파일 사용 

using namespace std;

A::A(int aa) {
	a = aa;
}

void A::AInfo() {
	cout << "a : " << a << endl;
}

int main() {
	A a(10);
	a.AInfo();

	return 0;
}