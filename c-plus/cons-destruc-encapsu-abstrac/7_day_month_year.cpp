#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    
    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

   
    bool isValidDate() {
        if (month < 1 || month > 12) {
            return false;
        }

        if (day < 1 || day > 31) {
            return false;
        }

     
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30) {
                return false;
            }
        }

             if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) {
                    return false;
                }
            } else {
                if (day > 28) {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    Date date;
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);

    
    if (date.isValidDate()) {
        cout << "The date is valid: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;
    } else {
        cout << "The date is invalid!" << endl;
    }
}
