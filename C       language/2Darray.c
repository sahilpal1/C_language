/*

// one dimenisonal array
#include <stdio.h>

int main() {
    int a[5];
    int i; // Define 'i' here
    
    printf("Enter 5 numbers: ");
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Printing the entered numbers
    printf("Entered numbers are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0; // Indicating successful completion of program
}



// two dimensional array
#include <stdio.h>

int main() {
    int i,j;
    int a[3] [3];
    printf("enter 9 number:");
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
} 



*/



#include <stdio.h>

int main() {
    int i, j;
    int a[10][10], b[10][10], c[10][10];
    printf("enter 1st matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("enter 2nd matrix:");
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
        scanf("%d",&b [i][j]);
    }
}
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf(" %d ",c[i][j]);
    }
    printf("\n");
}  
/*
  
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
        printf(" %d ",c[i][j]);
    }
}    
*/
    return 0;    
} 








/*#include <stdio.h>

int main() {
    int i, j;
    int a[10][10], b[10][10], c[10][10]; // Corrected array declarations
    
    // Input for first matrix 'a'
    printf("Enter elements of the 1st matrix (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for second matrix 'b'
    printf("Enter elements of the 2nd matrix (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Adding matrices 'a' and 'b' to get matrix 'c'
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

(Explanation:

#include <stdio.h>: Includes the standard input-output library in C.

int main(): Main function where the execution of the program begins.

int i, j;: Declares variables 'i' and 'j' for loop iterations.

int a[10][10], b[10][10], c[10][10];: Declares arrays 'a', 'b', and 'c' to store matrices.

Input for the first matrix 'a' using nested loops.

Input for the second matrix 'b' using nested loops.

Addition of matrices 'a' and 'b' to get matrix 'c' using nested loops.

Printing the resultant matrix 'c' after addition.

return 0;: Indicates successful completion of the program.)
*/