#include<iostream>

using namespace std;

class Product {
protected:
    string id;
    int price;
    string producer;

public:
    Product(string c_id, int c_price, string c_producer) {
        id = c_id;
        price = c_price;
        producer = c_producer;
    }

    void showInfo() {
        cout << "id: " << id << endl;
        cout << "price: " << price << "원" << endl;
        cout << "producer: " << producer << endl;
    }

    ~Product() {}
};

class Book : public Product {
public:
    Book(string id, int price, string producer)
        : Product(id, price, producer) {
    }

    void showInfo() {
        cout << "Book" << endl;
        Product::showInfo();
    }
};

class HandPhone : public Product {
public:
    HandPhone(string id, int price, string producer)
        : Product(id, price, producer) {
    }

    void showInfo() {
        cout << "HandPhone" << endl;
        Product::showInfo();
    }
};

class Computer : public Product {
public:
    Computer(string id, int price, string producer)
        : Product(id, price, producer) {
    }

    void showInfo() {
        cout << "Computer" << endl;
        Product::showInfo();
    }
};

int main() {
    Book b("어린왕자", 7000, "앙투안 드 생텍쥐페리");
    HandPhone h("아이폰 15 프로", 1550000, "애플");
    Computer c("그램 17", 2100000, "LG전자");

    b.showInfo();
    cout << endl;

    h.showInfo();
    cout << endl;

    c.showInfo();

    return 0;
}