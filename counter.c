#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numericCounter(int end);


int main(int argc, char *argv[])
{
	int num;
	printf("Enter the last number in the series:\n");
	scanf("%d", &num);
	numericCounter(num);
	return 0;
}


void numericCounter(int end)
{
    int start = 1;
    
    while (start <= end)
    {
        printf("%d\n", start);
        start++;
    }
}