/*
#include <stdio.h>
int main(){
    int x,y,g;
    printf("Enter first number");
    scanf("%d",&x);
    printf("enter second number");
    scanf("%d",&y);
    printf("enter third number");
    scanf("%d",&g);
    if(x>y && x>g)
    {
        printf("%d is greater",x);
    }
    else if (y>x && y>g)
    {
        printf("%d is greater",y);
    }
        else if (g>x && g>y)
    {
        printf("%d is greater",g);
    }

return 0;

}
*/  

// write the program to check whether the given character is vowel or not.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the entered character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}