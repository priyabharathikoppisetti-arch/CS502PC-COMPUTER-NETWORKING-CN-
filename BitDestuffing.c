#include<stdio.h>

void main()
{
    int ip_frame[100], op_frame[100];
    int i, j = 0, n;
    int count = 0;

    printf("Enter the length of stuffed frame: ");
    scanf("%d", &n);

    printf("Enter the stuffed frame:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &ip_frame[i]);

    for(i = 0; i < n; i++)
    {
        if(ip_frame[i] == 1)
        {
            count++;
            op_frame[j++] = ip_frame[i];

            if(count == 5)
            {
                i++;       
                count = 0;
            }
        }
        else
        {
            op_frame[j++] = ip_frame[i];
            count = 0;
        }
    }

    printf("\nAfter Bit Destuffing:\n");

    for(i = 0; i < j; i++)
        printf("%d", op_frame[i]);
}
