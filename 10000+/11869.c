#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n, input, res = 0;
	scanf("%lld", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &input);
		res ^= input;
	}

	if (res == 0) printf("cubelover\n");
	else printf("koosaga\n");
	return 0;
}