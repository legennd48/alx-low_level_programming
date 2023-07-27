#include <stdio.h>


/**
 * message_b4_main - prints a sentence before the main function
 begins to run
 */
void __attribute__((constructor)) message_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf( "I bore my house upon my back!\n");
}
