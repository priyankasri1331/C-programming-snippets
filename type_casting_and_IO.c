#include <stdio.h>
int sum();
int main()
{

/*implicit and explicit typecasting*/
float a,b;
a = (int)8.9;
char c;

c = 'a';
printf("%d",a);
printf("\n%f",a);

b = 3/2;
printf("\n%f",b);
b = 3/2.0;
printf("\n%f",b);
b = 3.0/2;
printf("\n%f",b);
int sumOfAb;
sumOfAb = sum();
printf("%d",sumOfAb);
return 0;
}
int sum()
{
    int a;
    int b;
    printf("\nEnter the integer number a\n");
    scanf("%d",&a);
    printf("Enter the integer number b\n");
    scanf("%d",&b);
    return a+b;

}
