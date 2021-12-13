// 프로그래밍 교과서의 프로그램 적은 것으로 빠진 내용, 부족한 설명이 있을 수 있음

#pragma region p64

// putchar() 함수의 인수 값을 문자와 아스키코드 값에 해당하는 정수형 숫자를 입력하여 출력해 보자.

#include<stdio.h>
int main()
{
	char c = 'h';
	putchar(c);		// 'h'를 출력
	putchar(105);	// 아스키코드 값 105에 해당하는 문자('i')를 출력
	return 0;
}

// 실행 결과 : hi

#pragma endregion


#pragma region p75

// puts() 함수를 사용하여 문자열을 출력하는 프로그램을 작성해 보자.

#include<stdio.h>
int main()
{
	puts("hello"); // "hello" 문자열 출력
	puts("world"); // "world" 문자열 출력
	return 0;
}

// 실행 결과 : hello
//			   world

// ------------------------------------------------------------------------------------

// putchar() 함수를 이용하여 'hello' 문자열, puts() 함수를 이용하여 'world' 문자열을 출력할 수 있도록 빈칸에 프로그램을 완성해 보자.

#include<stdio.h>
int main()
{
	char a = 'h', b = 'e', c = 'l', d = 'o', e = ' ';
	putchar(a); putchar(b); putchar(c); putchar(c); putchar(d); putchar(e); // 'h', 'e', 'l', 'l' ,'o', ' ' 출력 
	puts("world");															// "world" 출력
	return 0;
}

// 실행 결과 : hello world

#pragma endregion


#pragma region p76

// printf() 함수의 서식 문자를 이용하여 출력되는 프로그램을 작성해 보자.

#include<stdio.h>
int main()
{
	int i = 1;
	printf("hello\n"); // 제어문자 '\n'은 줄을 바꾸라는 의미
	printf("%d", i);   // 서식 문자로 d가 사용되었기 때문에 정수형 변수 i의 값 1을 출력함.
	return 0;
}

// 실행 결과 : hello
//			   1

#pragma endregion


#pragma region p77

// 제어문자를 사용하여 두 문자열을 tab만큼 띄워 출력하는 프로그램을 작성해 보자.

#include<stdio.h>
int main()
{
	printf("%s \t", "Good"); // 제어문자 '\t'은 tab 만큼 이동 하라는 의미
	printf("%s", "Bye!");	 
	return 0;
}

// 실행 결과 : Good    Bye!

// ------------------------------------------------------------------------------------

// 다음은 이름과 나이를 출력하는 프로그램이다. 실행 결과에 맞는 프로그램으로 완성해 보자.

#include<stdio.h>
int main()
{
	printf("이름 : %s\n", "고길동");
	printf("나이 : %d살", 17);
	return 0;
}

// 실행 결과 : 이름 : 고길동
//			   나이 : 17살

#pragma endregion


#pragma region p78

// getchar() 함수를 이용하여 문자를 입력하여 출력하는 프로그램을 작성해 보자.

#include<stdio.h>
int main()
{
	char c = getchar(); // getchar() 함수는 키보드로부터 한 문자를 읽어 들여 변수에 전달한다.(영어 문자만 가능)
	putchar(c);
	return 0;
}

// 입력값 : a
// 실행 결과 : a

#pragma endregion


#pragma region p79

// 문자열을 저장할 수 있는 배열에 키보드 입력을 받아 문자열을 저장하고, 출력 하는 프로그램을 작성해 보자.

#include<stdio.h>
int main()
{
	char s[100];
	gets(s); // char 배열에 문자열을 저장하며, 입력할 문자열은 배열의 크기보다 작아야 함. | gets() 함수는 키보드로 하나의 문자열을 입력 받아 변수에 전달함.
	puts(s);
	return 0;
}

// 입력값 : hello
// 실행 결과 : hello

// ------------------------------------------------------------------------------------

// scanf() 함수의 형식 문자를 이용하여 키보드로 정수값을 입력받아 보는 프로그램을 작성해 보자.

#include<stdio.h>
int main() 
{
	int i;
	scanf("%d", &i); // 변수명 앞에 변수의 주소값을 의미하는 & 기호를 붙여 주어야 함.
	printf("%d", i);
}

// 입력값 : 5
// 실행 결과 : 5
#pragma endregion


#pragma region p80

// scanf() 함수를 이용하여 값을 2개 이상 입력받는 프로그램을 작성해 보자.

#include<stdio.h>
int main()
{
	int height, weight;
	printf("키와 몸무게를 입력하세요: ");
	scanf("%d %d", &height, &weight); // scanf() 함수의 인수 값을 2개 이상 지정하여 변수에 저장
	printf("키는 %dcm이고 몸무게는 %dkg입니다.", height, weight);
}

// 실행 결과 : 키와 몸무게를 입력하세요 : 
// 입력값 : 173 65
// 실행 결과 : 키는 173cm이고 몸무게는 65kg입니다.

// ------------------------------------------------------------------------------------

// 입력 함수를 이용하여 프로그램을 작성하려고 한다. 실행 결과에 맞는 프로그램으로 완성해 보자.

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("3개의 값을 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("입력한 3개 값의 합은 %d 입니다.", a + b + c);
	return 0;
}

// 실행 결과 : 3개의 값을 입력하세요 : 
// 입력값 : 8 6 4
// 실행 결과 : 입력한 3개의 값의 합은 18 입니다.

#pragma endregion


#pragma region p81

// 카이사르 암호화를 이용하여 소문자 한 글자를 입력하면 대문자로 변환한 후, 키 입력값에 따라 암호화된 문자를 출력 하는 프로그램을 작성해 보자.

#include<stdio.h>
int main()
{
	int key;
	printf("문자를 입력하세요 : ");
	char serect = getchar();
	printf("키 값을 입력하세요 : ");
	scanf("%d", &key);
	printf("입력하신 문자를 암호화한 문자는 %c 입니다.", serect - 32 + key); // 소문자를 대문자로 바꾸려면 -32가 필요해요. | 아스키코드에서 대문자와 소문자의 차는 32임
	return 0;
}

// 입력값 : r
// 실행결과 : 키 값을 입력하세요 :
// 입력값 : 2
// 실행 결과 : 입력하신 문자를 암호화한 문자는 T 입니다.

// ------------------------------------------------------------------------------------

// 입력 화면과 출력 화면을 보고, 프로그램을 작성해 보자.

// 입력 화면 : 1개의 값을 입력하세요: 109
// 출력 화면 : 109는 8진수 155입니다.
//			   109는 16진수 6d입니다.
//			   109는 아스키코드 m입니다.

#include<stdio.h>
int main()
{
	int a;
	printf("1개의 값을 입력하세요: ");
	scanf("%d", &a);
	printf("%d는 8진수 %o입니다.\n", a, a);
	printf("%d는 16진수 %x입니다.\n", a, a);
	printf("%d는 아스키코드 %c입니다.\n", a, a);
}

#pragma endregion


#pragma region p82

// 상품명, 총수량, 재고, 가격을 출력해 주는 결과 화면이다.
// 다음과 같이 출력할 수 있도록 프로그램을 작성해 보자(단, 각 항목은 tab만큼 띄어 출력한다.).

// 결과 화면 : -----------------------------------------
//			   상품명  총수량  재고    가격
//			   -----------------------------------------
//			      G5   100      45      965000
//			      S7   200     145      985000
//			   NOTE5    35       2     1105000
//			   -----------------------------------------

#include<stdio.h>
int main()
{
	printf("-----------------------------------------\n");
	printf("상품명\t총수량\t재고\t가격\n");
	printf("-----------------------------------------\n");
	printf("   %s\t%d\t %d\t %d\n", "G5", 100, 45, 965000);
	printf("   %s\t%d\t%d\t %d\n", "S7", 200, 145, 985000);
	printf("%s\t %d\t  %d\t%d\n", "NOTE5", 35, 2, 1105000);
	printf("-----------------------------------------\n");
}

#pragma endregion


#pragma region p83

// 입력 함수와 출력 함수를 이용하여 다음과 같이 출력하는 프로그램을 작성해 보자.

// 입력 화면 : 이름을 입력하세요
//			   >홍길동
//			   나이를 입력하세요
//			   > 19
//			   혈액형을 입력하세요
//			   > A

// 출력 화면 : 홍길동(19살, A형)

#include<stdio.h>
int main()
{
	printf("이름을 입력하세요\n>");
	char name[10];  scanf("%s", name);
	printf("나이를 입력하세요\n>");
	int age;  scanf("%d", &age);
	printf("혈액형을 입력하세요\n>");
	char blood_type; scanf(" %c", &blood_type);
	printf("%s(%d살, %c형)", name, age, blood_type);
}

// 실행 결과 : 이름을 입력하세요
//			   >
// 입력값 : 홍길동
// 실행 결과 : 나이를 입력하세요
//			   >
// 입력값 : 19
// 실행 결과 : 혈액형을 입력하세요
//			   >
// 입력값 : A

#pragma endregion