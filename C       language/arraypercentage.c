#include<stdio.h>
void main(){
    int a[10],i,s=0,c=0;
    float per;
    printf("Enter  marks of five subject :");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Total marks is %d",s);
    per =(s/500.0) * 100;
printf("percentage is %d",per);
for(i=0; i<5; i++)
{
    if(a[i]<40){
        c++;
    }

}
if(c>0)
{
    printf(" sorry.You are Fail");
}
else{
    if(per>70)
    {
        printf("wow! you got distinction");

    }
    else if(per>60)
    {
        printf("wow! you got first");

    }
    else if(per>55)
    {
        printf("wow! you got pass class");
    }
}



} 