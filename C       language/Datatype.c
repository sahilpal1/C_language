#include<stdio.h>
int main(){
int x;                 //int =2 and 4 byte         (1byte=8bite)  (4byte=32bit)
char y;               //char=1 byte
float z;             //float=4 byte
x=5;
y='G';
z=78.93;
//printf("x=%i,y=%c,z=%f",x,y,z);  //formate specifier 
printf("%d\n",x); //%d(positive and negitive) %i(used in binary case) %u(unsigned int)
printf("%c\n",y);
printf("%f\n",z); 

return 0;
}