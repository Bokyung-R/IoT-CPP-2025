///*
//	���� ������ �����ε� : ��ȯ�� operator[������]()
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
//	int operator()() {				// ���� ������ �����ε�
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