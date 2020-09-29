#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long int x;
	long y = 11;
	int i = 0;
	int ans = 0;
	int a[11];
	printf("Input number x: ");
	int r;
	scanf_s("%d", &x);
	a[0] = 0;
	a[1] = x;
    a[2] = x * x;
  for (i = 3; i <= 10; i++) {
	  if (i % 2 > 0) {
		  a[i] = a[i - 1] * a[1];
	  }
	  else { 
		  a[i] = a[i / 2] * a[i / 2]; }
  }
  for (i = 1; i <= 11; i++) {
	  ans = ans + i * a[11 - i];
  }
  ans = ans + 11; 
	printf("Answer =  %d\n", ans);
	return 0;
}
