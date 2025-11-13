#include<stdio.h>
#include"my_lib.h"
int main(){
    int a=10,b=5;
    printf("Integer Operations:");
    printf("Add: %d\n",add(a,b));
    printf("Subtract: %d\n",sub(a,b));
    printf("Multiply: %d\n",multiply(a,b));
    printf("Divide: %d\n",divide(a,b));
}