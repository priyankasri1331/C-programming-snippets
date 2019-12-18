#include <stdio.h>

void main()
{
int a = 10;
int b = 10;
int c = 20;
int d;


/*Escape sequences in C*/
printf("\asum is %d",a + c);/*Beep sound*/
printf("\nsum is\b\b\b %d",a + b);/*Backspace*/
printf("\n\fsum is %d\n",a + c);/*Form feed-Print in next page*/
printf("sum is\r%d\n",a + b);/*Carriage return*/
printf("sum \t is %d\n",a + c);/*Tab*/
printf("sum is %d\n",a + c);/*Vertical Tab*/
printf("\\sum is %d\n",a + c);/*Backslash*/
printf("\'sum is %d\n",a + c);/*Single quote*/
printf("\"sum is %d\n",a + c);/*Double quote*/
printf("\"sum is %d\n",a + c);/*?*/
/*Still to do - octal, hexadecimal,\0*/



printf("\n----------------\n");


/*Arithmetic operators in C*/
/*Note : int declaration truncates all decimal point values during calculation*/

printf("\nsum is %d",a + b);
printf("\ndifference is %d",a - b);
printf("\nproduct is %d",a*b);
printf("\nquotient is %d",a/b);
printf("\nremainder is %d",a%b);
printf("\npost unary addition is %d",a++);
printf("\npre unary addition is %d",++a);
printf("\npost unary subtraction is %d",a--);
printf("\npre unary subtraction is %d",--a);

printf("\n----------------\n");

/*Assignment operators in C*/


printf("d=a %d",d = a);
printf("\nd+=a,d=d+a %d",d+=a);
printf("\nd-=a,d=d-a %d",d-=a);
printf("\nd*=a,d=d*a %d",d*=a);
printf("\nd/=a,d=d/a %f",d/=a);
printf("\nd%=a,d=d%a %d",d%=a);

printf("\n----------------\n");

/*Relational operators in C*/


printf("\n%d == %d, %d",a,b,a == b);
printf("\n%d != %d, %d",a,b,a != b);
printf("\n%d > %d, %d",a,b,a > b);
printf("\n%d < %d, %d",a,c,a < c);
printf("\n%d >= %d, %d",a,c,a >= c);
printf("\n%d <= %d, %d",a,b,a <= b);

printf("\n----------------\n");

/*Logical operators in C - decision making*/

printf("\n%d && %d, %d",a,c,a && c);
printf("\n(%d == %d) && (%d == %d) is %d",a,c,a,b,(a == c) && (a == b));
printf("\n(%d == %d) || (%d == %d) is %d",a,c,a,b,(a == c) || (a == b));
printf("\n!(%d == %d) is %d",a,c,!(a == c));

printf("\n----------------\n");

/*Bitwise operators - complement of n = -(n+1)*/

printf("\na&c = %d",a&c);
printf("\na|c = %d",a|c);
printf("\na^b = %d",a^b);
printf("\n~c = %d",~c);
printf("\n6<<2 = %d",6 << 2);
printf("\n6>>1 = %d",6 >> 1);

printf("\n----------------\n");

/*Bitwise operators - complement of n = -(n+1)*/

printf("\nsize of a is %d bytes",sizeof(a));

return 0;
}
