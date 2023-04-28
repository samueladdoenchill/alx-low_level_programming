#include <stdio.h>

/**
* before_main - prints a message before the main function is executed
*
* This function is an attribute constructor that is executed before the main
* function of the program. It prints a message to the console.
*
* Return: None
*/
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

