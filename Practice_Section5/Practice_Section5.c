#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int n=0;
//	int m;          //선언,초기화
//	while(n<11)          // 조건
//	{
//		printf("%d", n);
//		m = ++n;       // 변화하는 조건
//		printf("\t%d\n", m);
//	}
//
//	return 0;
//}

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

//int main()
//{
//	int x = 0;
//
//	while (x < 10)
//	{
//		x++;
//		printf("%d", x);
//	}
//	return 0;
//}

/*자료형 변환(Type Conversions)*/
//int main()
//{
//	float f = 3.14f;    // 큰 메모리 size에 작은것을 넣기 때문에 문제없음
//	double d = f;
//	int i;
//
//	d = 1.25;
//	f = 1.25;
//	//f = 1.123f;          // demotion in assignments. f붙여야함, float과 double에서 인식하는 값의 차이가 있음
//	d = f + 1.234;
//	f = f + 1.234;        // float에 double 더하면 double형태가 되기 때문에 float메모리에 담으면 손실 경고 뜸
//
//	/*casting operators(의도적으로 형변환)*/
//	
//	d = (double)3.14f;
//	i = 1.6 + 1.7;  //3
//	i = (int)1.6 + (int)1.7;   //2
//	return 0;
//
//}

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
//		printf("*,%d",n);
//	}
//		printf("\n");
//	
//}