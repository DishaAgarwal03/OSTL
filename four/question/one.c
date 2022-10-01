#include "stdio.h"
#include "stack.h"
void main()
{
    int a[50], n, c, i, tos=-1;
    printf("Enter the length of the array: ");
    scanf("%d", &n);    

    while(1)
    {
        printf("\nEnter \n1 to push \n2 to pop \n3 to display \n4 to exit\n");
        scanf("%d", &c);
        if (c==1) tos=PUSH(tos, a, n);
        else if (c==2) tos=POP(tos);   
        else if (c==3) DISPLAY(a, tos+1);
        else if (c==4) break;
        else printf("Invalid input\n");
    }
}
