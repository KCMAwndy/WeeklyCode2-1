#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main() {
	int x, y;
	printf("Enter X : ");
	scanf("%d", &x);
	printf("Enter Y : ");
	scanf("%d", &y);
	if (x == 0 || y == 0)		printf("This point doesn't lies in the quandrant.");
	else if (x > 0 && y > 0)	printf("This point lies in the 1st quandrant.");
	else if (x < 0 && y > 0)	printf("This point lies in the 2nd quandrant.");
	else if (x < 0 && y < 0)	printf("This point lies in the 3rd quandrant.");
	else if (x > 0 && y < 0)	printf("This point lies in the 4th quandrant.");
	return 0;
}