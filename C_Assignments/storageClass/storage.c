#include<stdio.h>
#include "extend.h"

// int fn(int *const p){
//     int a =5;
//     *p = 2;
//     p = &a;
// }

int main()
{   
    int autoDemo(){
        auto int j=0;
        j++;
        return j;
    }
    int staticDemo(){
        static int i=0;
        i++;
        return i;
    }
    register int x=0;
    extern int a_c_;
    extern int* p;
    printf("static: %d\n",staticDemo());
    printf("static: %d\n",staticDemo());
    printf("auto: %d\n",autoDemo());
    printf("auto: %d\n",autoDemo());
    printf("extend %d\n",a_c_);
    printf("extend %p %p\n",&a_c_,p);   
    // int* p=&x;
}
