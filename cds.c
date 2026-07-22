#include <stdio.h>

void main()
{
    char input[200], output[100];
    int i, j = 0;

    printf("Enter the stuffed string: ");
    scanf("%s", input);

    for(i = 1; input[i] != 'F'; i++)   
    {
        if(input[i] == 'E')
        {
            i++;    
            
        }
        output[j++] = input[i];
    }

    output[j] = '\0';

    printf("\nAfter Character Destuffing: %s", output);
}
