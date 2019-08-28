// Calculator example using C programming language
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define KEY "Enter the Calculator Operation you want to do : "

// Function prototype declaration
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void squareroot();
int factorial();
void calculator_operations();

// Start of Main Program
int main()
{
    char Cal_op;

    // Function call
    calculator_operations();

    while(1)
    {
        printf("\n");
        printf("%s", KEY);

        Cal_op = getche();

        switch(Cal_op)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '@': modulus();
                      break;

            case '^': power();
                      break;

            case '#': squareroot();
                      break;

            case '!': factorial();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'C':
            case 'c': system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("Options****\n");
                      calculator_operations();
        }
    }
}

//Function Definitions

void calculator_operations()
{
    //system("cls"); Use system function to clear screen instead of clrscr();

    printf("\n             Welcome to C Calculator \n\n");

    printf("******* Press 'Q' or 'q' to quit ");
    printf("The program ********\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter @ symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter # symbol for Square root \n");
    printf("Enter ! symbol for Factorial \n\n");
}

void addition()
{
    int n , total = 0 , k = 0 , number;
    printf("\nEnter the number of elements you want to add : ");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one : \n",n);
    while(k < n)
    {
        scanf("%d",&number);
        total = total + number;
        k++;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a , b , c = 0;
    printf("\nPlease enter first number : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int a , b , mul = 0;
    printf("\nPlease enter first number : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    mul = a * b;
    printf("\nMultiplication of %d * %d = %d\n",a,b,mul);
}

void division()
{
    int a, b;
    double d = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d",&a);
    printf("Please enter second number : ");
    scanf("%d",&b);
    d = (double)a / b;
    printf("\nDivision of %d / %d = %.2lf\n",a,b,d);
}

void modulus()
{
    int a , b , d = 0;
    printf("\nPlease enter first number : ");
    scanf("%d",&a);
    printf("Please enter second number : ");
    scanf("%d",&b);
    d = a % b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    int a , num , p;
    printf("\nEnter two numbers to find the power : \n");
    printf("Base : ");
    scanf("%d",&a);
    printf("Power : ");
    scanf("%d",&num);
    p = pow (a , num);
    printf("\n%d ^ %d = %d \n",a,num,p);
}

void squareroot()
{
    int x;
    double r;
    printf("\nEnter a number to find the square root : ");
    scanf("%d",&x);
    r = sqrt(x);
    printf("\nThe square root of %d = %.2lf \n",x,r);
}

int factorial()
{
    int i , fact = 1 , num;
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");

        return 1;
    }

    for( i = 1; i <= num; i++)
    fact = fact * i;
    printf("\n");
    printf("Factorial of %d! = %d\n",num,fact);
}
