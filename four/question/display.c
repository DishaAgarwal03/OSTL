#include "stdio.h"
void DISPLAY(int a[], int n)
{
    printf("\nArray is: ");
    for(int i=0; i<n; i++)
        printf("%d  ", a[i]);
    printf("\n");
}
