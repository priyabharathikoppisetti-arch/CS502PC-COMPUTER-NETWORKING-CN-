#include <stdio.h>

void main()
{
    char input[200], output[100];
    int i, j = 0;

    printf("Enter the stuffed string: ");
    scanf("%s", input);

    for(i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == 'F' && input[i + 1] == '\0')
            break;

        if(input[i] == 'E')
            i++;

        output[j++] = input[i];
    }

    output[j] = '\0';

    printf("\nAfter Character Destuffing: %s", output);
}
