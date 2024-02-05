#include <stdio.h>

int main() {
    int n;
    FILE *outputFile;

    // Open the file for writing
    outputFile = fopen("values.dat", "w");

    if (outputFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Print the sequence values to the console and save them to the file
    for (n = 0; n < 49; ++n) {
        printf("%d \n", (n+1)*(n+2)/2);
        fprintf(outputFile, "%d \n", (n+1)*(n+2)/2);
    }

    // Close the file
    fclose(outputFile);

    printf("Output has been saved to 'values.dat'.\n");

    return 0;
}