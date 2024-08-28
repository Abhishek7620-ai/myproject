#include <iostream>
using namespace std;

// Define the structure Date
struct Date {
    int day;
    int month;
    int year;

    // Function to initialize date with default values
    void initDate() {
    this->day = 1;
    this->month = 1;
    this->year = 2000;
}
    // Function to print the date to the console
    void printDateOnConsole() {
        cout<<"Date: "<< this->day<<"/"<<this->month<<"/"<< this->year;
}
// Function to accept date input from the console
    void acceptDateFromConsole() {
        cout<<"Enter day: ";
        cin>>this->day;
        cout<<"Enter month: ";
        cin>>this->month;
        cout<<"Enter year: ";
        cin>>this->year;
}
};


int main() {
    struct Date myDate;
    int choice;

    // Initialize the date structure with default values
    myDate.initDate();

    while (1) {
        cout<<"\nDate Management Menu:\n";
        cout<<"1. Initialize Date\n";
        cout<<"2. Print Date\n";
        cout<<"3. Accept Date from Console\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice (1-4): ";
        cin>>choice;

        switch (choice) {
            case 1:
                myDate.initDate();
                cout<<"Date has been initialized.\n";
                break;
            case 2:
                myDate.printDateOnConsole();
                break;
            case 3:
                myDate.acceptDateFromConsole();
                break;
            case 4:
                cout<<"Exiting program...\n";
                return 0;
            default:
                cout<<"Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }

    return 0;
}