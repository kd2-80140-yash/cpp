#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}


void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}


void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter day (1-31): ");
    scanf("%d", &(ptrDate->day));

    printf("Enter month (1-12): ");
    scanf("%d", &(ptrDate->month));

    printf("Enter year (e.g., 2023): ");
    scanf("%d", &(ptrDate->year));
}

int main()
{
    struct Date myDate;
    int choice;

    initDate(&myDate);

    do
    {
        printf("\nDate Operations Menu:\n");
        printf("1. Initialize Date\n");
        printf("2. Print Date\n");
        printf("3. Accept Date\n");
        printf("4. Quit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            initDate(&myDate);
            printf("Date initialized.\n");
            break;
        case 2:
            printDateOnConsole(&myDate);
            break;
        case 3:
            acceptDateFromConsole(&myDate);
            break;
        case 4:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
