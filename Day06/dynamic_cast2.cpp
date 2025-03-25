///*
//	dynamic_cast�� �̿��Ͽ� �ٿ�ĳ������ �� ��쿡�� �����Լ��� �־���Ѵ�.
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class Super {
//public:
//	virtual void func() {			//virtual �����Լ�
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
//	Sub* sp3 = dynamic_cast<Sub*>(sp2);		// sp2 ������ sub*Ÿ������ �ٿ�ĳ���� �����ϰ� �ϴ� ��� // virtual�� ������ �ٿ�ĳ������ �ȵ�
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