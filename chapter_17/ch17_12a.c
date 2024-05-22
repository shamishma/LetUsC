/* An automobile company has serial number for engine parts starting from AA0 to FF9. The other 
characteristics of parts are year of manufacture,material and quantity manufactured.
create a structure to store informal corresponding to a part.*/
#include <stdio.h>
#define SERIAL_LENGTH 4
typedef struct 
{
    char serial[SERIAL_LENGTH + 1]; 
    int year_of_manufacture;
    char material[20];
    int quantity_manufactured;
} EnginePart;
int main() 
{
    EnginePart part1 = {"AA0", 2023, "Steel", 100};
    EnginePart part2 = {"FF9", 2022, "Aluminum", 50};
    printf("part 1 ===>           :\n");
    printf("Serial                : %s\n", part1.serial);
    printf("Year of Manufacture   : %d\n", part1.year_of_manufacture);
    printf("Material              : %s\n", part1.material);
    printf("Quantity Manufactured : %d\n", part1.quantity_manufactured);
    printf("-------------------------------------\n");
    printf("Part 2===>            :\n");
    printf("Serial                : %s\n", part2.serial);
    printf("Year of Manufacture   : %d\n", part2.year_of_manufacture);
    printf("Material              : %s\n", part2.material);
    printf("Quantity Manufactured : %d\n", part2.quantity_manufactured);

    return 0;
}
