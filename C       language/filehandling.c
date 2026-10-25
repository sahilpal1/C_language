#include<stdio.h>
int main(){
FILE *fp;    
fp=fopen("sahil.txt","w");
fprintf(fp,"I am a web developer");
fclose(fp);
    return 0;
}


//or--------- full explain---------------or








/*#include <stdio.h>

int main() {
    FILE *fp;

    // Open a file named "sahil.txt" in write mode
    fp = fopen("sahil.txt", "w");

    // Check if the file is successfully opened
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write content to the file
    fprintf(fp, "I am a web developer");

    // Close the file
    fclose(fp);

    printf("File 'sahil.txt' created and written successfully.\n");

    return 0;
}

(Explanation:

We include the necessary header file stdio.h for file handling functions.

In the main() function, we declare a file pointer fp.

We use fopen() function to open a file named "sahil.txt" in write mode ("w").

We check if the file is successfully opened. If not, we print an error message and return from the program with a non-zero exit code.

We use fprintf() function to write the content "I am a web developer" to the file.

We close the file using fclose() function to release the resources associated with it.

Finally, we print a success message indicating that the file has been created and written successfully.

You can copy this code into a C file (e.g., file_handling.c) in Visual Studio Code and compile and run it using an appropriate C compiler like GCC.
 Make sure to create a file named "sahil.txt" in the same directory where you run the program to see the output.)
*/