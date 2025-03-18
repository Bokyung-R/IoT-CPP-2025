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
    ```C++
    int inVal;
	cout << "숫자 입력 >> ";
	cin >> inVal;
	cout << "inVal: " << inVal << endl;
    ```

**출력(cout)와 입력(cin) 사용시 <<, >> 방향 주의할 것!**

- 함수의 다형성
    - [함수 오버로딩(함수의 다중 정의)](./Day01/overloading.cpp)
        - `함수명은 동일하지만, 매개변수의 타입이나 갯수가 다를 경우` (C언어에서는 X)
        - `함수의 타입은 사용되는 기준이 아님`
        ```C++
        int func() {
            return 10;
        }

        int func(char c) {
            return c;
        }

        //char func(char c) {
        //	return c;
        //}
        // int func(char c)와 겹침

        int func(int n) {
            return 10 + n;
        }

        int func(int n1, int n2) {
            return n1 + n2;
        }

        ```
    
    - 함수 오버라이딩(함수의 재정의) --> 상속

- [디폴프 매개변수](./Day01/default.cpp)
    - 타입 함수명(매개변수 = 디폴트값){
            ....
        }

    - 예시
        ```C++
        int func(int num = 10) {
            return num * num;
        }

        int main() {

            int result = func(10);
            cout << result << endl;

            result = func(0);
            cout << result << endl;

            result = func();
            cout << result << endl;

            return 0;
        }

        // 결과값
        // 100
        // 0
        // 100  <- default 매개변수값으로 num이 10임으로
        ```

    - 함수 선언을 한다면 default 값은 선언에만 작성
    - default를 사용할때는 오른쪽부터 사용 [default2](./Day01/default2.cpp)
        ```C++
        int coordinates(int x, int y = 0, int z = 0);	// default값은 선언(원형)에만 작성

        int main() {
            cout << "(10, 20, 30) : " << coordinates(10, 20, 30) << endl;
            cout << "(10, 20, def) : " << coordinates(10, 20) << endl;
            cout << "(10, def, def) : " << coordinates(10) << endl;
            // cout << "(10, def, 20) : " << coordinates(10, ,20) << endl;
            return 0;
        }

        int coordinates(int x, int y,int z){
            int res = pow(x, 2) + pow(y, 2) + pow(z, 2);
            return sqrt(res);
        }
        ```