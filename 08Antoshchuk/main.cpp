#include <iostream> // developed by Roman Antoshchuk on 25.03.2024
#include "Array.h"

int main() {

    cout << "\n--- Lab work 8 ---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----25.03.2024----" << endl;

    cout << '\n' << endl;

    try {
        Array<20, int> intArray;
            for (size_t i = 0; i < 20; ++i) {
                intArray[i] = static_cast<int>(i);
            }
        cout << "Array of Integers: " << intArray << endl;

        Array<3, double> doubleArray;
            for (size_t i = 0; i < 3; ++i) {
                doubleArray[i] = i * 1.5;
            }
        cout << "Array of Double: " << doubleArray << endl;

        Array<4, std::string> stringArray;
            stringArray[0] = "first";
            stringArray[1] = "second";
            stringArray[2] = "third";
            stringArray[3] = "fourth";
        cout << "Array of strings: " << stringArray << endl;

        cout << "Index out of bounds: ";
        cout << intArray[21] << endl;
    }

    catch (const std::exception& e) {  //index exception handler
        std::cerr << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    return 0;
}