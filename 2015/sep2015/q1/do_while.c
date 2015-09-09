#include <stdio.h>

int main(int argc, char **argv) {
	do {
		switch (argc) {
			case 1:
				printf("No arguments passed\n");
				break;
			case 2:
				printf("One argument passed\n");
				argc--;
				break;
			default:
				printf("More then one argument passed: %d\n", argc);
				argc--;
				break;
		}
	} while (argc != 1);

	return 0;
}
