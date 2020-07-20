﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//////////////////////*For문*////////////////////////

//기본구조
//int main()
//{
//	int i;                       // int i; 형태로 for 조건문 안으로 넣을수도 있음
//	for (i = 1; i < 10; i++)     //for(initialize; test; update)
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

/* For문 예제_중첩 */
//int main()
//{
//	const char start = 'A';
//	const char last = 'L';
//	int r, i;
//
//	for (r = 0; r <= last-start; r++)
//	{
//		for (i = start+r; i <= last; i++)
//		{
//			printf("%c ", i);
//		}
//		printf("\n");
//	}
//		return 0;
//}


/////////////////////////배열//////////////////////////

//int main()
//{
//	int my_numbers[5];
//
//	my_numbers[0] = 1;      // subscrpts, indices, offsets
//	my_numbers[1] = 3;      // []안의 숫자 : 첫번째 메모리 주소로부터 몇칸 떨어져있는지
//	my_numbers[2] = 4;
//	my_numbers[3] = 2;
//	my_numbers[4] = 1024;
//
//	scanf("%d", my_numbers);  // my_numbers는 자체가 메모리 주소를 가리키기 때문에 '&' 붙이지 않으면 my_numbers[0]을 가리킴
//
//	printf("%d\n", my_numbers[0]);
//	printf("%d\n", my_numbers[1]);
//	printf("%d\n", my_numbers[2]);
//	printf("%d\n", my_numbers[3]);
//	printf("%d\n", my_numbers[4]);
//
//	  
//
//	return 0;
//}

#define SIZE 5

//int main()
//{
//	int my_arr[SIZE];
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		my_arr[i] = i * i;
//		1 + 2; // dummmy
//	}
//		
//		
//	for (int i = 0; i < SIZE; i++)     
//		printf("%d ", my_arr[i]);
//		
//	return 0;
//}

/* For문 배열 예제 _ 원하는 만큼 숫자받아 더하기 */

//int main()
//{
//	int num_arr[SIZE];
//	int sum = 0;
//	int i;
//
//	printf("Enter %d numbers : ", SIZE);
//
//	for (i = 0; i < SIZE; i++)
//		scanf("%d", &num_arr[i]);
//
//	for (i = 0; i < SIZE; i++)
//		sum += num_arr[i];
//
//	printf("Sum : %d", sum);
//	
//
//	return 0;
//}

/*예제_ x의 y제곱값 구하기(반복)*/

//int compute_pow(int base, int exp);
//
//int main()
//{
//	int base, exp, result;
//	printf("Enter the base & exponential\n");
//		
//	while (scanf("%d %d", &base, &exp) == 2)
//	{
//		result = compute_pow(base, exp);
//
//		printf("Result : %d\n", result);
//	}
//
//	return 0;
//}
//
//int compute_pow(int base, int exp) //  linking 과정에서 연결
//{
//	int i, result; // main과 별도로 선언해줘야 함
//
//	result = 1;
//	for (i = 0; i < exp; i++)
//		result *= base;
//
//	return result;
//}

