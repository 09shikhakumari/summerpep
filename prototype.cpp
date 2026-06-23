#include <stdio.h>

void f1(void);
void f2(void);
int main(void);
void f3(void);
#pragma startup f1 100;
#pragma startup f1 105;
#pragma exit f2

int main()
{
    printf("I am main....\n");
    return 0;
}
void f1(void)
{
    printf("I am function f1...\n");
}
void f2(void)
{
    printf("I am function f2...\n");
}
