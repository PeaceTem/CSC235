#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[])
{
	char lecturer[50];
	printf("Enter the name of your lecturer: \n");
	fgets(lecturer, 50, stdin);
	// It prints "Hello world, Dr. Ayinla!"
	printf("\nHello world, %s!", lecturer);
	return 0;
}