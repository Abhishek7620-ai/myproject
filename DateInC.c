#include <stdio.h>

// Define the structure Date
struct Date {
    int day;
    int month;
    int year;
};

// Function prototypes
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);

int main() {
    struct Date myDate;
    int choice;

    // Initialize the date structure with default values
    initDate(&myDate);

    while (1) {
        printf("\nDate Management Menu:\n");
        printf("1. Initialize Date\n");
        printf("2. Print Date\n");
        printf("3. Accept Date from Console\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                initDate(&myDate);
                printf("Date has been initialized.\n");
                break;
            case 2:
                printDateOnConsole(&myDate);
                break;
            case 3:
                acceptDateFromConsole(&myDate);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

// Function to initialize date with default values
void initDate(struct Date* ptrDate) {
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

// Function to print the date to the console
void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

// Function to accept date input from the console
void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);
    printf("Enter month: ");
    scanf("%d", &ptrDate->month);
    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
}
