#include "stdio.h"
int PUSH(int tos, int *a, int n)
    {
        if (tos>=n-1)
            printf("Stack overflow!\n");
        else
        {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            tos++;
            a[tos]=num;
            printf("Push successful\n");
        }
	return tos;
    }
