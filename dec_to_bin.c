#include<stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    //SW engineering approach
    unsigned int num = atoi(argv[1]);
    unsigned int rem;
    unsigned int i = 31;

    unsigned int arr[32];

    for(int i = 0; i < 32; i++)
    {
        arr[i] = 0;
    }

    while(num > 0)
    {
        
        arr[i] = num % 2;
        num = num / 2;
        i--;

    }

    for(int j  = 0; j < 32; j++)
    {
        printf("%d", arr[j]);
    }
    // embedded approach - bitwise
    printf("\n");
    num  = atoi(argv[1]);

    for(int i = 31; i >= 0; i--)
    {
        int k = num >> i;
        if(k & 1)
        {
           printf("%d", 1);
        }
        else
        {
            printf("%d", 0);
        }

    }

    return 0;

}