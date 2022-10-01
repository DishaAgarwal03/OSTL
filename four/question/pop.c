#include "stdio.h"
int POP(int tos)
    {
        if (tos<0)
            printf("Stack underflow!\n");
        else
        {
            tos--;
            printf("Pop successful!\n");
        }
	return tos;
    }
