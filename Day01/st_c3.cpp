/*
	C++ class
*/

#include<iostream>

using namespace std;

class Human {
public:
	char name[20];
	int age;
	char job[10];

	Human() {}	// 디폴트 생성자, 리턴값이 없음, 클래스이름이랑 같은 이름 

	void showHuman() {
		cout << "name : " << name << ", age : " << age << ", job : " << job << endl;
	}
};

int main() {

	Human h = { "김철수", 30,"백수" };
	h.showHuman();

	return 0;
}