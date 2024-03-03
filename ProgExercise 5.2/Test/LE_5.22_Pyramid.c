#include <stdio.h>

int main(){
    int pyramidHeight;

    //gets from user height of pyramid
    printf("Enter a value for N: ");
    scanf("%d", &pyramidHeight);

    for (int i = 1; i <= pyramidHeight; i++)
    {
        //first half of the pyramid, up to middle
        for (int j = 1; j <= pyramidHeight; j++)
            if (i + j - pyramidHeight > 0)
                printf("%d", i + j - pyramidHeight);
            else
                printf(" ");

        //second half of the pyramid, from middle
        for (int k = 1; k < i; k++)
            printf("%d", i - k);

        printf("\n");
    }

    return 0;
}
