//#include<iostream>
//
//using namespace std;
//
//class Point {
//public:
//	int x;
//	int y;
//
//	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
//		cout << "constructor" << endl;
//	}
//
//	Point add(const Point& other) {
//		cout << "add()" << endl;
//		/*return Point(x + other.x, y + other.y);*/
//		/* 참조로 리턴한다. */
//		x = other.x;
//		y = other.y;
//		return *this;
//	}
//
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//
//};
//
//
//int main() {
//	Point p(10, 20);
//	Point p2(30, 40);
//
//	cout << "---------------------" << endl;
//
//	//Point p3;
//	//p3 = p.add(p2);
//
//	Point p3 = p.add(p2);
//	p3.showPoint();
//
//
//	return 0;
//}