#include <stdio.h>

int main() {
	int num = 5;	// int - 정수
	int* ptr;		// int* - int 자료형을 가진 공간의 주소
	int** dptr;
	int*** tptr;

	ptr = &num; // &(앰퍼샌드)
	dptr = &ptr;
	tptr = &dptr;

	printf("num의 주소: %p\n", &num);
	printf("ptr의 값: %p\n", ptr);
	
	printf("\nnum의 값: %d\n", num);
	printf("ptr을 이용한 num의 값: %d\n", *ptr);
	
	printf("\nptr의 주소: %p\n", &ptr);
	printf("dptr의 주소: %p\n", dptr);

	printf("\ndptr의 주소: %p\n", &dptr);
	printf("tptr의 주소: %p\n", tptr);

	return 0;
}

// Q1) 정수형 변수를 선언하고 포인터 변수에 해당 변수의 주소 저장후, 정수형 변수의 값을 입력받기
// 입력 20 출력 20
/*
int main() {
	int a;
	int* ptr;
	ptr = &a;
	printf("입력 ");
	scanf("%d", ptr);
	printf("출력 %d\n", a);
	return 0;
}*/

/*
void Func() {
	int n1 = 3;
	static int n2 = 3;

	printf("n1: %d, n2: %d\n", n1, n2);
	n1++;
	n2++;
}

int main() {
	Func();
	Func();

	//printf("n2의 값: %d\n", n2);

	return 0;
}*/
