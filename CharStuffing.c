#include <stdio.h>

void main()
{
    char input[100], output[200];
    int i, j = 0;

    printf("Enter the input string: ");
    scanf("%s", input);

    output[j++] = 'F';   

    for(i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == 'F' || input[i] == 'E')
        {
            output[j++] = 'E';   
        }
        output[j++] = input[i];
    }

    output[j++] = 'F';   
    output[j] = '\0';

    printf("\nAfter Character Stuffing: %s", output);
}
