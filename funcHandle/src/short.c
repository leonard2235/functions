
#include <stdio.h>
void main( )
{
long num;
short digit;
long total;
printf(“\nType a number between 300000 and 600000: “);
scanf(“%ld”, &num);
printf(“\nNow type a number between 1 and 9: “);
scanf(“%d”, &digit);
total = num / digit;
printf(“\n%ld divided by %d is %ld.\n”, num, digit, total);
}  