#include <stdio.h>
/*
struct NameOfStructure {

    int a;
    int b;
    char c;

};
*/

struct Employee {

    int age;
    float height;
    char name[10];

};

struct Node {
    int value;
    struct Node* nextPtr;
};

int addNum(int a, int b);

int main()
{

    int a;
    float b;
    char c;
    double d;
    int ary[10];
    char name[10] = "Priya";
    char name2[10];
    int p;
    int* ptr;

    /* name2 = "Hi all"            This wont work */

    ary[0] = 9;
    ary[1] = 3;

    b = 2.3;
    c = 'X';
    a = 9;
    p = 4;
    ptr = &p;

    printf("p = %d , %d\n", p, *ptr);

    printf("Hi all\n");
    printf("Welcome");
    printf("\n%d %f %c",a,b,c);
    printf("\n%d  %d", ary[0], ary[1]);
    printf("\n%s", name);

    a = addNum(3,4);

    printf("\n%d", a);

    printf("\n---------------------------- ");

    struct Employee emp1;
    struct Employee emp2;

    emp1.age = 50;
    emp1.height = 5.6;
    emp2.age = 28;

    printf("\n%d", emp2.age);

    printf("\n--------------------------");

    int* int_ptr;
    struct Node* Node_ptr;

    int_ptr = (int*)malloc(sizeof(int) * 10); /*Array of 10 ints (0 - 9)*/

    Node_ptr = (struct Node*)malloc(sizeof(struct Node));

    /*
        & - get address
        * -  value
    */

    *int_ptr = 9;
    printf("\nVal = %d",*int_ptr);

    (*Node_ptr).value = 100;

    printf("\nValue of node (method 1)= %d", (*Node_ptr).value);
    printf("\nValue of node (method 2)= %d", Node_ptr->value);

    free(Node_ptr);
    free(int_ptr);

    return 0;
}


int addNum(int a, int b)
{
    int c;
    c = a + b;
    return c;

}
