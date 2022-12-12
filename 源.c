#include<stdio.h>
int main() {
	int n;
	int a[102] = { 0 };
	scanf("%d", &n);
	if (n == 0) {
		scanf("%d", &a[1]);
		printf("%d", a[1]);
	}
	else {
		for (int i = 1; i <= n + 1; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 1; i <= n + 1; i++) {
			if (a[1] != 0 && i == 1 && abs(a[i]) != 1)
				printf("%dx^%d", a[i], n);
			else if (a[1] != 0 && i == 1 && abs(a[i]) == 1) {
				if (a[i] == 1)
					printf("x^%d", n);
				else
					printf("-x^%d", n);
			}//考虑第一项
			if (a[i] > 0 && i != n && i != 1 && i != n + 1 && abs(a[i]) != 1) {
				printf("+%dx^%d", a[i], n - i + 1);
			}
			else if (a[i] < 0 && i != n && i != 1 && i != n + 1 && abs(a[i]) != 1) {
				printf("%dx^%d", a[i], n - i + 1);
			}//考虑中间项
			if (a[i] != 0 && i != n && i != 1 && i != n + 1 && abs(a[i]) == 1) {
				if (a[i] == 1)
					printf("+x^%d", n - i + 1);
				else
					printf("-x^%d", n - i + 1);
			}
			if (i == n && a[i] > 0 && abs(a[i]) != 1)
				printf("+%dx", a[i]);
			if (i == n && a[i] < 0 && abs(a[i]) != 1)
				printf("%dx", a[i]);
			if (i == n && abs(a[i]) == 1) {
				if (a[i] == 1)
					printf("+x");
				else
					printf("-x");
			}//倒数第二项
			if (i == n + 1 && a[i] > 0)
				printf("+%d", a[i]);
			if (i == n + 1 && a[i] < 0)
				printf("%d", a[i]);//最后一项
		}
	}
	return 0;
}