#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int myAtoi(char* str)
{
	int sign = 1, result = 0;

	if (*str == '-')
		sign = -1, str++;

	for (; *str >= '0' && *str <= '9' && *str; str++)
		result = result * 10 + *str - '0';

	return result * sign;
}

int main()
{
	int x = 0;
	long y = 11;
	long long i = 0;
	long long ans = 0;
	long long a[11];
	printf("Input number x: ");
	char str[50] = "";
	fgets(str, 50, stdin);// scanf(" %lli", &x); getchar();
	for (int i = 0; str[i] != '\n'; i++)
		if (str[i] < '0' || str[i]>'9') return 1;
	x = myAtoi(str);
	printf("%d\n", x);
	a[0] = 0;
	a[1] = x;
    a[2] = x * x;
	if (a[2] > 0) {
		for (i = 3; i <= 10; i++) {
			if (i % 2 > 0) {
				a[i] = a[i - 1] * a[1];
			}
			else {
				a[i] = a[i / 2] * a[i / 2];
			}
		}

		for (i = 1; i <= 11; i++) {
			ans = ans + i * a[11 - i];
		}
		ans = ans + y;
		printf("Answer =  %lli\n", ans);
		return 0;
	}
	else
	{
		printf("u so stupid u cant print number");
		return 0;

	}
}
