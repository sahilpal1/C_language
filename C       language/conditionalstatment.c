// if statment
/*
#include<stdio.h>
int main() {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is a positive",a);
    }
    else if(a<0)
    {
        printf("%d is negative",a);

    }
   else if(a==0)
   printf("%d is neither negative nor positive",a);
}  
*/






#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);

    if(a>b)
    {
        printf("%d is greater number",a);
    }
    else if(a<b)
    {
        printf("%d it is greater",b);
    }
    else if (a==b)
    {
        printf(" both are equal");
    }
    return 0;
}
