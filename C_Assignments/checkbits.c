#include<stdio.h>
#include<string.h>
int main()
{
    int num,c=0;
    // char bits[10];
    // scanf("%s",bits);
    // for(int i=0;i<strlen(bits);i++){
    //     if(bits[i]=='1'){
    //         c+=1;
            
    //     }
    // }
    scanf("%d",&num);
    while(num){
        num=num&(num-1);
        c++;
    }
    printf("%d",c);
}