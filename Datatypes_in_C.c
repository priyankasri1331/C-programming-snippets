#include <stdio.h>
enum lovers{
    priya =6,
    sarath,
    guru =0,
    pk

};
int boyOrGirl(enum lovers name);

int main()
{
/*
int	                        at least 2, usually 4	             %d
char	                    1	                                 %c
float	                    4	                                 %f
double	                    8	                                 %lf
short int                   2 usually	                         %hd
unsigned int	            at least 2, usually 4	             %u
long int	                at least 4, usually 8	             %li
long long int	            at least 8	                         %lli
unsigned long int           at least 4	                         %lu
unsigned long long int	    at least 8	                         %llu
signed char	                1	                                 %c
unsigned char	            1	                                 %c
long double	                at least 10, usually 12 or 16	     %Lf */



int a;
printf("%d",pk);
printf("\n%d",sarath);

a = boyOrGirl(sarath);
printf("%d",a);

return 0;
}

int boyOrGirl(enum lovers name)
{
    if(name == pk || name == priya)
        return 1;
    else
        return 0;
}



