//
//// ������ ���ÿ� �ʱ�ȭ�ž��ϴ°� 1. reference, 2. const ��� ��� ����
//
//#include<iostream>
//
//using namespace std;
//
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;			// ��� ��������� ��ü �����Ǳ����� �ݵ�� �ʱ�ȭ�� �Ǿ���Ѵ� -- > �ݷ� �ʱ�ȭ�� �ؾ���
//public:
//	ConstClass(int value, int value2) : m_value2(value2) {	// �ݷ� �ʱ�ȭ, �Լ� �Ӹ��� ��ġ�ϴ� ����: �����ڰ� ��������� �̸� �ʱ�ȭ�� ���Ѿ�������
//		m_value = value;
//		// m_value2 = value2; // ����� ���� ���� ���ϱ⶧���� ����� ���ÿ� �ʱ�ȭ������� // �� ������ �����ڰ� �̹� ���� ��
//	}
//	void showValue() {
//		cout << "m_value : " << m_value << ", m_value2 : " << m_value2 <<endl;
//	}
//};
//
//class RefClass {
//private:
//	int& ref;				// ���۷��� ���� ��ü�� �������� ���� �ݵ�� �ʱ�ȭ�� �̷�������Ѵ�.
//public:
//	RefClass(int& r) : ref(r) { }
//
//	void showValue() {
//		cout << "ref : " << ref  << endl;
//	}
//};
//
///*-----------------------------------------------------------------------------------------------*/
//
//class Position {
//private:
//	int m_x;
//	int m_y;
//public:
//	Position(int x, int y) {
//		cout << "Position ������!" << endl;
//		m_x = x;
//		m_y = y;
//	}
//	void getData() {
//		cout << "x : " << m_x << ", y : " << m_y << endl;
//	}
//};
//
//class ObjClass {
//private:
//	Position pos;		// ��ü �������
//public:
//	ObjClass(int x,int y) : pos(x,y) { 	// obj ��ü�� �����Ǳ����� �ʱ�ȭ�� �ؾ�������
//		cout << "ObjClass constructor!! " << endl;
//	}
//	void showValue() {
//		pos.getData();
//	}
//};
//
///*-----------------------------------------------------------------------------------------------*/
//
//int main() {
//	ConstClass obj(10,20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//	obj2.showValue();
//
//	cout << "---------------------" << endl;
//	ObjClass o(3, 6);
//	o.showValue();
//
//	return 0;
//}