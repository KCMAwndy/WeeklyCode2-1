#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int x, y;
	printf("Enter X : ");
	scanf("%d", &x);
	printf("Enter Y : ");
	scanf("%d", &y);
	if (x == 0 || y == 0)	printf("NO Q");
	else if (x > 0 && y > 0)	printf("Q1");
	else if (x < 0 && y>0)	printf("Q2");
	else if (x < 0 && y < 0)	printf("Q3");
	else if (x > 0 && y < 0)	printf("Q4");
	return 0;
}