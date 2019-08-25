#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() 
{
	printf("The value of INT_MAX is %i\n", INT_MAX);
	printf("The value of INT_MIN is %i\n", INT_MIN);
	printf("An int takes %i bytes\n", sizeof(int));
	
	printf("The value of CHAR_MAX is %i\n", CHAR_MAX);
	printf("The value of CHAR_MIN is %i\n", CHAR_MIN);
	printf("An char takes %i bytes\n", sizeof(char));
	
	printf("The value of SHRT_MAX is %i\n", SHRT_MAX);
	printf("The value of SHRT_MIN is %i\n", SHRT_MIN);
	printf("An short takes %i bytes\n", sizeof(short));
	
	printf("The value of FLT_MAX is %f\n", FLT_MAX);
	printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
	printf("A float takes %i bytes\n", sizeof(float));
	
	return 0;
}