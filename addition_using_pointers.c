#include <stdio.h>
int main()
{
int *p1,*p2;
int x,y,sum;
p1 = &x;
p2 = &y;

scanf("%d %d",&x,&y);
sum = *p1 + *p2;
printf("\n%d %d %d",sum,*p1,*p2);
return 0;
}

