/*****************************************************************************
* CMP_SC 1050
* SP 2024
* Lab 2
* By Jacob Esquivel (jae3kp)
* January 26, 2024
*****************************************************************************/
#include <stdio.h>
int main ()
{
int integer1, integer2;
//Requests two integers from the user
printf("Enter an integer:");
scanf("%d", &integer1);
printf("Enter another integer:");
scanf("%d", &integer2);
//Prints both of the gathered integers
printf("Your first integer was %d and your second integer was %d\n", integer1, integer2);
//Multiplies the first integer by the second integer
printf("Multiplying these = %d\n", integer1 * integer2);
//Divides the second integer by the first integer
printf("Dividing the second integer by the first integer = %d\n", integer2 / integer1);
//Computes the value of the integer1 plus 5, quantity times integer2
printf("The crazy equation value = %d\n", (integer1 + 5) * integer2);
//Reminds the user of their original integer values
printf("Your first integer was %d and your second was %d\n", integer1, integer2);
return 0;
}