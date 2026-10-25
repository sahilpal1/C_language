/*

#include<stdio.h>

int main(int argc, char **argv[]) {
    int i,x,s=0;
    for(i=1;i<argc;i++)
    {
        x=atoi(argv[i]);
        s=s+x;
        //printf("%S",argv[i]);
    }
    //printf("%s",argv[0]);
    //printf("%s\n",argv[1]);
    //printf("%s\n",argv[2]);
    //printf("%s\n",argv[3]);

    return 0;
}
*/

//or---------------------------------------------or
/*

#include<stdio.h>
#include<stdlib.h> // Include stdlib.h for atoi function

int main(int argc, char *argv[]) {
    int i, x, s = 0;
    for(i = 1; i < argc; i++) {
        x = atoi(argv[i]);
        s = s + x;
    }
    
    printf("Sum of command-line arguments: %d\n", s); // Print the sum of command-line arguments

    // Uncomment the following lines to print command-line arguments
    /*
    for(i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    

    return 0;
}
*/

//--------------important thinks----------------------or
/*
- using IDE.
- By using double clicking
- using command prompt 


*/
//--------------important thinks----------------------or




// write a program to convert string into int without using pre defined function atoi.
#include<stdio.h>

int string_to_int(const char *str) {
    int result = 0;
    int sign = 1; // To handle negative numbers

    // Check for negative sign
    if (*str == '-') {
        sign = -1;
        str++; // Move to next character
    }

    // Iterate through each character of the string
    for (; *str != '\0'; str++) {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
        } else {
            // Handle invalid characters
            printf("Invalid character detected: %c\n", *str);
            return 0; // Return 0 for invalid input
        }
    }

    return result * sign; // Apply sign
}

int main() {
    const char *str = "123456";
    int num = string_to_int(str);
    printf("Converted integer: %d\n", num);
    return 0;
}
