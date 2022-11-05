#include <stdio.h>
#include <math.h>

// Don't forget complex numbets in C

int main(int argc, char *argv[])
{
	float x, y, c, a1, a2;
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &c);
	
	float D = sqrt(pow(y, 2) - 4*x*c);
	
	a1 = (-y + D)/(2*x);
	a2 = (-y - D)/(2*x);
	
	printf("%f", D);
	printf("\na1 is%f, a2 is %f", a1, a2);
	return 0;
}