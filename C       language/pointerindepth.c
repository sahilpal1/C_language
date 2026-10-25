/*#include<stdio.h>
void main()
{
int x=5, y=6,z=4;
printf("%d %d %d",&x,&y,&z);

}*/


// program of pointer (" POINTER CAN STORED OF ANOTHER VARIABLE IS CALLED POINTER")
#include<stdio.h>
void main(){

    int x=5;
    int *y;
    int **z;
    y=&x;
    z=&y;
    **z=76;
    *y=23;
    printf("%d",(**z));
}