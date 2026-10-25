// call by reference
#include<stdio.h>
void add (int *p, int *q, int *r){
*r = (*p) + (*q);
}

int main()
{ 
    int x, y, z;
    printf("Enter two number");
    scanf("%d %d",&x,&y);
    add(&x,&y,&z);
    printf("%d",z);
    return 0;
}
