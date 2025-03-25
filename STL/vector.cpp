///* 
//	vector
//*/
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//
//	vector<int> v;         
//	vector<int> v1{ 10 };                
//	vector<int> v2(10);               
//	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };
//
//	cout << "v size : " << v.size() << endl;
//	cout << "v1 size : " << v1.size() << endl;
//	cout << "v2 size : " << v2.size() << endl;
//	cout << "v3 size : " << v3.size() << endl;
//
//	for (int i = 0; i < 5; i++) {
//		printf("v2[%d] : %d ", i, v2[i]);
//	}
//
//	cout << endl;
//
//	for (auto i : v3) {							// 범위기간 for문 
//		// cout << v3[i] << endl;					// - 인덱스 사용이 불가
//		cout << i << endl;
//	}
//
//
//	// being()과 end()는 iterator(반복자) 타입을 반환한다.(포인터)
//	cout << "v3의 첫번째 요소값 : " << *v3.begin() << endl;
//	cout << "v3의 마지막 요소값 : " << *(v3.end() - 1) << endl;
//
//	return 0;
//}