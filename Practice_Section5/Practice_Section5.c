#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//////////////////* While문 */////////////////////

//int main()
//{
//	int i = 1;
//	while (i < 5)          / 
//	{
//		printf("i before =%d\n", i);
//		i+=1;
//		printf("i after = %d\n", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int n=0;
//	int m;          //선언,초기화
//	while(n<11)          // 조건
//	{
//		printf("%d", n);
//		m = n++;       // 변화하는 조건
//		printf("\t%d\n", m);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 5)
//	                          //  {} 뺴면 무한루프
//		printf("%i\n",i);
//		i++;                    
//	
//	return 0;
//}

/*while예제_scanf() return값 활용한 조건 */
//int main()
//{
//	int num, sum = 0;
//	int status;
//
//	printf("Enter an integer (q to quit) :");
//
//	status = scanf("%d", &num);   // scanf() return value를 while 들어가는 조건문으로 넣어서 status변수 생략가능
//
//	while (status == 1)   // equality operator 
//	{
//		sum = sum + num;
//		printf("Enter next integer (q to quit) : ");
//	
//		status = scanf("%d", &num);
//	
//	}
//
//	printf("Sum : %d", sum);
//
//	return 0;
//}

/* do while문 */
//int main()
//{
//	int passwd = 407;
//	int guess = 0;
//
//	//printf("Enter secret code : ");
//	//scanf( "%d", &guess);
//
//	//while (passwd != guess)
//	//{
//	//	printf("Enter secret code : ");
//	//	scanf("%d", &guess);
//	//	
//	//}
//	//printf("Good!");
//
//	////  위의 식과 결과 같음 ////
//	do
//	{
//		printf("Enter secret code : ");
//		scanf("%d", &guess);
//	} 
//	while (passwd != guess);
//	
//	printf("Good!!");
//	
//
//	return 0;
//}

/* 예제_복리계산 */
//int main()
//{
//	float seed_money, target_money, annual_interest;
//
//	printf("Input seed money(won) : ");
//	scanf("%f", &seed_money);
//
//	printf("Input target_money(won) : ");
//	scanf("%f", &target_money);
//
//	printf("Input annual_interest(%%) : ");
//	scanf("%f", &annual_interest);
//
//	float fund = seed_money;
//	int year_count=0;
//	while (fund < target_money)
//	{
//		
//		fund = fund + fund * annual_interest/100;  // fund += fund * (annual_interest/100 와 같음
//		year_count = year_count + 1;                   // year_count += 1;  ,  year_count++;  와 같음
//
//		printf("Year count :%d \t fund : %.1f(원)\n", year_count, fund);
//
//	}
//
//	printf("It takes %d years\n", year_count);
//
//	return 0;
//}

/* 예제_ 초 입력 -> 시간,분,초 변환 */
//int main()
//{
//	int seconds = 0, minutes = 0, hours = 0;
//
//	printf("Input seconds : ");
//	scanf("%d", &seconds);
//
//	while (seconds >= 0)
//	{
//
//		minutes = seconds / 60;
//		seconds = seconds % 60;     //seconds %= 60;
//
//		hours = minutes / 60;
//		minutes = minutes % 60;     //minutes %= 60;
//
//		printf("%dhours, %dminutes, %dseconds\n", hours, minutes, seconds);
//		
//		printf("Input seconds : ");
//		scanf("%d", &seconds);
//	}
//
//	printf("Good bye\n");
//
//	return 0;
//}

/* 예제 */
//void draw(int n);    //ANSI function prototype declaration
//
//int main()
//{
//	int i = 5;
//	char c = '#';
//	float f = 7.1f;
//
//	draw(i);
//	draw((int)c);
//	draw((int)f);
//
//	return 0;
//}
//
//void draw(int n)
//{
//	while (--n > 0)
//	{
//		printf("*%d",n);
//	}
//		printf("\n");
//	
//}