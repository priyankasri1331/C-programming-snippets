#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define ALPHA(CH) ((CH >= 'a' && CH <= 'z')  || (CH >= 'A' && CH <= 'Z')? 1: 0)

int main(int argc,char* argv[])
{
    
    unsigned int num = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("%d\n", sizeof(int));

    printf("%d \t %d", num, num >> (sizeof(int) * 8 - 1));
    
    printf("%d \t %d", num2, num2 & 0x8000000);*/
    
    
    /*char letter = *argv[1];
    int al = ALPHA(letter);
    if(al)
    {
        printf("%c is a character\n", argv[1]);
    }
    else
    {
        printf("%c is not a character\n", argv[1]);
    }*/
    
    
    /*//Area of circle
    float r = atof(argv[1]);
    printf("%f\n", PI*r*r);*/

    return 0;
}