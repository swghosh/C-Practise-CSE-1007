#include <stdio.h>

/* program to add two matrices input by the user */
int main(void) {
    
    // take size of 2D array
    int rSize, cSize;
    puts("Specify the order of the matrices. (row size followed by column size) (two integers expected)...");
    scanf("%d %d", &rSize, &cSize);

    // initialise arrays
    int mat1[rSize][cSize], mat2[rSize][cSize], matSum[rSize][cSize];
    int rIndex, cIndex;

    // take input for first array
    puts("Specify elements for first matrix.");
    for(rIndex = 0; rIndex < rSize; rIndex++) {
        printf("Please specify elements for row %d. (%d integers expected)...", rIndex + 1, cSize);
        for(cIndex = 0; cIndex < cSize; cIndex++) {
            scanf("%d", &mat1[rIndex][cIndex]);
        }
    }

    // take input for second array
    puts("Specify elements for second matrix.");
    for(rIndex = 0; rIndex < rSize; rIndex++) {
        printf("Please specify elements for row %d. (%d integers expected)...", rIndex + 1, cSize);
        for(cIndex = 0; cIndex < cSize; cIndex++) {
            scanf("%d", &mat2[rIndex][cIndex]);
        }
    }

    // perform addition
    for(rIndex = 0; rIndex < rSize; rIndex++) {
        for(cIndex = 0; cIndex < cSize; cIndex++) {
            matSum[rIndex][cIndex] = mat1[rIndex][cIndex] + mat2[rIndex][cIndex];
        }
    }

    // print summed array
    puts("\nSum of matrices: ");
    for(rIndex = 0; rIndex < rSize; rIndex++) {
        printf("| ");
        for(cIndex = 0; cIndex < cSize; cIndex++) {
            printf("%d | ", matSum[rIndex][cIndex]);
        }
        puts("");
    }

    return 0;
}