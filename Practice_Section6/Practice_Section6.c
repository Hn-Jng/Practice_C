#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;
	int status;

	printf("Enter an integer (q to quit) :");

	status = scanf("%d", &num);   // scanf() return value를 while 들어가는 조건문으로 넣어서 status변수 생략가능

	while (status == 1)   // equality operator 
	{
		sum = sum + num;
		printf("Enter next integer (q to quit) : ");
	
		status = scanf("%d", &num);
	
	}

	printf("Sum : %d", sum);

	return 0;
}
