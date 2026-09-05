//write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include <stdio.h>
int main()
{
    int day;
    printf("enter day:");
    scanf("%d", &day);
    if (day<=5 && day>=1)
    {
        printf("₹2/day" );
    }
    else if (day>=6 && day<=10)
    {
        printf("₹4/day");
    }
    else if (day>=11 && day<=30)
    {
        printf("₹6/day ");
    }
    else{
        printf("membership cancelled");
    }
    return 0;
}