#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sort(int array[], int n)
{
    int tmp;
    for(int i = 0; i < n; i++)
    {   
        int s = 0;
        for(int j = 0; j < n -1 -i; j++)
        {
            if(array[j] < array[j+1])
            {   
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                s++;
            }
        }
        if(!s)
        break;    
    }
}

int main(void)
{
    char text[255];
    printf("Enter text:");
    fgets(text, sizeof(text), stdin);
    int n = strlen(text);
    int size = 0;
    int index[n];
    int numbers[n];
    
    for(int i = 0, j = 0; i < n; i++)
    {
        if(isdigit(text[i]))
        {
            numbers[j] = text[i] - '0';
            index[j] = i;
            j++;
            size++;
        }
    }
    
    sort(numbers, size);
    
    for(int i = 0; i < size; i++)
    {
        int k = index[i];
        text[k] = numbers[i] + '0';
    }
    
    for(int i = 0; i < n; i++)
    printf("%c", text[i]);
    printf("\n");
}
