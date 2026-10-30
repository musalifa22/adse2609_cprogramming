// c program to display "hello world"

// pro processor

#include <Stdio.h>

//main function provided the entry point to the program \aplication

int main ()
{
// variable to be used in the program
int num1,num2,sum;

//prompt the user for the variable to be added
printf("please enter the value of the first number to be added;\n");
// read in the value of the second number
 scanf("%d",&num1);

 printf("please enter the value of the second number added;\n");
// read in the value of the second number
 scanf("%d",&num2);

//Add the two numbers and asssign the result to sum
sum =num1 + num2;
printf("\n%d + %d=%d\n",num1,num2,sum);
return 0;
}
