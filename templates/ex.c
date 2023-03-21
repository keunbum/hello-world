#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		sum += x;
	}
	return !printf("%d\n", sum);
}
