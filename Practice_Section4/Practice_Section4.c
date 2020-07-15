
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <inttypes.h>
#include <stdlib.h>

//int main()
//{
//	char fruit_name[10];
//	printf("What is your favorate fruit?\n");
//	scanf("%s", fruit_name);   // Banan 입력
//	printf("You like %s!\n", fruit_name); // 배열 사용하지 않으면 B만 출력
//	                                      // Char는 문자하나만 표현가능해서 뒤의 문자는 잘리게됨
//	// 배열 사용시 그 자체로 주소값 가리키기 때문에 scanf에서 '&'입력안함
//	// %c -> %s(string의미함), 
//	return 0;
//}


//struct Mystruct
//{
//	int i;
//	float f;
//};
// int main()
//{
//	char c = 'a';
//	char string[10]; // maximally 9 character  +  '/0'(null character) - 마침표역할의 문자
//	
//
//	size_t char_size = sizeof(c);
//	size_t str_size = sizeof(string);
//
//	printf("Size of char type is %zu bytes. \n", char_size);
//	printf("Size of string type is %zu bytes. \n", str_size);
//	
//	printf("%zu\n", sizeof(struct Mystruct));
//
//	return 0;
//	
// }
 
//int main()    // 배열, 주소
//{                                                  
//	int a = 1;
//	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };                    
// 
//	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);
//	printf("%i\n", int_arr[100]);
//
//	return 0;
//}

//int main()
//{
//	char str1[100] = "Hello";
//	char str2[] = "Hello";
//	char str3[100] = "\0";
//	char str4[100] = "\n";
//
//	printf("%zu %zu\n", sizeof(str1), strlen(str1));
//	printf("%zu %zu\n", sizeof(str2), strlen(str2));
//	printf("%zu %zu\n", sizeof(str3), strlen(str3));
//	printf("%zu %zu\n", sizeof(str4), strlen(str4));
//
//	return 0;
//}

//#define PI 3.141592f                           //  보통 맨 윗줄에 모아서
//int main()
//{
//	float radius, area, circum;
//
//	printf("Input radius\n:");
//	scanf("%f", &radius);
//
//	area = PI * radius * radius;                 //area = pi*r*r
//	circum = 2.0f * PI * radius;                  //circumference = 2*pi*r
//
//	printf("Area is %f\n", area);
//	printf("Circumference is %f\n", circum);
//
//	return 0;
//}

//int main()                                  
//{
//	float f = 3.14159265358979323846f;
//	printf("%.20f\n", f);
//	printf("Even if there's a small chance,\
//we owe this to everyone who's not in this room to try.\n");     // 긴 문장 이용시 입력화면 줄바꿈, 출력화면엔 줄바꿈 없이 출력
//
//	int Count_printed = printf("Counting");        //printf 함수의 return값은 출력한 글자 갯수
//	printf("_________________________ %d character\n", Count_printed);
//	return 0;
//}

//int main()
//{
//	printf("%10i\n", 1234567);
//	printf("%-10i\n", 1234567);
//	printf("%+i %+i\n", 123, -123);
//	printf("%i\n%i\n", 123, -123);
//	printf("%X\n", 16);
//	printf("%#X\n", 17);
//	printf("%05i\n", 123);
//	printf("%*i\n", 7, 456);  // ("%7i\n" , 456) 과 같음
//
//	printf("\nPrecision\n");
//	printf("%.3d\n", 1024);
//	printf("%.5d\n", 1024);
//	printf("%.3f\n", 123456.1234567);
//	printf("%.3f\n", 123456.1235);    //출력 : 123456.124로출력 ,,, 그런데 입력값 1233456.1235 하면 1233456.123으로 출력
//	printf("%10.3f\n", 123.45678);
//	printf("%010.3f\n", 123.45678);
//	printf("%.5s\n", "ABCDEFGHIJKLMN");
//	printf("%.s\n", "ABCDEFGHIJKLMN");    // s앞에 1이 아닌 0으로 인식
//
//	printf("\nlength\n");
//	printf("%hhd %hd %d\n", 129, 257, 257);  // hhd표현범위 : -128~127, hhu : 0~255
//	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX+1, 2147483648LL);
//
//	
//	return 0;
//
//}

///*_Bool 자료형*/
//int main()
//{
//	_Bool boolean_true = (2 > 1);
//	_Bool boolean_false = (1 > 2);
//
//	printf("True is %d\n", boolean_true);
//	printf("False is %d\n", boolean_false);
//
//	printf(boolean_true ? "true" : "false");
//	printf("\n");
//	printf(boolean_false ? "true" : "false");
//
//	return 0;
//}

///*자료형 변환(Type Conversions)*/
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

//int main()
//{
//	float n1 = 3.14;     // 4 bytes
//	double n2 = 1.234;   // 8 bytes
//	int n3 = 1024;       // 4 bytes
//
//	printf("%zu %zu %zu\n\n", sizeof(n1), sizeof(n2), sizeof(n3));
//
//	printf("%f %lf %d\n", n1, n2, n3);
//	printf("%d %d %d\n", n1, n2, n3);
//	printf("%lld %lld %d\n", n1, n2, n3);  // lld : data size는 맞지만, type이 맞지않아 이상한 값 나옴
//	printf("%f %d %d\n", n1, n2, n3);
//	printf("%f %lld %d\n", n1, n2, n3);
//
//	return 0;
//
//}

//int main()
//{
//	
//	//unsigned i;               // 받을 때 signed로 받아 unsigned 메모리에 저장했다가, 다시 signed로 꺼내기때문에 출력은 이상없이 됨.
//	//scanf("%i", &i);
//	//printf("%i\n", i);
//
//	//double d = 0;
//	//scanf("%lf", &d);               //double 입력받을 때는 lf , double 선언하고 f로 받으면 size가 안맞아 출력오류
//	//                                //선언한 type에 맞게 형식자? 사용하여야 함
//	//printf("%.20f\n", d);
//
//	//char i = 0;
//	//scanf("%hhd", &i);         // 문자 입력하면, 0으로 print됨
//	//printf("%i\n", i);
//
//	//int a;                   // 1123aaa -> 1123 으로 출력
//	//scanf("%i", &a);
//	//printf("%i", a);
//
//	//intmax_t i;
//	//scanf("%jd", &i);
//	//printf("%jd\n", i);
//
//	//int a, b;
//	//scanf("%d , %d", &a, &b);      // ,붙이면 띄어쓰기대신 ,으로 구분.  쉼표앞에 띄어쓰기 유무에 따른 출력 유의할 것
//	//printf("%d %d\n", a, b);
//
//	///*scanf()의 ruturn*/	            // scanf로 몇개를 입력 받았는지 출력
//	//int a, b;
//	//int i = scanf("%d%d", &a, &b);
//	//printf("%d", i);
//
//	//int i = 12345;   
//	//int width = 0;  
//	//printf("Input width :");
//	//scanf("%d", &width);      
//	//printf("%*d\n", width, i); 
//
//	//int i;
//	//int o, p = 10;
//	//scanf("%*d%*d%d", &i,&o,&p);          // scanf에서 %*d 값은 무시됨.  
//	//                                      // 1,2번째 값 저장이 안되기 때문에 입력받은 세번째 값이 &i로 처음으로 저장, &o,&p는 
//	//printf("your third input = %d", i);   // o,p는 초기화 한 경우 초기화값, 아닌 경우 쓰레기값 출력
//
//
//	return 0;
//}