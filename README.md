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

- 변환 생성자 [C++](./Day03/변환생성자.cpp)
    - explicit [C++](./Day03/변환생성자3.cpp)

- 이동 생성자 [copy move constructor](./Day03/movecon2.cpp)
    - r- value reference를 파라미터로 가짐
    - 값을 복사하는 것이 아닌 r-value에 있는 값이 이동하는 것
    - move 키워드를 통해 r-value로 캐스팅되어 이동생성자에 전달됨
    - 변화 생성자

- static 
    - 변수 [C++](./Day03/static.cpp)
        - 클래스 멤버
        - 객체들이 공유
        - 초기화가 클래스 외부에서 이루어져야함

    - 함수 [C++](./Day03/static2.cpp)
        - 일반 멤버 변수의 접근 허용x
        - static 멤버의 사용만 가능

    - 실습 [C++](./Day03/static3.cpp)
    - 자동으로 회원번호 증가

- 연산자 오버로딩 [C++](./Day03/operator.cpp)
    - 매개변수로 클래스를 받아서 클래스로 반환
    - 매개변수(const 클래스& 변수) 사용

- 실습 [Banking System](./Banking/BankingSystemVer01.cpp)

## 4일차
- 연산자 오버로딩 : [C++](./Day04/operator3.cpp)
    - 오버로딩 할 수 없는 연산자 : `::, ., *, sizeof ...`
    - 객체 + 객체
    - 객체 + 정수
    - operator+(객체 or 정수)
 
- 전역함수 오버로딩 : [C++](./Day04/operator5.cpp)
    - 정수 + 객체
    - operator+(정수, 객체)
    - private : [C++](./Day04/operator6.cpp)
        - friend 선언
        - cout 객체를 통한 객체 출력

- #define : [C++](./Day04/inline.cpp)
    - #이 붙으면 컴파일러 말고 전처리기가 작동.
- inline : : [C++](./Day04/inline2.cpp)
    - 함수를 호출하는 대신 해당 함수의 코드가 호출된 위치에 직접 삽입
    - 컴파일러가 항상 inline을 적용하는 것은 아니며, 최적화를 고려해서 판단

- 템플릿 : [C++](./Day04/template.cpp)
    - 여러 자료형을 템플릿 인자로 받아 함수 내부에서 활용
    - 다형성과 재활용
    - 템플릿 일반화&특수화 : [C++](./Day04/template2.cpp)
    - typename 여러개인 경우 : [C++](./Day04/template3.cpp)
    - class 템플릿 : [C++](./Day04/template5.cpp)
        - 클래스 템플릿은 인스턴스 생성 시 반드시 typename을 지정
        - 템플릿 매개변수 : [C++](./Day04/template6.cpp)

## 5일차
- 상속 : [C++](./Day05/inheritance.cpp)
    - class SubClass : private or public or protected SuperClass
    - is a(~은 ~이다), has a(~은 ~을 가지고있다) 관계가 성립
    - protected 접근 제어문: 상속받은 자식이 접근 가능하게 해줌
    - 콜론 초기화
        - 상속받은 멤버들은 상속한 부모 클래스의 생성자에서 초기화
    - 객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다름
- 객체 포인터 : [C++](./Day05/objPointer3.cpp)
    - 객체를 가리키는 포인터
    - 포인터->메서드 or 변수
    - (*포인터).메서드 or 변수
    - 동적 할당 : [C++](./Day05/objPointer2.cpp)
    - Upcasting
        - 부모타입의 포인터로 자식타입의 객체를 가리킬 수 있음!
        - 자식타입의 객체가 부모타입으로 업캐스팅됨
        - 반대는 성립안함
    - Downcasting
        - 자식 포인터로 부모 객체를 가리킬 수 없다.
    - 부모와 자식 클래스에 오버라이딩 된 메서드를 호출 시키면 부모를 따라감

- `추상클래스` : [C++](./Day05/virtual.cpp)
    - 만들어진 배경
    1. 객체포인터로 객체에 접근
    2. upcasting으로 하면 포인터 타입의 중심으로 결정됨
    3. 객체타입 중심으로 변환 필요!  (자식타입의 메서드를 이용하고 싶음.)

    - 가상 함수
        - 자식 클래스의 멤버를 사용하기 위해 부모 클래스의 멤버 함수를 가상 함수로 만든다
        - 자식 클래스에서 재정의할 것을 약속받은 멤버 함수
        - virtual table이 만들어지고 dynamic binding으로 동작
    - 컴파일 시 포인터 형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서 바인딩할 함수를 결정한다.
    - 순수 가상 함수를 가지는 클래스 : [C++](./Day05/virtual2.cpp)
        - 순수 지정자를 가지는 메서드
        ```cpp 
        virtual void 함수명() const = 0;  // 순수 가상 함수
        ```
        - 이 함수를 상속받은 클래스에서 재정의 필요
    - 객체를 생성할 수 없다
    - 	추상자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생.
	따라서 `상위 클래스의 소멸자를 가상으로 만들어` 실타입의 소멸자 호출을 유도한다.

- static_cast : [C++](./Day05/static_cast.cpp)
    - static_cast<type-id>(expression)
    - 기본 자료형의 형변환으로 컴파일 타임에 타입을 변환


## 6일차

- dynamic_cast

- const_cast

- reinterptet_cast

- temp obj

- unique_ptr

- shared_ptr

- weak_ptr

- STL(Standard Template Library)
    - container : 객체를 저장하고 관리하는 자료 구조
        - 종류
            1. 시퀀스 컨데이너 : 선형적으로 데이터 저장(순서) => vector, list, queue
            2. 연관 컨데이너 : 일정한 규칙으로 저장 => set, multiset, map, multimap
            3. 컨테이너 어댑터 : 변형

- vector
    - 선언 방법
    ```C++
    #include<iostream>
    #include<vector>
    
    using namespace std;

    int main(){
        // vec이라는 이름의 int 타입의 벡터 생성
        vector<int> vec;    
        return 0;
    }

    ```

    - 초기화   - **(), {} 주의할 것**
        
    ```C++
    vector<int> v;                      // v.size() : 0
    vector<int> v1{10};                 // v1.size() : 1
    vector<int> v2(10);                 // v2.size() : 5
    vector<int> v3 = {1, 2, 3, 4, 5};   // v3.size() : 5
    ```
    
    - 함수 
        [vector](./STL/vector.cpp), [입력](./STL/vector2.cpp), [출력](./STL/vector3.cpp), [vector](./STL/vector4.cpp)
        - vector.size() : 원소 크기 개수
        - vector.capcity() : 벡터에 할당된 메로리 크기를 리턴
        - vector.begin() : 벡터 시작점의 주소값 반환
        - vector.end() : 벡터 끝부분 + 1 주소값 반환
            - `vector.capcity() != vector.size()`
        - vector.push_back(value) : 마지막 원소 뒤에 value 추가
        - vector.insert(idx, value) : idx번째 위치에 value 삽입
        - vector.front() : 벡터의 첫번째 값 
        - vector.end() : 벡터의 마지막 값
            - `vector.front() != vector.begin()`
            - `vector.back() != vector.end()`
        - vector.rbegin() : 마지막 주소
        - vector.rend() : 처음 원소의 이전 주소

    - iterator 
        - vector<int>::iterator : 순반향 반복자 선언
        - vector<int>::reverse_iterator : 역반향 반복자 선언
        - 이를 생략하고 auto 선언해도 무관
