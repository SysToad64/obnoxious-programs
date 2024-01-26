#include <stdio.h>

int main()
{
    char *sigsegv;
    sigsegv = "Well now I wont do a SIGSEGV";
    printf("%s\n", ((char *)0x555555556004));
}