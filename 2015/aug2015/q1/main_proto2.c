/*
int main(int argc, char *argv[]);
int main(int argc, char **argv);
*/
#include <stdio.h>

int main(int argc, char **argv) {

	int total_number_of_arguments = argc;

	if(total_number_of_arguments <= 1) {
		printf("No input arguments passed\n");
		return -1;
	}

	printf("Total number of arguments passed to main is %d\n",total_number_of_arguments -1);

	/*
	   All the arguments which are passed from the command line will be stored as 'char array' or 'string'
	   in argv. We can visit all the arguments which are passed from command line using "total_number_of_arguments"
	   in this case.
	 */
	return 0;
}
/*
#Assuming that the program is named as main.c
gcc -o ./main ./main.c

# Here we are passing three arguments to the program main
./main 2 "Parthiban" "Hello"

#Here no arguments are passed
./main

#two arguments passed
./main "Hello" "trial"
*/
