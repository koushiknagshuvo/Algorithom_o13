#include <stdio.h>

int main()
{
    int num[] = {10, 20, 30, 40, 50, 60};
    int value = 50;
    int possion = -1,i;

    for (i = 0; i < 6; i++)
    {
        if (value == num[i])
        {
            possion = i + 1 ;
            break;
        }
    }
    if (possion == -1)
    {
        printf("not found");
    }
    else
    {
        printf(" The position of %d is : %d \n", value, possion);
    }

    return 0;
}
