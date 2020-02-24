#include "pch.h"

//int main()
//{
//	/*
//	포인터
//
//	프로그램은 메모리에 저장된다.
//	변수도 메모리에 저장된다.
//	사용하기 위해서 메모리의 주소를 기준으로 찾아서 사용한다.
//
//	32bit 프로그램이라면 4Byte 단위
//	64bit 프로그램이라면 8Byte 단위
//
//	단위별로 변수를 저장한다.
//
//	즉, char 1Byte 라도 무조건 단위기준으로 저장된다는 의미.
//
//	남는부분은 그냥 비어있는 것.
//
//	이때문에 메모리 낭비가 발생되기도함.
//
//	고오급 기법으로 넘어가면 이것을 압축하거나 이동을 시켜
//	비어있는 부분을 사용할수 있게 하는 기법이 등장한다.
//
//	일단 넘어가고, 메모리에 주소를 기준으로 저장된다는 것만 알아도 충분하다.
//
//	주소값은 16진수로 결정되는데.
//	32bit 라면 32자리
//	64bit 라면 64자리 수로 저장된다.
//
//	32bit는 최대 메모리 4GB가 된다. 2^32로.
//	64bit는 16TB가 된다. 2^64로.
//
//
//	선언 및 대입.
//
//	자료형 * 포인터변수명;
//
//	포인터변수명 = & 일반변수;
//
//	참조   : &는 변수 앞에 단독으로 붙을 경우 해당 변수의 주소값을 반환하는 연산자이다.
//	역참조 : 포인터변수 앞에 *가 붙을 경우 포인터가 가리키는 변수의 값을 의미한다.
//
//	포인터의 자료형과 가리킬 변수의 자료형은 일치해야한다.
//
//
//	pointer			  ->  variable
//
//	variable address  ->  variable
//
//
//	포인터의 크기는 참조할 자료형에 상관 없이
//	32bit일땐 4Byte
//	64bit일땐 8Byte
//
//	포인터는 중첩이 가능하다.
//	이중 삼중으로 중첩해 사용도 가능.
//	*/
//
//	int a = 10;
//	int * iptr = &a;
//
//	char b = 'b';
//	char* cptr = &b;
//
//	float f = 10.0f;
//	float* fptr = &f;
//
//	printf("int ptr size %d\n", sizeof(iptr));
//	printf("char ptr size %d\n", sizeof(cptr));
//	printf("float ptr size %d\n", sizeof(fptr));
//
//
//
//	/*
//	void pointer
//
//	범용 포인터라고도 부르는 포인터로
//
//	가리킬 자료형에 상관없이 아무것이나 지정할수 있다.
//
//	void *vptr;
//
//	역참조 불가.
//	강제 형변환을 시도하던가
//	함수 인자값으로 사용할때는 형변환할 변수 자료형이 뭔지 알려주고 넘길것.
//	*/
//}