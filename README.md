# IoT-CPP-2025
IoT 개발자 C++ 리포지토리

## 1일차
- C++ 사용법
    ```C++
    #include<iostream>  // C++ 헤더파일

    int main(){

        std::cout << "Hello World!" << std::endl;  
        // std::cout - C언어의 printf
        // std::endl - C언어의 '\n'
        return 0;
    }
    ```

- 출력 : cout : 출력을 담당하는 객체
    - C언어와 다르게 %d, %lf 같이 타입을 맞추지않고 변수명으로 바로 출력가능
    ```C++
    int num = 100;
	char str[100] = "홍길동";
	std::cout << "abcdefg" << std::endl;
	std::cout << num << std::endl;
	std::cout << str << std::endl;
    ```

- namespace
    - using namespace std; 사용시 std::cout, std::endl이 아닌 cout, endl 로 사용가능
    ```C++
    #include<iostream> 
    
    using namespace

    int main(){
        int num = 100;
        char str[100] = "홍길동";
        cout << "abcdefg" << endl;
        cout << num << endl;
        cout << str << endl;
    }
    ```

- 변수 선언
    - C 스타일
    ```C
    int num = 100;
    // 메모리 공간에 num이라는 변수 선언, 타입은 int, 값은 100
    ```

    - C++ 스타일
    ```C++
    int num2(200);
    // 클래스 int형의 객체 num2를 생성, 200으로 초기화
    ```

    - C 언어 스타일의 변수선언을 多사용

- 입력 : cin : 입력을 담당하는 객체
    ```C++
    int inVal;
	cout << "숫자 입력 >> ";
	cin >> inVal;
	cout << "inVal: " << inVal << endl;
    ```

** 출력(cout)와 입력(cin)를 사용할때 <<, >> 방향 주의할 것!**