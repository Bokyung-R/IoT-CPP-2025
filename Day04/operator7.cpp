///*
//	단항 연산자 오버로딩 : 반환형 operator[연산자]()
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class Money {
//private:
//	int money;
//public:
//	Money(int m = 0) : money(m) {}
//	int operator()() {				// 단항 연상자 오버로딩
//		return money;
//	}
//
//	void operator()(int m) {
//		money += m;
//	}
//};
//
//int main() {
//	Money m;
//	cout << "money : " << m.operator()() << endl;
//	m(1000);
//	cout << "money : " << m.operator()() << endl;
//	m.operator()(1000);
//	cout << "money : " << m.operator()() << endl;
//
//	return 0;
//}