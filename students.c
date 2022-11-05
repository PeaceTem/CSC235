#include <stdio.h>
struct Student
{
    char name[100];
};
int main(int argc, char *argv[])
{
	int population = 10;
	struct Student students[population];
	for (int i = 0; i < population; i++) {
	   if(i == 0) {
	       printf("Enter the name of the first student:\n");
	   } else if(i == 9) {
	        printf("Enter the name of last student:\n");
	   } else {
	       printf("Enter the name of the next student:\n");
	   }
	   fgets(students[i].name, 100, stdin);
	}
	
	for (int j = 0; j < population; j++) {
	    printf("\n%s", students[j].name);
	}
	return 0;
}