// 프로그래밍 교과서의 프로그램 적은 것으로 빠진 내용, 부족한 설명이 있을 수 있음

#pragma region p63

// C 프로그램의 기본 구조

#include <stdio.h>				// 선언부로 프로그램 실행 전 필요한 준비 작업을 위해 사용
int main()						
{								// 중괄호 {}안에 처리할 명령문을 나열
	printf("Hello, World\n");   // 프로그램의 몸체 부분
	return 0;                   // 프로그램의 몸체 부분
}

// 실행 결과 : Hello, World

#pragma endregion 


#pragma region p65

// sizeof 연산을 이용하여 정수형 및 실수형 기본 자료형의 크기를 알아보는 프로그래밍을 작성해 보자.

#include <stdio.h>
int main() 
{
	printf("%d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));

	printf("%d %d", sizeof(float), sizeof(double));
	
	return 0;
}

// 실행 결과 : 1 2 4 4
//			   4 8

// ------------------------------------------------------------------------------------

// int가 아닌 다른 정수형 자료일 경우 어떤 결과가 나타나는지 확인해 보자.

#include <stdio.h>
int main()
{
	char num1 = 1, num2 = 2;				// int가 아닌 다른 정수형 기본 자료
	printf("%d", sizeof(num1 + num2));		// 실행 결과 = 4
											// int형(4byte) 보다 작은 크기의 데이터 형(char형 - 1byte)의 연산을 할 경우 결과가 int형(4byte)으로 변환한다.
	return 0;
}

// 실행 결과 : 4

#pragma endregion 


#pragma region p66

// 여러 자료형에 대한 변수의 선언 예시 프로그램

#include<stdio.h>
int main()
{
	char myChar;				// 문자형 변수 myChar 선언
	int count, resultNumber;	// 정수형 변수 count, resultNumber 선언
	double weight;				// 실수형 변수 weight 선언
								// 선언한 변수의 변수명은 모두 카멜 표기법으로 선언됨
	return 0;					
}

#pragma endregion


#pragma region p67

// 변수를 선언하고 자료형에 맞는 값을 할당하는 프로그램

#include <stdio.h>
int main() 
{
	char myBloodType = 'A';			// char형 변수를 선언하고 문자 'A'를 할당
	int age, schoolNumber;			
	double weight;					// double형 변수 weight을 선언
	age = 18; schoolNumber = 12;
	weight = 173.4;					// weight에 실수값 173.4를 할당
	return 0;
}

#pragma endregion 


#pragma region p68

// 다음과 같은 프로그램을 작성하였을때 프로그램의 실행 결과는 어떻게 나타나는지 쓰시오.

#include<stdio.h>
int main()
{
	int i = 214783647;
	printf("%d", i + 1); // 214783648 | 214783647 + 1 = 214783648
	return 0;
}

// 답 : 214783648 | 해설 : int형 변수 i에 214783647의 값을 대입하고 1을 더했으니 214783648이 된다.

#pragma endregion  


#pragma region p69

// 오버플로우와 언더플로우가 어떻게 쓰여지는지 확인하는 프로그램

#include<stdio.h>
#include<limits.h> // 정수형 범위를 나타내는 상수를 정의한 헤더 파일 추가
int main()
{
	printf("char의 최솟값 : %6d, char의 최댓값 : %6d\n", CHAR_MIN, CHAR_MAX);	// limits.h 에 정의 되어있는 CHAR_MIN(char형의 최댓값 127), CHAR_MAX(char형의 최솟값 -128),
	printf("short의 최솟값 : %6d, short의 최댓값 : %6d\n", SHRT_MIN, SHRT_MAX); // SHRT_MIN(short형의 최댓값 32767), SHRT_MAX(short형의 최솟값 -32768)를 사용함
	char cA = 128, cB = -129; 
	short sA = 32768, sB = -32769;
	printf("%d %d\n", cA, cB); // char 변수 cA값 128은 char 자료형의 최대값(127)을 넘어 오버플로우된다. | char 변수 cB값 -129은 char 자료형의 최소값(-128)을 넘어 언더플로우된다.
	printf("%d %d\n", sA, sB); // short 변수 sA값 32768은 shor 자료형의 최댓값(32767)을 넘어 오버플로우된다. | short 변수 sB값 -32769은 short 자료형의 최솟값(-32768)을 넘어 언더플로우된다.
	return 0;

}

// 실행 결과 : char의 최솟값 : -128, char의 최댓값 : 127
//			   short의 최솟값 : -32768, short의 최댓값 : 32767
//			   -128 127
//			   -32768 32767

#pragma endregion


#pragma region p70

// 두 개의 변숫값을 교환하는 프로그램 

#include<stdio.h>

int main()
{
	int a = 1, b = 2;
	int temp;
	temp = a; // a = 1, b = 2, temp = 1 | temp(NULL) 에 a(1)를 대입
	a = b;	  // a = 2, b = 2, temp = 1 | a(1) 에 b(2)를 대입
	b = temp; // a = 2, b = 1, temp = 1 | b(2) 에 temp(1)를 대입
	return 0;
}

// ------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
	int a = 1, b = 2;
	a = a + b; // a = 3, b = 2 | a(1)에 b(2)를 더함
	b = a - b; // a = 3, b = 1 | b(2)에 a(3), b(2)를 뺀값을 더함
	a = a - b; // a = 2, b = 1 | a(3)에 b(1)를 뺌
	return 0;
}

#pragma endregion 


#pragma region p71

// 다음과 같은 프로그램을 작성하였을 떄, 프로그램의 실행 결과를 작성해 보자.

#include <stdio.h>
int main()
{
	int a = 1, b = 2, c = 3;
	int temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	printf("%d %d %d", a, b, c); 
	return 0;
}

// 실행 결과 : '2 3 1'

// ------------------------------------------------------------------------------------

// 실행 결과가 '3 1 2'가 되도록 프로그램을 수정해보자.

#include <stdio.h>
int main()
{
	int a = 1, b = 2, c = 3;
	int temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	printf("%d %d %d", a, b, c); 
	return 0;
}

// 실행 결과 : '3 1 2'

#pragma endregion