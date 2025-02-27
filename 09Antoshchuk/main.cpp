#include <iostream> // developed by Roman Antoshchuk on 31.03.2024
#include "Sequence.h"

int main() {

	cout << "\n--- Lab work 9 ---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----31.03.2024----" << endl;

	cout << '\n' << endl;

	Sequence<int> seq; // empty int sequence
	cout << "Empty sequence of Integers: " << seq << endl;
		seq.append(1);
		seq.append(2);
		seq.append(3);
		seq.append(4);
		seq.append(5);
		seq.append(6);
	cout << "Sequence of Integers: " << seq << endl;
		seq.remove(5);
	cout << "Sequence after removing element '5':  " << seq << endl;
	cout << "Sequence contains '9' ?  " << (seq.contains(9) ? "Yes" : "No") << endl;


	Sequence<double> double_seq; // empty double sequence
	cout << "\nEmpty Double sequence: " << double_seq << endl;
		double_seq.append(0.0);
		double_seq.append(1.5);
		double_seq.append(3.0);
		double_seq.append(4.5);
		double_seq.append(6.0);
		double_seq.append(7.5);
	cout << "Double sequence: " << double_seq << endl;
		double_seq.remove(6.0);
	cout << "Sequence after removing element '6.0':  " << double_seq << endl;
	cout << "Sequence contains '1.5' ?  " << (double_seq.contains(1.5) ? "Yes" : "No") << endl;


	Sequence<std::string> str_seq; // empty string sequence
	cout << "\nEmpty String sequence: " << str_seq << endl;
		str_seq.append("first");
		str_seq.append("second");
		str_seq.append("third");
		str_seq.append("fourth");
		str_seq.append("fifth");
	cout << "String sequence:  " << str_seq << endl;
		str_seq.remove("third");
	cout << "Sequence after removing element 'third':  " << str_seq << endl;
	cout << "Sequence contains 'fourth' ?  " << (str_seq.contains("fourth") ? "Yes" : "No") << endl;
	
	return 0;
}