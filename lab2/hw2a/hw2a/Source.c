#include <stdio.h>
#include <stdlib.h>

int main(){
	char operate;
	double a, b, c;


	fflush(stdin);
	printf("��J�B��l: ");
	scanf("%c", &operate);
	printf("��J��ӹB�⤸: ");
	scanf("%lf %lf", &a, &b);
	if (operate == '+') {
		printf("%.lf", a + b);
	}
	else if (operate == '-') {
		printf("%.lf", a - b);
	}
	else if (operate == '*') {
		printf("%.lf", a * b);
	}
	else if (operate == '/') {
		printf("%.lf", a / b - 0.5);
	}
	else if (operate == '%') {
		a = a - (b * (a / b - 0.5));
		printf("%.lf", a + 0.5);
	}
	printf("\n");

	return main();
}