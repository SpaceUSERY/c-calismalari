#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 0 || i == 9)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
                printf("* ");
                for (int l = 0; l < 8; l++)
                {
                    printf("  ");
                }
                printf("*");
            printf("\n");
        }
    }

    return 0;
}
