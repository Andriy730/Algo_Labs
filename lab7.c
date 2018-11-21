#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FIRST_YEAR 1924

int year(int m)
{
    char* color[] = {"Green","Red","Yellow","White","Black"};
    char* animal[] = {"Rat","Ox","Tiger","Hare","Dragon","Snake","Horse","Sheep","Monkey","Chicken","Dog","Pig"};
    m -= FIRST_YEAR;
    printf("This is year of %s %s\n", color[m%5], animal[m%12]);
    
    return 0;
}

int year1(char* m, int n)
{
    char* sign[] = {"Goat-Horned","The Water-Bearer","The Fishes","The Ram","The Bull","The Twins","The Crab","The Loin","The Maiden","The Scales","The Scorpion", "The Archer"};
    strcpy(m, sign[n]);
    int a = strlen(m);
    return a;
}

int main(void)
{
    int a = 0; 
    printf("Enter year or month:\n1 year\n2 month\n");
    while(a != 1 && a != 2)
    scanf("%i", &a);
    
    if( a == 1)
    {
        int b = 0;
        printf("Enter the year starting from 1924:");
        while(b < 1924)
        scanf("%i", &b);
        year(b);
    }
    
    if(a == 2)
    {
        int f = 0, i;
        printf("choose a month:\n1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December\n");
        while(f<1 || f>12)
        scanf("%i", &f);
        char* sign = (char*) malloc(50 * sizeof(char));
        int c = year1(sign,f-1);
        for (i = 0; i < c; i++)
        printf("%c", sign[i]);
        printf("\n");
        free(sign);
    }
}
