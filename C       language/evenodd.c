// program of even odd number
/*
#include<stdio.h>
int main(){
    int a;
printf("enter a number");
scanf("%d",&a);
if(a%2==1)
{
    printf("%d is odd",a);
}
else{
    printf("%d is even",a);
}
    return 0;
}
*/




#include<stdio.h>
int main(){
    char ch;
printf("Enter a character");
scanf("%c",&ch);
if(ch== 'a' || ch=='e' || ch=='i'  || ch=='o' || ch=='u'||
ch== 'A' || ch=='E' || ch=='I'  || ch=='O' || ch=='U')
{
    printf("%c is vowel",ch);
}
else{
    printf("%c is not vowel",ch);
}


return 0;
}












