///*
//
//*/
//
//#include<iostream>
//
//using namespace std;
//
//template <typename T>
//class CTest {
//private:
//	T num;
//public:
//	CTest(T n) :num(n){ }
//
//	T getData() {
//		return num;
//	}
//};
//
////template<typename T>
////CTest<T>::CTest(T n) {
////	num = n;
////}
//
//template<>						// Ŭ���� ���ø��� Ư��ȭ
//class CTest<char> {
//private:
//	char data;
//public:
//	CTest(char d) : data(d){ }
//	char getData() {
//		return data;
//	}
//};
//
//int main() {
//	CTest<int> obj(10);		// Ŭ���� ���ø��� �ݵ�� �ν��Ͻ� ������ �ݵ�� typename�� �ۼ��ؾ��Ѵ�.
//	cout << obj.getData() << endl;
//
//	CTest<char> obj2('a');
//	cout << obj2.getData() << endl;
//
//	return 0;
//}