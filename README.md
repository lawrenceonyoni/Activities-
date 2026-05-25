//Lawrence Onyoni
# Activities-
## C++ Assignment 

### 1.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue = 0, fineRate = 0, fineAmount = 0;

    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (as an integer): ";
    cin >> dueDate;
    cout << "Enter Return Date (as an integer): ";
    cin >> returnDate;

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        fineRate = 0; fineAmount = 0; daysOverdue = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    } else {
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }

    cout << "\n--- Library Fine Details ---\n";
    cout << "Book ID: " << bookID << "\nDays Overdue: " << daysOverdue << "\nTotal Fine: Ksh. " << fineAmount << endl;

    return 0;
}
