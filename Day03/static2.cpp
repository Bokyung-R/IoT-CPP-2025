///*
//
//*/
//
//#include<iostream>
//
//using namespace std;
//
//class AAA {
//private:
//	static int static_a;			// static ��� ���� : Ŭ���� �ۿ��� �ʱ�ȭ
//	int n;
//public:
//	AAA(int n);
//	static void setStatic_a(int a);			// static ��� �Լ� : static������ �ǵ��̴� static �Լ� �տ��� static �����������
//	void print();
//};
//
//int AAA::static_a = 100;
//
//AAA::AAA(int n) {
//	this->n = n;
//}
//
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//
//void AAA::setStatic_a(int a) {
//	static_a = a;
//	//n = 0;	// static �Լ� �ȿ��� static ������ ���� �� �ְ� �Ϲ� ������ ���� �� ���� // �Ϲ� ����� ������ �������ʴ´�. static ����� ��븸 ����
//}
//
//int main() {
//
//	AAA obj1(10), obj2(20);
//
//	obj1.print();
//	obj2.print();
//
//	obj1.setStatic_a(50);
//	obj1.print();
//
//	return 0;
//}