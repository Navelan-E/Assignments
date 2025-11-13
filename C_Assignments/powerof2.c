 #include<stdio.h>
 int main()
 {
    int num,c=0;
    scanf("%d",&num);
    while(num){
        num=num&(num-1);
        c++;
    }
    printf("%d",c==1);
}