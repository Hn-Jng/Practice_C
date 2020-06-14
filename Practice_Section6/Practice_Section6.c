#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 1;
//	while (i < 5)          //  iteration : 무한,유한한 반복
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
//	int i = 0;
//	while (i < 5)
//	                          //  {} 뺴면 무한루프
//		printf("%i\n",i);
//		i++;                    
//	
//	return 0;
//}


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


/*For문*/

//기본구조
//int main()
//{
//	int i;    // int i; 형태로 for 조건문 안으로 넣을수도 있음
//	for (i = 1; i <= 10; i++)  //for(initialize; test; update)
//		printf("%d ", i);
//	printf("\n");
//
//	for (char c = 'A'; c <= 'Z'; c++)
//		printf("%c ", c);
//	printf("\n");
//
//	for (int x = 1, y = 5; y <= 20; y = (++x * 3) + 10)
//		printf("%d ", x);
//	printf("\n");
//
//	int n;
//	n = 2;
//	for (i = 2; n < 10;)
//	{
//		n = n * i;
//		printf("%d ", n);
//	}
//
//	return 0;
//}

/* for문 예제1*/

//int main()
//{
//	const int speed = 1;
//	double dt = 1.0;     //시간간격
//	double time = 0.0;
//	double distance = 0.0;
//
//	for (int i=0; i < 100; i += 1)
//	{
//		time += dt;
//		distance += speed * dt;
//	
//		printf("Elapsed time = %.10lfs, Distance = %.10lfm\n", time, distance);
//		// dt *= 0.5;    // '*'가 '/'보다 빠름
//	}
//
//	return 0;
//}


int main()
{
	const char first_char = 'A';    // #define 해도 상관없음
	const char last_char = 'G';
	
	scanf("%c", &last_char);

	int num_rows = last_char - first_char + 1;
	int r;
	int c;

	for (r = 0; r < num_rows; ++r)
	{
		for (c = first_char+r; c <= last_char ; ++c)
			printf("%c ", c);
		printf("\n");
	}

		return 0;
}

//void Alphabet(void)
//{
//	char a = 0;
//	for (a = 'A'; a < 'L'; a++)
//	{
//		printf("%c ", a);
//	}
//}