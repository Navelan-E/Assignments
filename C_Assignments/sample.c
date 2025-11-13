#include<stdio.h>
int main()
{
    int i=65;
    switch(i){
        case 97:
        {
            printf("97");
            break;
        }
        case 'b':
        {
            printf("a");
            break;
        }
        default:
        {
            printf("default");
            break;
        }
        case 'A':
        {
            printf("A");
            break;
        }
        
    }
}