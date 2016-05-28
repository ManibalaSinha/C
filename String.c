#include <stdio.h>

int main() {
	/* define first_name */
	/* define last_name */
	char name[100];
	char first_name = "John";
	char last_name[] = "Doe";
	//Execute Code
	/* testing code */
	if (strncmp(first_name, "John") != 0) return 1;
	if (strncmp(last_name, "Doe") != 0) return 1;

	last_name[0] = 'B';
	sprintf(name, "%s %s", first_name, last_name);
	if (strncmp(name, "John Boe", 100) == 0) {
		printf("Done!\n");
	}

	return 0;
}