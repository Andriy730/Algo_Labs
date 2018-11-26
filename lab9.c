#include <stdio.h>
#include <string.h>
#include <ctype.h>

int writefile(FILE* file);
int copy(FILE* F1, FILE* F2);
int count(FILE* file);

int main(void)
{
   FILE* F1 = NULL;
   FILE* F2 = NULL;
   int a;
    
   F1 = fopen("F1.txt", "w");
   if(F1 == NULL)
   {
       printf("Can not open file\n");
       return 1;
   }
   
   writefile(F1);

   F1 = fopen("F1.txt", "r");
   if(F1 == NULL)
   {
       printf("No such file or directory\n");
       return 1;
   }    
   F2 = fopen("F2.txt", "w");
   if(F2 == NULL)
   {
       printf("Can not open file\n");
       return 1;
   }

   copy(F1, F2);
   F2 = fopen("F2.txt", "r");
   if(F2 == NULL) 
   return 1;
       
   a = count(F2);
   
   printf("%i\n", a);
   return 0;
}

int writefile(FILE* file)
{
    char mas[255];
    for(int i = 0; i < 10; i++)
    {
        printf("Enter string:");
        fgets(mas, 255, stdin);
        fprintf(file, "%s", mas);
    } 
    fclose(file);
    return 0;
}


int copy(FILE* F1, FILE* F2)
{   
    char buf[255];
    
    while(fgets(buf, 255, F1) != NULL)
    {
        int p = 0;
        for(int i = 0, j = strlen(buf); i < j; i++)
        {
            if(isdigit(buf[i]))
            {
                p = 1;
                break;  
            }
        }
        if(p == 0)
        fputs(buf, F2);
    }
    
    fclose(F1);
    fclose(F2);
    return 0;
}

int count(FILE* file)
{
    char buf[255];
    int count = 0;
    while(fgets(buf, 255, file) != NULL)
    {
        for(int i = 0, j = strlen(buf); i < j; i++)
        {
            if(buf[i] == ' ')
            continue;
            else if(buf[i] == 'A' || buf[i] == 'a')
            {
                count++;
                break;
            }
            else
            break;
        } 
    }
    
    fclose(file);
    return count;
}
