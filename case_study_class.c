#include <stdio.h>

int main() {
    int month, year, i;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    while (1) {
        if (month == 12) {
            printf("You entered December — program will run infinitely!\n");
            continue;  
        }
        if (month >= 1 && month <= 6) {
            printf("Days in first six months: ");

            for (i = 1; i <= 6; i++) {
                if (i == 1)
                    printf("January - 31 days | ");
                else if (i == 2) {
                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                        printf("February - 29 days (Leap Year) | ");
                    else
                        printf("February - 28 days | ");
                } else if (i == 3)
                    printf("March - 31 days | ");
                else if (i == 4)
                    printf("April - 30 days | ");
                else if (i == 5)
                    printf("May - 31 days | ");
                else if (i == 6)
                    printf("June - 30 days | ");
            }
            
        }
        else if (month == 10) {
            printf("October - 31 days | Diwali Vacation Holidays: 28, 29, 30 October ");
        }

        else {
            printf("This month is not in the first six months or October.");
        }

        break; 
    }

    return 0;
}
