#include <iostream> // developed by Roman Antoshchuk on 18.02.2024
#include "Date.h"
using std::cout;
using std::endl;

int main() {

    cout << "\n--- Lab work 3 ---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----18.02.2024----" << endl;

    cout << '\n' << endl;

    //different inputs
    Date date1;
    Date date2(20, Date::Month::feb, 2024);
    Date date3(20, 2, 2024);

    cout << "First Date: " << date1 << endl;
    cout << "Second Date: " << date2 << endl;
    cout << "Third Date: " << date3 << endl;

    cout << "Month: " << date2.getMonth() << endl;

    Date::setDefault(1, Date::Month::jan, 0001); //01.01.0001
    Date::showDefault();

    //wrong input
    try {
        Date wrongDate(32, 13, -1);
    }
    catch (Date::WrongDate& bd) {
        cout << "Wrong date: " << bd << endl;
    }

    return 0;
}