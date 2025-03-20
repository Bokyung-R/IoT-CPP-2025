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

    - C 언어 스타일의 변수선언을 많이 사용

- 입력 : [cin](./Day01/cin.cpp) : 입력을 담당하는 객체
    ```
    std::cin >> 값이 들어갈 변수명 ;
    ```
    
**출력(cout)와 입력(cin) 사용시 <<, >> 방향 주의할 것!**

- 함수의 다형성
    - [함수 오버로딩(함수의 다중 정의)](./Day01/overloading.cpp)
        - `함수명은 동일하지만, 매개변수의 타입이나 갯수가 다른 것 (C언어에서는 X)`
        - `주의 : 함수의 타입은 사용되는 기준이 아님`
    
    - 함수 오버라이딩(함수의 재정의) --> 상속

- 디폴프 매개변수 
    - [default1](./Day01/default.cpp)
        ```C++
        타입 함수명(매개변수 = 디폴트값){
            ....
        }
        ```
    - [default2](./Day01/default2.cpp)
        - 함수 선언을 한다면 default 값은 선언에만 작성
        - default를 사용할때는 오른쪽부터 사용 

    - [주의](./Day01/default3.cpp)
        - 함수 오버로딩 중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때 입력없는 함수 호출 시 문제 발생

- [namespace](./Day01/namesp.cpp)
    - 해더파일을 활용한 예제 : [C++](./Day01/scope.cpp)

- 메모리 동적 할당
    - C : malloc - free : [C 동적 할당](./Day01/new.cpp)
    - C++ : new - delete : [C++ 동적 할당1](./Day01/new2.cpp), [C++ 동적 할당2](./Day01/new3.cpp)
    ```C++
    자료형 포인터 = new 자료형(크기);
    // 생성시 초기화 바로 한다면
    // 자료형 포인터 = new 자료형[크기]{ 초기화 값 }
    ...
    delete[] 포인터;
    ```
    
    - delete[] 포인터하고나서 포인터 = nullptr 이유
        : delete - 메모리 반환, 포인터 삭제 X
          dangling point가 됨으로 delete 후 포인터를 nullptr로 설정해줘야함

- 참조자 (&) [reference 1](./Day01/ref2.cpp)
    - 다른 함수에 선언된 지역변수의 값을 바꿀 수 있음 
        - 포인터로도 가능 [C++](./Day01/ref.cpp)

    - 레퍼런스는 선언할때 초기화 동시에 해야함
    - 참조자를 참조자로 초기화 할 수 있음
    - 변경도 가능
        - [reference 2](./Day01/ref3.cpp)

    - 상수 레퍼런스 : const : 상수도 참조 가능하다 [reference 3](./Day01/ref4.cpp)

- 구조체 
    - 예제
        - [struct1](./Day01/st_c2.cpp)
        - [struct2](./Day01/st_c3.cpp)

    - 클래스는 구조체로부터 왔다.

## 2일차
- 클래스 
    - 구성요소
        1. 접근제어 지시자 (private, public, protected)
            - 특징 : private - 은닉
        2. 멤버변수 - 속성, private 영역
        3. 멤버함수(메서드) - 기능, public 영역

    - 약속! 클래스명의 첫글자는 대문자 

    - 생성자 [constructor](./Day02/class3.cpp)
        - `클래스명이랑 동일`
        - 출력(리턴값)이 없음
        - 기능 : 초기화
        - 생성자 호출로 객체가 만들어짐
        - 디폴트로 생성되는 생성자가 있음
        - 명시적으로 생성자를 만든다면 기본적으로 제공되는 디폴트 생성자는 제공되지않음
        - 오버로딩이 가능함

    - 소멸자
        - `~클래스명`
        - 생성자를 소멸

    - 실습
        - [실습1 MyClass1](./Day02/MyClass.cpp)
        - [실습2 MyClass2](./Day02/MyClass2.cpp)
        - [실습3 MyClass3](./Day02/MyClass3.cpp)

    - 클래스밖에서 클래스함수 선언 가능. 
    ```C++
    클래스명::함수명(){ }
    ```

- 변수 초기화 
    - [init](./Day02/init.cpp)
    - [클래스 생성 init](./Day02/init3.cpp)
    - [콜론 초기화 (const, reference, object)](./Day02/init4.cpp)

- 실습 
    - [Day02 전체 복습](./Day02/Human.cpp)

## 3일차
- 복사 생성자 [copy1](./Day03/copyconstor.cpp), [copy2](./Day03/copyconstructor2.cpp)
    - 생성자에 생성자를 매개변수로 넣은 것
    - 동적할당을 할 경우 [deep copy](./Day03/copyconstructor3.cpp)
        - deep copy : 복사하는 객체도 동적 할당을 받아서 별개로 저장하는 것 
        - shallow copy : 복사하는 객체는 동적할당을 받지않고 받아오는 것

- 이동 생성자   [copy move constructor](./Day03/movecon2.cpp)
    - r- value reference를 파라미터로 가짐
    - 값을 복사하는 것이 아닌 r-value에 있는 값이 이동하는 것
    - move 키워드를 통해 r-value로 캐스팅되어 이동생성자에 전달됨
    - 변화 생성자