///*
//	동적 할당받는 크기를 입력받고 원소를 저장하여 출력하시오
//  C언어 malloc - free
//*/
//
//#include<iostream>
//#include<malloc.h>
//
//using namespace std;
//
//int main() {
//    int size;
//    cout << "크기 입력 > ";
//    cin >> size;
//
//    int* ps = (int*)malloc(size * sizeof(int)); 
//
//    for (int i = 0; i < size; i++) {
//        cout << "정수 입력 > ";
//        cin >> ps[i];  
//    }
//
//    for (int i = 0; i < size; i++) {
//        cout << ps[i] << " "; 
//    }
//    cout << endl;
//
//    free(ps);
//
//    return 0;
//}
