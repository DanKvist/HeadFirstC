#include <stdio.h>


int main()
{
	int number;
	char motto[] = "Don't eat trash";
	
	puts("Input your number:");
	scanf("%i", &number);
	
	printf("The number is %i and memory address is %p, size %iBytes.\n", number, &number, sizeof(&number));
	printf("The memory address of the motto is %p\n", motto);
	
	printf("%s", motto + 2);
	
	
	return 0;
}