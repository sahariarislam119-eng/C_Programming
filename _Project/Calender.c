#include <stdio.h>
int getDayCode(int year) {
    int day;
    int y = year - 1;
    day = (y + y/4 - y/100 + y/400 + 1) % 7;
    return day;
}
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void printCalendar(int month, int year) {
    char *months[] = { "", "January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December" };
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year))
        daysInMonth[2] = 29;
    printf("\n\n  ------------%s %d-------------\n", months[month], year);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    int dayCode = getDayCode(year);
    for (int i = 1; i < month; i++) {
        dayCode = (dayCode + daysInMonth[i]) % 7;
    }
    for (int i = 0; i < dayCode; i++) {
        printf("     ");
    }
    for (int day = 1; day <= daysInMonth[month]; day++) {
        printf("%5d", day);
        if (++dayCode > 6) {
            dayCode = 0;
            printf("\n");
        }
    }
    printf("\n");
}
int main() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    if (month < 1 || month > 12 || year < 1) {
        printf("Invalid input!\n");
        return 1;
    } 
    printCalendar(month, year);
    return 0;
}
