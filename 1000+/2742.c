#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	int i;

	scanf("%d", &a);

	for (i = a; i >= 1; i--) {
		printf("%d\n", i);
	}

	return 0;
}