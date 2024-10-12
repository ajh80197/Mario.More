#include <stdio.h>

int main(void)
{
    int height;
    int row;
    printf("Height: ");
    
    // Check if scanf successfully reads an integer
    if (scanf("%d", &height) != 1) {
        printf("Error: Invalid input.\n");
        return 1; // Return a non-zero value to indicate an error
    }
    // prints right-sided pyramid
    // number of rows
    for (int i = 0; i < height; i++)
    {   // what do print in each row. (spaces)
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        // print # for remaining spaces
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("  ");
        // reverse triangle
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n"); // adds new line after a full loop iteration
        
    }
    
    
    
    return 0; // Indicate successful execution
}