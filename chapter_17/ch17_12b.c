/* An automobile company has serial number for engine parts starting from AA0 to FF9. The other 
characteristics of parts are year of manufacture,material and quantity manufactured.
write a program to retrieve information on part with serial number between BB1 and CC6. */
#include <stdio.h>
#include <string.h>
#define SERIAL_LENGTH 4
#define PART_COUNT 360 
typedef struct
 {
    char serial[SERIAL_LENGTH + 1]; 
    int year_of_manufacture;
    char material[20]; 
    int quantity_manufactured;
} EnginePart;
int isBetweenBB1AndCC6(const char *serial)
 {
    if (strncmp(serial, "BB1", 3) >= 0 && strncmp(serial, "CC7", 3) <= 0)
        return 1;
    return 0;
}
int main()
 {
    EnginePart parts[PART_COUNT] = {};
    printf("Parts between BB1 and CC6:");
    for (int i = 0; i < PART_COUNT; ++i) {
        if (isBetweenBB1AndCC6(parts[i].serial)) 
        {
            printf("Serial: %s\n", parts[i].serial);
            printf("Year of Manufacture: %d\n", parts[i].year_of_manufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantity_manufactured);
            printf("\n");
        }
    }

    return 0;
}
