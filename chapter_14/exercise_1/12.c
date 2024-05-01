#include <stdio.h>

int main() {
    int array[6] = { 1, 2, 3, 4, 5, 6 };

    int temp[2]; // Temporary array to store elements of shifted part

    // Circularly shift the array to the left by two positions
    for (int i = 0; i < 2; i++) {
        temp[i] = array[i]; // Store the first two elements in the temporary array
    }

    for (int i = 0; i < 6 - 2; i++) {
        array[i] = array[i + 2]; // Shift the elements of the array to the left
    }

    // Place the elements from the temporary array at the end of the array
    array[6 - 2] = temp[0];
    array[6 - 1] = temp[1];

    // Display the shifted array
    printf("Shifted Array (Circular Left by Two Positions):\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
