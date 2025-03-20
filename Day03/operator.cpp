///*
//	연산자 오버로딩(다중정의)
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) : x{ ax }, y{ ay } {
//		cout << "constructor call!!" << endl;
//	}
//	void showPoint() {
//		printf("x : %d, y : %d\n", x, y);
//	}
//
//	Point add(const Point& other) {
//		/*Point obj(this->x += other.x, this->y += other.y);
//		return obj;*/
//
//		cout << "add() call! " << endl;
//		return Point(x + other.x, y + other.y);
//		
//	}
//};
//
//int main() {
//	Point obj(10, 20);
//	obj.showPoint();
//	Point obj2(30, 40);
//	obj2.showPoint();
//	Point obj3 = obj.add(obj2);
//	obj3.showPoint();
//
//	return 0;
//}