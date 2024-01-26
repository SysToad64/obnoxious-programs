// Made by: SysToad64
// SIGSEGV'nt
// Made for Linux

#include <stdio.h>

int main()
{
    char *sigsegv;
    sigsegv = "Well now I wont do a SIGSEGV\n";
    printf("%s\n", ((char *)0x555555556004));
}
