///*
//* StaticTest��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȭ, �ּ�, ȸ����ȣ(cnt)�� ������
//* 3�� �Է¹޴� ������. ȸ����ȣ�� �ڵ����� ������ų �� 
//* ��� ����� showmember() �޼��带 �����Ͻÿ�.
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class StaticTest {
//private:
//	char name[20];
//	char phone[20];
//	char addr[50];
//	static int cnt;
//public:
//	StaticTest(const char* name, const char* phone,const char* addr);
//
//	void showmember() {
//		cout << "ȸ����ȣ : " << cnt << endl;
//		printf("�̸� : %s, ��ȭ��ȣ : %s, �ּ� : %s\n", name, phone, addr);
//	}
//};
//
//int StaticTest::cnt = 0;
//
//StaticTest::StaticTest(const char *name,const char *phone,const char *addr){
//	strcpy(this->name, name);
//	strcpy(this->phone, phone);
//	strcpy(this->addr, addr);
//	cnt++;
//}
//
//int main() {
//
//	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
//	m1.showmember();
//	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
//	m2.showmember();
//	StaticTest m3("��ö��", "010-3333-3333", "���");
//	m3.showmember();
//
//	return 0;
//}