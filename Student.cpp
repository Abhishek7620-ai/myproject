#include <iostream>
#include <string.h>
using namespace std;

// Define the structure Date
class Student {
    int rollNo;
    string name;
    int marks;

    // Function to initialize date with default values
public:
    void initStudent() {
    this->rollNo = 109;
    this->name = "Abhishek";
    this->marks = 59;
}
    // Function to print the date to the console
    void printStudentOnConsole() {
        cout<<"Student Data : \n"<< "Student Roll No. : "<<this->rollNo<<"\nStudent Name : "<<this->name<<"\nStudent Marks : "<< this->marks<<endl;
}
// Function to accept date input from the console
    void acceptStudentFromConsole() {
        cout<<"Enter your roll no. : ";
        cin>>this->rollNo;
        cout<<"Enter your name : ";
        cin>>this->name;
        cout<<"Enter your marks : ";
        cin>>this->marks;
}
};


int main() {
    Student student1;
    int choice;

    // Initialize the date structure with default values
    student1.initStudent();

    while (1) {
        cout<<"\nStudent Management Menu:\n";
        cout<<"1. Initialize Student\n";
        cout<<"2. Print Student\n";
        cout<<"3. Accept Student from Console\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice (1-4): ";
        cin>>choice;

        switch (choice) {
            case 1:
                student1.initStudent();
                cout<<"Date has been initialized.\n";
                break;
            case 2:
                student1.printStudentOnConsole();
                break;
            case 3:
                student1.acceptStudentFromConsole();
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