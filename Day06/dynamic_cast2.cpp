///*
//	dynamic_cast를 이용하여 다운캐스팅을 할 경우에는 가상함수가 있어야한다.
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class Super {
//public:
//	virtual void func() {			//virtual 가상함수
//		cout << "Super::func()" << endl;
//	}
//	void func1() {
//		cout << "Super::func1()" << endl;
//	}
//	void fx() {
//		cout << "Super::fx()" << endl;
//	}
////};
//
//class Sub : public Super {
//public:
//	void func() {
//		cout << "Sub::func()" << endl;
//	}
//	void func2() {
//		cout << "Sub::func2()" << endl;
//	}
//	void fx() {
//		cout << "Sub::fx()" << endl;
//	}
//};
//
//int main() {
//	
//	Super* sp = new Super{ };
//
//	sp->func();
//	sp->func1();
//	sp->fx();
//
//	cout << "----------------UpCasting---------------------" << endl;
//
//	Super* sp2 = new Sub{};
//
//	sp2->func();
//	sp2->func1();
//	sp2->fx();
//
//	cout << "----------------DownCasting---------------------" << endl;
//
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);		// sp2 ㅌ입을 sub*타입으로 다운캐스팅 안전하게 하는 방법 // virtual이 없으면 다운캐스팅이 안됨
//	
//	sp3->func();
//	sp3->func1();
//	sp3->func2();
//	sp3->fx();
//
//	delete sp;
//	delete sp2;
//
//	return 0;
//}