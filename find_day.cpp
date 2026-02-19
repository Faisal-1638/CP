#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int day, month, year;
    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;

    tm time_in = {};
    time_in.tm_mday = day;
    time_in.tm_mon = month - 1; // months since January [0-11]
    time_in.tm_year = year - 1900; // years since 1900

    mktime(&time_in); // normalize and compute day of week

    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "Day of the week: " << days[time_in.tm_wday] << endl;

    return 0;
}
