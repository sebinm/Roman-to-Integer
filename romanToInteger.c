#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int romanToInt(char* s);
int valueCheck(char lorem);

int main(void)
{
    char s[20];

    printf("Chose a roman number: ");
    scanf("%s", s);

    int sum = romanToInt(s);
    printf("The value as integer is: %d", sum);

    return 0;
}

int valueCheck(char lorem)
{
    switch (lorem)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int romanToInt(char * s)
{
    int i;
    int sum = 0;

    for (i = 0; s[i] != '\0'; ++i)
    {
        if (valueCheck(s[i]) >= valueCheck(s[i+1]))
        {
            sum += valueCheck(s[i]);
        }
        else
        {
            sum -= valueCheck(s[i]);
        }
    }
    return sum;
}