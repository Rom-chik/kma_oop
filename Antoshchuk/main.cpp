#include <iostream> // developed by Roman Antoshchuk on 16.04.2024
#include "PowerOfTwo.h"
#include "DoubleList.h"
#include "CyclicDoubleList.h"
#include "Pyramide.h"
#include "ShortString.h"
using std::cout;
using std::endl;


int main() {

    cout << "\n--- Control Work ---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----16.04.2024----" << endl;

    cout << '\n' << endl;

    cout << "\n-------------   Task 1:    -------------" << endl;
        cout << PowerOfTwo<0>::value << endl;
        cout << PowerOfTwo<1>::value << endl;
        cout << PowerOfTwo<2>::value << endl;
        cout << PowerOfTwo<3>::value << endl;
        cout << PowerOfTwo<4>::value << endl;
        cout << PowerOfTwo<5>::value << endl;
        cout << PowerOfTwo<6>::value << endl;
        cout << PowerOfTwo<7>::value << endl;
        cout << PowerOfTwo<8>::value << endl;
        cout << PowerOfTwo<9>::value << endl;

    cout << "\n\n-------------   Task 2:    -------------" << endl;
    cout << "IDoubleList class declaraion" << endl;


    cout << "\n\n-------------   Task 3:    -------------" << endl;
        DoubleList<int> list;

        cout << "Testing pushBack(1-4):" << endl;
        list.pushBack(1);
        list.pushBack(2);
        list.pushBack(3);
        list.pushBack(4);
        cout << list << endl;

        cout << "Testing pushFront(0):" << endl;
        list.pushFront(0);
        cout << list << endl;

        cout << "Testing popBack:" << endl;
        list.popBack();
        cout << list << endl;

        cout << "Testing popFront:" << endl;
        list.popFront();
        cout << list << endl;

        cout << "IsEmpty? " << endl;
        cout << list.isEmpty() << endl;

        cout << "Size of list: " << endl;
        cout << list.size() << endl;
        list.clear();

        cout << "Size after clear(): " << endl;
        cout << list.size() << endl;

        cout << "Exception handling:" << endl;
        try {
            cout << list.front() << endl;
        }
        catch (const std::runtime_error& e) {
            cout << "!!ERROR: " << e.what() << endl;
        }


    cout << "\n\n-------------   Task 4:    -------------" << endl;
        CyclicDoubleList<int> cyclicList;

        cout << "Testing pushBack(1-4):" << endl;
        list.pushBack(1);
        list.pushBack(2);
        list.pushBack(3);
        list.pushBack(4);
        cout << list << endl;

        cout << "Testing pushFront(0):" << endl;
        list.pushFront(0);
        cout << list << endl;

        cout << "Testing popBack:" << endl;
        list.popBack();
        cout << list << endl;

        cout << "Testing popFront:" << endl;
        list.popFront();
        cout << list << endl;

        cout << "IsEmpty? " << endl;
        cout << list.isEmpty() << endl;

        cout << "Size of list: " << endl;
        cout << list.size() << endl;
        list.clear();

        cout << "Size after clear(): " << endl;
        cout << list.size() << endl;

        cout << "Exception handling:" << endl;
        try {
            cout << list.front() << endl;
        }
        catch (const std::runtime_error& e) {
            cout << "!!ERROR: " << e.what() << endl;
        }

    cout << "\n\n-------------   Task 5:    -------------" << endl;
    DoubleList<int> findList;
        findList.pushBack(8);
        findList.pushBack(12);
        findList.pushBack(16);
        findList.pushBack(32);
        findList.pushBack(44);
        cout << "new DoubleList " << findList << endl;

        int checkFor = 32;
        auto it = findList.find(checkFor);
        if (it != findList.end()) {cout << "Element " << checkFor << " is present in the list." << endl;}
        else {cout << "Element " << checkFor << " is not present." << endl;}

        checkFor = 64;
        it = findList.find(checkFor);
        if (it != findList.end()) { cout << "Element " << checkFor << " is present in the list." << endl;}
        else {cout << "Element " << checkFor << " is not present." << endl;}
        findList.clear();


    cout << "\n\n-------------   Task 6:    -------------" << endl;
    cout << "Pyramide class declaraion" << endl;
    Pyramide pyramide(
        Point(0, 0, 0),
        Point(1, 0, 0),
        Point(0, 1, 0),
        Point(0, 0, 1)
    );

    cout << "\n\n-------------   Task 7:    -------------" << endl;
    Triangle face0 = pyramide.getFace();
    Triangle face1 = pyramide.getFace1();
    Triangle face2 = pyramide.getFace2();
    Triangle face3 = pyramide.getFace3();

        cout << "Points: "
            << "A(" << face0.a.x << ", " << face0.a.y << ", " << face0.a.z << "), "
            << "B(" << face0.b.x << ", " << face0.b.y << ", " << face0.b.z << "), "
            << "C(" << face0.c.x << ", " << face0.c.y << ", " << face0.c.z << ")." 
            << " are creating face 0" << endl;

        cout << "Points: "
            << "A(" << face1.a.x << ", " << face1.a.y << ", " << face1.a.z << "), "
            << "B(" << face1.b.x << ", " << face1.b.y << ", " << face1.b.z << "), "
            << "D(" << face1.c.x << ", " << face1.c.y << ", " << face1.c.z << ")." 
            << " are creating face 1" << endl;

        cout << "Points: "
            << "A(" << face2.a.x << ", " << face2.a.y << ", " << face2.a.z << "), "
            << "C(" << face2.b.x << ", " << face2.b.y << ", " << face2.b.z << "), "
            << "D(" << face2.c.x << ", " << face2.c.y << ", " << face2.c.z << ")." 
            << " are creating face 2" << endl;

        cout << "Points: "
            << "B(" << face3.a.x << ", " << face3.a.y << ", " << face3.a.z << "), "
            << "C(" << face3.b.x << ", " << face3.b.y << ", " << face3.b.z << "), "
            << "D(" << face3.c.x << ", " << face3.c.y << ", " << face3.c.z << ")." 
            << " are creating face 3" << endl;


    cout << "\n\n-------------   Task 8:    -------------" << endl;
    cout << "ShortString class declaraion" << endl;
    ShortString<20> myString("Short string");
        cout << myString.c_str() << " has length " << myString.length() << endl;

    cout << "\n\n-------------   Task 9:    -------------" << endl;
    ShortString<20> str1("Hi ");
    ShortString<20> str2("my dear");

        str1 += str2;
        cout << "Operator += : " << str1.c_str() << endl;

        ShortString<20> str3 = str1 + ShortString<20>(" friend!");
        cout << "Operator + : " << str3.c_str() << endl;

        try {
            myString[5] = ',';
            cout << myString.c_str() << endl;
        }
        catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << endl;
        }
    

    return 0;
}