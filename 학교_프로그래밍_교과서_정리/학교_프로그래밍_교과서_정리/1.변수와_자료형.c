// ���α׷��� �������� ���α׷� ���� ������ ���� ����, ������ ������ ���� �� ����

#pragma region p63

// C ���α׷��� �⺻ ����

#include <stdio.h>				// ����η� ���α׷� ���� �� �ʿ��� �غ� �۾��� ���� ���
int main()						
{								// �߰�ȣ {}�ȿ� ó���� ��ɹ��� ����
	printf("Hello, World\n");   // ���α׷��� ��ü �κ�
	return 0;                   // ���α׷��� ��ü �κ�
}

// ���� ��� : Hello, World

#pragma endregion 


#pragma region p65

// sizeof ������ �̿��Ͽ� ������ �� �Ǽ��� �⺻ �ڷ����� ũ�⸦ �˾ƺ��� ���α׷����� �ۼ��� ����.

#include <stdio.h>
int main() 
{
	printf("%d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));

	printf("%d %d", sizeof(float), sizeof(double));
	
	return 0;
}

// ���� ��� : 1 2 4 4
//			   4 8

// ------------------------------------------------------------------------------------

// int�� �ƴ� �ٸ� ������ �ڷ��� ��� � ����� ��Ÿ������ Ȯ���� ����.

#include <stdio.h>
int main()
{
	char num1 = 1, num2 = 2;				// int�� �ƴ� �ٸ� ������ �⺻ �ڷ�
	printf("%d", sizeof(num1 + num2));		// ���� ��� = 4
											// int��(4byte) ���� ���� ũ���� ������ ��(char�� - 1byte)�� ������ �� ��� ����� int��(4byte)���� ��ȯ�Ѵ�.
	return 0;
}

// ���� ��� : 4

#pragma endregion 


#pragma region p66

// ���� �ڷ����� ���� ������ ���� ���� ���α׷�

#include<stdio.h>
int main()
{
	char myChar;				// ������ ���� myChar ����
	int count, resultNumber;	// ������ ���� count, resultNumber ����
	double weight;				// �Ǽ��� ���� weight ����
								// ������ ������ �������� ��� ī�� ǥ������� �����
	return 0;					
}

#pragma endregion


#pragma region p67

// ������ �����ϰ� �ڷ����� �´� ���� �Ҵ��ϴ� ���α׷�

#include <stdio.h>
int main() 
{
	char myBloodType = 'A';			// char�� ������ �����ϰ� ���� 'A'�� �Ҵ�
	int age, schoolNumber;			
	double weight;					// double�� ���� weight�� ����
	age = 18; schoolNumber = 12;
	weight = 173.4;					// weight�� �Ǽ��� 173.4�� �Ҵ�
	return 0;
}

#pragma endregion 


#pragma region p68

// ������ ���� ���α׷��� �ۼ��Ͽ����� ���α׷��� ���� ����� ��� ��Ÿ������ ���ÿ�.

#include<stdio.h>
int main()
{
	int i = 214783647;
	printf("%d", i + 1); // 214783648 | 214783647 + 1 = 214783648
	return 0;
}

// �� : 214783648 | �ؼ� : int�� ���� i�� 214783647�� ���� �����ϰ� 1�� �������� 214783648�� �ȴ�.

#pragma endregion  


#pragma region p69

// �����÷ο�� ����÷ο찡 ��� ���������� Ȯ���ϴ� ���α׷�

#include<stdio.h>
#include<limits.h> // ������ ������ ��Ÿ���� ����� ������ ��� ���� �߰�
int main()
{
	printf("char�� �ּڰ� : %6d, char�� �ִ� : %6d\n", CHAR_MIN, CHAR_MAX);	// limits.h �� ���� �Ǿ��ִ� CHAR_MIN(char���� �ִ� 127), CHAR_MAX(char���� �ּڰ� -128),
	printf("short�� �ּڰ� : %6d, short�� �ִ� : %6d\n", SHRT_MIN, SHRT_MAX); // SHRT_MIN(short���� �ִ� 32767), SHRT_MAX(short���� �ּڰ� -32768)�� �����
	char cA = 128, cB = -129; 
	short sA = 32768, sB = -32769;
	printf("%d %d\n", cA, cB); // char ���� cA�� 128�� char �ڷ����� �ִ밪(127)�� �Ѿ� �����÷ο�ȴ�. | char ���� cB�� -129�� char �ڷ����� �ּҰ�(-128)�� �Ѿ� ����÷ο�ȴ�.
	printf("%d %d\n", sA, sB); // short ���� sA�� 32768�� shor �ڷ����� �ִ�(32767)�� �Ѿ� �����÷ο�ȴ�. | short ���� sB�� -32769�� short �ڷ����� �ּڰ�(-32768)�� �Ѿ� ����÷ο�ȴ�.
	return 0;

}

// ���� ��� : char�� �ּڰ� : -128, char�� �ִ� : 127
//			   short�� �ּڰ� : -32768, short�� �ִ� : 32767
//			   -128 127
//			   -32768 32767

#pragma endregion


#pragma region p70

// �� ���� �������� ��ȯ�ϴ� ���α׷� 

#include<stdio.h>

int main()
{
	int a = 1, b = 2;
	int temp;
	temp = a; // a = 1, b = 2, temp = 1 | temp(NULL) �� a(1)�� ����
	a = b;	  // a = 2, b = 2, temp = 1 | a(1) �� b(2)�� ����
	b = temp; // a = 2, b = 1, temp = 1 | b(2) �� temp(1)�� ����
	return 0;
}

// ------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
	int a = 1, b = 2;
	a = a + b; // a = 3, b = 2 | a(1)�� b(2)�� ����
	b = a - b; // a = 3, b = 1 | b(2)�� a(3), b(2)�� ������ ����
	a = a - b; // a = 2, b = 1 | a(3)�� b(1)�� ��
	return 0;
}

#pragma endregion 


#pragma region p71

// ������ ���� ���α׷��� �ۼ��Ͽ��� ��, ���α׷��� ���� ����� �ۼ��� ����.

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

// ���� ��� : '2 3 1'

// ------------------------------------------------------------------------------------

// ���� ����� '3 1 2'�� �ǵ��� ���α׷��� �����غ���.

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

// ���� ��� : '3 1 2'

#pragma endregion