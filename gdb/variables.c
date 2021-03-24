
#include <stdio.h>
#include <stdint.h>

#define NOP __asm__("nop");

int main() {
    int std_int = -24;
    NOP;

    uint32_t unsigned_32 = 32;
    NOP;

    uint64_t unsigned_64 = 64;
    NOP;

    unsigned int unsigned_int = 32;
    NOP;

    return 0;
}