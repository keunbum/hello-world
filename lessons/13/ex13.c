#include <stdio.h>

#define min(a,b) a < b ? a : b

int main(int argc, char *argv[]) {
	int i = 0;
	for (i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	char *states[] = {
		"California", "Oregon", "Washington", "Texas", NULL
	};
	int num_states = sizeof(states) / sizeof(states[0]);
	int mn = min(argc, num_states);
	for (i = 0; i < mn; i++) {
		states[i] = argv[i];
	}
	/*for (i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}*/
	for (i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}
