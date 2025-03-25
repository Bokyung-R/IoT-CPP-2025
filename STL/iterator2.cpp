/*

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v = { 10, 20, 30, 40, 50 };

	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
	cout << endl;

	for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
	return 0;
}

/*
	vector<int>::reverse_iterator rit - 역방향 반복자 선언
	이놈을 생략하고, auto로 선언해도 된다.
	rbegin()은 마지막주소, rend()는 처음 원소의 이전 주소
*/