#include <iostream> // developed by Roman Antoshchuk on 08.04.2024
#include "ListBased.h"
#include "ArrayBased.h"
using std::cout;
using std::endl;

int main() {

    cout << "\n--- Lab work 10 ---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----08.04.2024----" << endl;

    cout << '\n' << endl;

    cout << "----- Array based queue (stricted) -----" << endl;
        ArrayBasedQueue<int> arrayBasedQueue(3);

    cout << "Test 'підглядання' in an empty queue: " << endl;
        try {
            arrayBasedQueue.front();
        }
        catch (const std::runtime_error& e) {
            cout << "Predictable rror: " << e.what() << endl;
        }

    cout << "Test adding elements to queue: " << endl;
    arrayBasedQueue.put(1);
    arrayBasedQueue.put(2);
    arrayBasedQueue.put(3);

    cout << "Test adding to full queue: " << endl;
        try {
            arrayBasedQueue.put(4);
        }
        catch (const std::runtime_error& e) {
            cout << "Predictable rror: " << e.what() << endl;
        }

    cout << "Test 'підглядання' and removing elements: " << endl;
        while (!arrayBasedQueue.empty()) {
            cout << arrayBasedQueue.front() << endl;
            arrayBasedQueue.pop();
        }



    cout << "\n\n ----- List based queue -----" << endl;
        ListBasedQueue<int> listBasedQueue;

    cout << "Test 'підглядання' in an empty queue: " << endl;
        try {
            listBasedQueue.front();
        }
        catch (const std::runtime_error& e) {
            cout << "Predictable rror: " << e.what() << endl;
        }

    cout << "Test adding elements to queue: " << endl;
        listBasedQueue.put(1);
        listBasedQueue.put(2);
        listBasedQueue.put(3);
        listBasedQueue.put(4);

    cout << "Test 'підглядання' and removing elements: " << endl;
        while (!listBasedQueue.empty()) {
            cout << listBasedQueue.front() << endl;
            listBasedQueue.pop();
        }

    cout << "Test adding elements over max size: " << endl;
        for (int i = 1; i <= 10; ++i) {
            listBasedQueue.put(i);
        }

    cout << "Test 'підглядання' and removing elements with extended queue: " << endl;
        while (!listBasedQueue.empty()) {
            cout << listBasedQueue.front() << endl;
            listBasedQueue.pop();
        }


        cout << "\n\n ----- TEST -----" << endl;

    return 0;
}