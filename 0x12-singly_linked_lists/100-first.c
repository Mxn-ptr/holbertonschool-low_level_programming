#include <stdio.h>

void first(void)__attribute__((constructor));
	
/**
 * first - prints before main function
 */

void first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
