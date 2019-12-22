#include <stdio.h>
void f(void);
void sp_to_dash(const char *str);
int series(void);
int main()
{
    extern int first, last;
    int i,k,j;
    for(i = 0; i < 10; i++)
        f();
    sp_to_dash("this is a test");
    printf("%d" "%d", first, last);
    k = series();
    j = series();
    printf("%d" "%d", k,j);
    return 0;
}
void f(void)
{
    int j = 10;
    printf("%d", j);
    j++;/* This line has no effect*/
}

/*use of const, you cannot modify the string, eg: *str = '-'; */
void sp_to_dash(const char *str)
{
   while (*str)
   {
    if (*str == ' ')
    {
        printf("%c",'-');
    }
    else
        printf("%c",*str);
    str++;
   }
}
/* static local */
int series (void)
{
    static int series_num = 100;
    series_num += 23;
    return series_num;
}
/*extern usage*/
int first = 20, last = 30;







