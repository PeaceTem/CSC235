#include <stdio.h>
#include <string.h>

void reverseString(char stringe[]);

int main(int argc, char *argv[])
{
	char letter[100];
	printf("Enter the sentence to be reversed: \n");
	fgets(letter, 100, stdin);
    reverseString(letter);
	return 0;
}


void reverseString( char stringe[])
{ 
    int string_length = strlen(stringe);
    char temp, output[205];
    int i;
    for(i = 0; i < string_length; i++)
    {
        temp = stringe[string_length -1 - i];
        output[i] = temp;
    }
    printf("%s", output);
}