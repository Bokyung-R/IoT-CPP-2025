///*
//	�޸� ���� �Ҵ� new - delete
//	�ڷ��� ������ = new �ڷ���(ũ��)
//	new�� �����ڸ� ȣ���Ѵ�. �� new�� ��ü�� ������Ų��.
//	��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־���Ѵ�.
//*/
//
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int size;
//
//	//int *pn = new int;			// �������� int ũ��� ���� �Ҵ��� ����
//
//	cout << "ũ�� > ";
//	cin >> size;
//
//	int* pary = new int[size];
//	
//	pary[0] = 1;
//	pary[1] = 2;
//	*(pary + 2) = 3;
//	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;
//	
//	
//	delete[] pary;
//	pary = nullptr;
//
//
//	return 0;
//}