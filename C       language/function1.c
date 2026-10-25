//program of call by vale & call by reference
/*C
int add(){
int m,n,p;
printf("Enter two number:");
scanf("%d %d",&m,&n);
p=m+n;
return p;
}
void main(){
    int g;
    g=add();
    printf("addition is %d",g);
return 0;
}*/




// program of function call    (call by value)  
#include<stdio.h>
int add(int m, int n){  // formal argument // function definition
    int p;
p=m+n;
return p;
}
int main(){
    int g;

    int m,n;
printf("Enter two number:");
scanf("%d %d",&m,&n);
    g=add(m,n);        //actual argument // function call
    printf("addition is %d",g);
return 0;
}