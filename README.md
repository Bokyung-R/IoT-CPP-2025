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

- 출력 : [cout](./Day01/cout.cpp) : 출력을 담당하는 객체
    - C언어와 다르게 %d, %lf 같이 타입을 맞추지않고 변수명으로 바로 출력가능
    ```C++
    std::cout << 출력할 변수 명 ;
    ```
    - using namespace std 사용시 std::cout, std::endl이 아닌 cout, endl 로 사용가능

- 변수 선언 [C++](./Day01/cout2.cpp)
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

- 입력 : [cin](./Day01/cin.cpp) : 입력을 담당하는 객체
    ```
    std::cin >> 값이 들어갈 변수명 ;
    ```
    
**출력(cout)와 입력(cin) 사용시 <<, >> 방향 주의할 것!**

- 함수의 다형성
    - [함수 오버로딩(함수의 다중 정의)](./Day01/overloading.cpp)
        - `함수명은 동일하지만, 매개변수의 타입이나 갯수가 다를 경우` (C언어에서는 X)
        - `함수의 타입은 사용되는 기준이 아님`
    
    - 함수 오버라이딩(함수의 재정의) --> 상속

- 디폴프 매개변수[default](./Day01/default.cpp), [default2](./Day01/default2.cpp)
     ```C++
    타입 함수명(매개변수 = 디폴트값){
        ....
    }
    ```
    
    - 함수 선언을 한다면 default 값은 선언에만 작성
    - default를 사용할때는 오른쪽부터 사용 

    - [주의](./Day01/default3.cpp)
        - 함수 오버로딩 중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때 입력없는 함수 호출 시 문제 발생

- namespace [C++](./Day01/namesp.cpp)
    - 해더파일을 활용한 예제 [C++](./Day01/scope.cpp)