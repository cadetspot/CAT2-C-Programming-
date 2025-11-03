/*NAME: Odhiambo Geofrey Odiwuor 
Reg NO: PA106/G/28771/25
*/


#include <stdio.h>

#include <stdlib.h>



void write_integers_to_file();

void calculate_and_write_results();

void display_file_contents(const char* filename);




int main() {

    write_integers_to_file();

    calculate_and_write_results();




    

    display_file_contents("input.txt");

    display_file_contents("output.txt");




    return 0;

}



void write_integers_to_file() {

    FILE *fptr;

    int num, i;




    

    fptr = fopen("input.txt", "w");

    if (fptr == NULL) {

        printf("Error: Could not open input.txt for writing.\n");

        return;

    }




    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {

        printf("Integer %d: ", i + 1);

        if (scanf("%d", &num) != 1) {

            printf("Invalid input. Please enter an integer.\n");

            

            while (getchar() != '\n');

           

        }

        fprintf(fptr, "%d\n", num);

    }

    fclose(fptr);

    printf("10 integers have been successfully written to input.txt.\n");

}

void calculate_and_write_results() {

    FILE *in_fptr, *out_fptr;

    int num, sum = 0, count = 0;

    float average;




    // Open input file in read mode

    in_fptr = fopen("input.txt", "r");

    if (in_fptr == NULL) {

        printf("Error: Could not open input.txt for reading.\n");

        return;

    }




    // Read integers from the file and calculate sum

    while (fscanf(in_fptr, "%d", &num) == 1) {

        sum += num;

        count++;

    }

    fclose(in_fptr);




    

    if (count > 0) {

        average = (float)sum / count;

    } else {

        average = 0.0;

    }




    // Open output file in write mode

    out_fptr = fopen("output.txt", "w");

    if (out_fptr == NULL) {

        printf("Error: Could not open output.txt for writing.\n");

        return;

    }




    // Write sum and average to output file

    fprintf(out_fptr, "Sum of the numbers: %d\n", sum);

    fprintf(out_fptr, "Average of the numbers: %.2f\n", average);

    fclose(out_fptr);

    printf("Sum and average have been successfully written to output.txt.\n");

}



void display_file_contents(const char* filename) {

    FILE *fptr;

    char ch;




    printf("--- Contents of %s ---\n", filename);




    // Open the file in read mode

    fptr = fopen(filename, "r");

    if (fptr == NULL) {

        printf("Error: Could not open %s for reading.\n", filename);

        return;

    }




  

    while ((ch = fgetc(fptr)) != EOF) {

        printf("%c", ch);

    }




    fclose(fptr);

    printf("\n");

}


