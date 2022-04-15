#include <stdio.h>



int main()
{
    char bosta[10] = "arrozarroz";
    int porra = 10;
    size_t len = strlen(bosta);
    for(int i = 0; i < 10; i++)
    {
    printf("%c", bosta[i]);
    printf(len);

    }
    return 0;
}