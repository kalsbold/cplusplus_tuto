
#include "pch.h"

#include <stdio.h>

#include <iostream>

#include <tchar.h>
#include <wchar.h>

using namespace std;

int main()
{
	//변수 : 어떤 값을 저장할 자리.
	// 세상의 어떤 요소를 값으로 저장하는 것.

	// 자료형 : 변수의 형식을 지정하는 것. 논리, 정수, 실수, 열거 형이 있다. 
	//32비트, 64비트, 컴파일러에 따라 크기가 가변일수 있다.
	//논리형
	bool tf; // = true or false

	//정수형
	char a; // = __int8 = -128 ~ 127
	short b; // = __int16 = -32768 ~ 32767
	int c;   // = __int32 = -2147483648 ~ 2147483647
	__int64 i64; // = -9223372036854775808 ~ 9223372036854775807
	long d; // = int  = __int32 랑 같음
	long long e; // = __int64 랑 같음
	unsigned long ul; // unsigned int 랑 같음.

	//각 자료형의 unsigned 형은 양쪽을 합친 값.범위.

	/*
	멀티바이트 - 영어,숫자는 1바이트, 기타 문자는 2바이트 처리
	유니코드 - 모든 문자,숫자를 2바이트 처리.

	한글 출력이 안되면 locale 클래스를 사용해서 세팅을 바꾸는 전역처리 할필요가 있음.

	https://choryeonworkshop.tistory.com/126

	*/

	wchar_t wct; // 0 ~ 65535 유니코드용 와이드 문자.한글쓰고싶으면 쓰자. 확장성도 더 좋다. 유니코드가.
	
	TCHAR tc; // 내부적으로 wchar_t와 같다. 

	//실수형. 부호없는값 없음.
	float f;  // 소수점 7자리
	double g; //소수점 15자리
	long double h; //double과 같음.

	//열거형 
	/*
	enum 이라는 키워드를 통해 선언,정의하는 자료형으로.
	지정해줄때마나 1씩 증가하는 값을 자동적으로 줌.
	*/

	//초기화
	/*
	선언과 동시에 정의
	
	선언후 정의

	*/

	int num1;

	num1 = 10;

	int num2 = 100;

	//기본 입출력

	//c프로그램의 기본형.

	//헤더파일
	//메인함수

	printf("%d \n", num1);

	scanf("%d", &num2);

	printf("%d \n", num2);

	
	//서식문자.
	printf("%u\n", 10);      //  10: 부호 없는 10진 정수
	printf("%d\n", -20);     // -20: 부호 있는 10진 정수
	printf("%i\n", -20);     // -20: 부호 있는 10진 정수
	printf("%o\n", 071);     //  71: 부호 없는 8진 정수
	printf("%x\n", 0xF1);    //  f1: 부호 없는 16진 정수(소문자)
	printf("%X\n", 0xF1);    //  F1: 부호 없는 16진 정수(대문자)

	// long, long long 정수
	printf("%lu\n", ULONG_MAX);      // 4294967295: 부호 없는 long
	printf("%ld\n", LONG_MAX);       // 2147483647: 부호 있는 long
	printf("%llu\n", ULLONG_MAX);    // 18446744073709551615: 부호 없는 long long
	printf("%lld\n", LLONG_MAX);     // 9223372036854775807: 부호 있는 long long

	// 실수
	printf("%f\n", 1.2f);    // 1.200000: 실수를 소수점으로 표기(소문자)
	printf("%F\n", 1.2f);    // 1.200000: 실수를 소수점으로 표기(대문자)
	printf("%e\n", 1.2f);    // 1.200000e+00: 실수 지수 표기법 사용(소문자)
	printf("%E\n", 1.2f);    // 1.200000E+00: 실수 지수 표기법 사용(대문자)
	printf("%g\n", 1.2f);    // 1.2: %f와 %e 중에서 짧은 것을 사용(소문자)
	printf("%G\n", 1.2f);    // 1.2: %F와 %E 중에서 짧은 것을 사용(대문자)
	printf("%a\n", 1.2f);    // 0x1.3333340000000p+0: 실수를 16진법으로 표기(소문자)
	printf("%A\n", 1.2f);    // 0X1.3333340000000P+0: 실수를 16진법으로 표기(대문자)

	printf("%Lf", LDBL_MAX);    // 생략: long double
	printf("%Le", LDBL_MAX);    // 1.797693e+308: long double

	// 문자, 문자열
	printf("%c\n", 'a');    // a: 문자
	printf("%s\n", "Hello, world!");    // Hello, world!: 문자열

	// 포인터
	int num3;
	void *ptr = &num3;
	printf("%p\n", ptr);    // 008BFB6C: 포인터의 메모리 주소
							// 0x8bfb6c: 리눅스, OS X에서는 앞에 0x가 붙고, A~F는 소문자로 출력
							// 높은 자릿수의 0은 생략

	// % 기호
	printf("%%\n");    // %: % 기호 출력

	//이스케이프 시퀀스
	// \ 뒤에 문자를 넣어 일련의 기능을 출력할때 사용하는 기법.
	// 제어 문자를 출력또는 표현하기 위해 사용함.

	//상수
	/*
	상수: 리터럴을 담는 변수.

	리터럴 : 변하지 않는 고유값.소스코드 상에서 변수에 담지 않은 값 그 자체.



	상수는 선언과 동시에 초기화 해야한다.
	*/
	const int con1 = 1;         // 상수. 선언과 동시에 초기화
	const float con2 = 0.1f;    // 상수. 선언과 동시에 초기화
	const char con3 = 'a';      // 상수. 선언과 동시에 초기화
	//초기화 이후에 재할당 하려고하면 컴파일 에러가 발생.

	//다른 상수 값이 필요하면 새로 선언하고 초기화해야함.


	//형변환
	/*
	정수 -> 실수
	실수 -> 정수
	문자 -> 정수
	정수 -> 문자

	포인터 관련
	클래스 관련
	은 나중에~
	*/

}


