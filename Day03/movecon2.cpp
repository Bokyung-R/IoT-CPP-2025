///*
//	이동생성자(T&&)
//	r-value reference를 파라미터로 갖는 이동 생성자
//
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	// 입력 2개 받는 생성자
//	Human(const char* name, int age) {
//		cout << "입력 2개 생성자 호출" << endl;
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	
//	// 복사 생성자
//	Human(const Human& other) {						// 참조해서 복사
//		cout << "복사 생성자 호출" << endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	
//	// 이동생성자		
//	Human(Human&& other) noexcept {					// r-value에 있는 값이 이동, 데이터를 이동시킴
//		cout << "이동 생성자 호출" << endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//
//		//other.name = nullptr;
//		//other.age = 0;
//	}
//
//	void printHuman() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main() {
//	Human h("홍길동", 30);
//	h.printHuman();
//
//	Human h2(h);
//	h2.printHuman();
//
//	Human h3(move(h));		// move라는 키워드를 통해 r-value로 캐스팅되어 이동생성자에 전달됨
//	h3.printHuman();
//
//	return 0;
//}