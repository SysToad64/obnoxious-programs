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


/*
 * What it does:
 * it Seg Faults when it's ran, onless it's being debugged
 * Then it says 'Well now I wont do a SIGSEGV'
 */
