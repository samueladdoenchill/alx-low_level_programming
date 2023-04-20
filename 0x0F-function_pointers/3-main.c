#include "3-calc.h"

/**
 * main - Entry point for the program that performs simple operations
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int num1, num2, result;
char operator;
int (*func_ptr)(int, int);

if (argc != 4)
/*Check if the correct number of arguments were passed*/
{
printf("Error\n");
exit(98);
/*Exit with error code 98*/
}
num1 = atoi(argv[1]);
/*Convert the first argument to an integer*/
num2 = atoi(argv[3]);
/*Convert the third argument to an integer*/
func_ptr = get_op_func(argv[2]);
/*Get the function pointer based on the operator*/
if (!func_ptr)
/*Check if the function pointer is NULL*/
{
printf("Error\n");
exit(99);
/*Exit with error code 99*/
}
operator = *argv[2];
/*Get the operator character*/
if ((operator == '/' || operator == '%') && num2 == 0)
/*Check for division by 0*/
{
printf("Error\n");
exit(100);
/*Exit with error code 100 */
}
result = func_ptr(num1, num2);
/*Call the function using the function pointer */
printf("%d\n", result);
return (0);
/*Exit with success code 0 */
}
