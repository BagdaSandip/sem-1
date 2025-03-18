// Convert number of days into year, week & days.
#include <stdio.h>

int main()
{
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    int years = days / 365;
    int remaining_days = days % 365;

    int weeks = remaining_days / 7;
    remaining_days = remaining_days % 7;

    printf("%d years, %d weeks, and %d days\n", years, weeks, remaining_days);

    return 0;
}
