#include <iostream> // developed by Roman Antoshchuk on 12.02.2024
#include "Segment.h"
#include "Point.h"
using std::cout;
using std::endl;

int main() {

	cout << "\n--- Lab work 2 ---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----12.02.2024----" << endl;

	cout << '\n' << endl;
	cout.precision(15);

	Point point1(1, 2);
	Point point2(5, 6);
	Point point3(2, 3);

	Segment segment(point1, point2);
	cout << "Segment: " << segment << endl;
	cout << "Segment length: " << segment.length() << endl;
	cout << "Distance from point: " << point3 << "to segment = " << segment.distance(point3) << endl;
	
	return 0;
}