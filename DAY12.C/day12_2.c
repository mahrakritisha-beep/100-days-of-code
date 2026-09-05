//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
include <stdio.h>
int main()
{
    int units,bill;
    printf("enter units:");
    scanf("%d", &unit);
    if (unit<=100)
    {
        bill=unit*5;
    }
    else if (unit<=200)
    {
        bill= 100*5 + (units-100)*7;
    }
    else if (unit<=300)
    {
        bill = 100*5 + 100*7 + (units-200)*10
    }
    else 
    {
    bill = 100*5 + 100*7 + 100*10 + (units-300)12;
    }
return 0;
}