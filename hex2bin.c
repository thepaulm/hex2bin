#include <stdio.h>

int main(int argc, char *argv[]) {
	unsigned int num = 0;
	unsigned char *p;
	p = (unsigned char *)&num;

	if (argc < 2) {
		printf("pass me a hex number.\n");
		return 0;
	}

	sscanf(argv[1], "%x", &num);
	for (int i = sizeof(num); i > 0; i--) {
		for (int j = 8; j > 0; j--) {
			if (p[i-1] & 1 << (j-1)) {
				printf("1");
			} else {
				printf("0");
			}
		}
		printf(" ");
	}
	printf("\n");
	return 0;
}
