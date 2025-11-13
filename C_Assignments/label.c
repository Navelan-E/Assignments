#include<stdio.h>
int main()
{
    int i=1,n=10;
    printf("before\n");
    goto add;
    printf("skipped\n");
    add:n+=n;
    printf("%d\nafter\n",n);
}