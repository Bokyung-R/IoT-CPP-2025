/*

*/

#include<iostream>

using namespace std;

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
		cout << "constructor" << endl;
	}

	Point(const Point& other){
		cout << "copy constructor" << endl;
		x = other.x;
		y = other.y;
	}

	const Point& add(const Point& other) {
		cout << "add()" << endl;
		return Point(x + other.x, y + other.y);
	}

	void showPoint() {
		printf("x : %d, y : %d\n", x, y);
	}
};

int main() {
	Point obj(10, 20);
	//obj.showPoint();
	Point obj2(30, 40);
	//obj2.showPoint();
	Point obj3 ;
	obj3 = obj.add(obj2);
	obj3.showPoint();


	return 0;
}