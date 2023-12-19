#include <stdio.h>
#include <conio.h>

int cube(int a);
int main(void)
{
    int s;
    s=cube(2)+cube(3)+cube(10);
    printf("%d",s);
    return 0;
}
int cube(int a)
{
    int r;
    r=a*a*a;
    return r;
}


