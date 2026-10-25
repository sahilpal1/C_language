/*#include<stdio.h>
void main(){
FILE *fp;
char x[20];
fp=fopen("a.txt"," w ");
fputs("hello friend");








//fgets(x,14,fp);
//printf("%s",x);








//x=fgetc(fp);
//printf("%c",x);
/*while (!feof(fp))
{
    x=fgetc(fp);
printf("%c",x);   
}

//fscanf(fp,"%s",x);
printf("%s",x);
//fprintf(fp,"friends");


fclose(fp);
}*/
#include <stdio.h>

// Define the structure outside of the main function
struct student {
    int roll;
    int age;
    float per;
    int marks;
};

int main() {
    FILE *fp;
    struct student j1;

    fp = fopen("sahil.txt", "rb"); // Open the file in binary read mode
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1; // Return with an error code if file opening failed
    }

    fread(&j1, sizeof(j1), 1, fp); // Read the contents of the file into the structure

    fclose(fp); // Close the file

    // Print the values of the structure members
    printf("%d %d %.2f %d\n", j1.roll, j1.age, j1.per, j1.marks);

    return 0;
}











    // Assign values to the structure members
   // s1.roll = 5;
   // s1.age = 18;
    //s1.per = 81.50;
    //s1.marks = 610;
   // fp=fopen("a.txt"," w ");
    //fwrite(&s1,sizeof(struct student),1,fp);

    // Print the values of the structure members
    //printf("Roll: %d\n", s1.roll);
    //printf("Age: %d\n", s1.age);
    //printf("Percentage: %.2f\n", s1.per);
    //printf("Marks: %d\n", s1.marks);

  





