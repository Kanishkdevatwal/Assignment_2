#include <stdio.h>

int main() {
    int y = 0;
    int n = 1;
    FILE *outputFile;

    // Open the file for writing
    outputFile = fopen("values.dat", "w");

    if (outputFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Print the sequence values to the console and save them to the file
    for (n = 1; n <= 49; ++n) {
        y=y+n;
        printf("%d \n",y);
        fprintf(outputFile, "%d \n", y);
    }

    // Close the file
    fclose(outputFile);

    printf("Output has been saved to 'values.dat'.\n");

    return 0;
}