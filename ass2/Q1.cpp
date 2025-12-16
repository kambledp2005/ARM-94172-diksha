#include <stdio.h>
#include <stdint.h>

/* Function to print 8-bit binary */
void printBinary(uint8_t value)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (value >> i) & 1);
    }
}

int main()
{
    uint8_t reg = 0x2A;   // 00101010

    printf("Initial value:\n");
    printf("Hex: 0x%02X  Binary: ", reg);
    printBinary(reg);
    printf("\n\n");

    /* 1. Set bit number 4 */
    reg |= (1 << 4);
    printf("After setting bit 4:\n");
    printf("Hex: 0x%02X  Binary: ", reg);
    printBinary(reg);
    printf("\n\n");

    /* 2. Clear bit number 1 */
    reg &= ~(1 << 1);
    printf("After clearing bit 1:\n");
    printf("Hex: 0x%02X  Binary: ", reg);
    printBinary(reg);
    printf("\n\n");

    /* 3. Toggle bit number 5 */
    reg ^= (1 << 5);
    printf("After toggling bit 5:\n");
    printf("Hex: 0x%02X  Binary: ", reg);
    printBinary(reg);
    printf("\n");

    return 0;
}
