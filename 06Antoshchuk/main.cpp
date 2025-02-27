#include <iostream> // developed by Roman Antoshchuk on 12.03.2024
#include "String.h"
using namespace::std;

int main(void){

	cout << "\n--- Lab work 6 ---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----12.03.2024----" << endl;

	cout << '\n' << endl;

	{
		cout << "--------Constructors: -------" << endl;
		String s1;
		cout << "created: " << s1 << endl;
		String s2('R');
		cout << "created with a char: " << s2 << endl;
		String s3("Antoshchuk");
		cout << "created from char arr: " << s3 << endl;
		string s("Roman");
		cout << "created from STL string: " << s << endl;
		String s4(s);
		cout << "copied: " << s4 << endl;
		String s5(s3);
		cout << "copied: " << s5 << endl;
		s1 = s5;
		cout << '\n' << endl;
	}
	{
		cout << "--------Operator= --------" << endl;
		String s1("2");
		String s2("s2 string");
		s1 = s2;
		cout << s1 << endl;
		string s3("stl string");
		s1 = s3;
		cout << s1 << endl;
		char* s4 = new char[] {"c-type string"};
		s1 = s4;
		cout << s1 << endl;
	}
	{
		cout << '\n' << endl;
		cout << "--------Operator[] -------" << endl;
		String s1("Hello");
		cout << "Char at the 3rd positions is: " << s1[2] << endl;
		s1[2] = 'e';
		cout << "Modified string using operator[]: " << s1 << endl;
	}
	{
		cout << '\n' << endl;
		cout << "--------Operator+/+= --------" << endl;
		String s1;
		string s2("stl string");
		char* p = new char[] {"p c-type string"};
		cout << (s1 += s2) << endl;
		cout << s1 + s2 << endl;
		cout << s2 + s1 << endl;
		cout << p + s1 << endl;
		cout << (s1 += p) << endl;
	}
	{
		cout << '\n' << endl;
		cout << "---------Operator==/!= -------" << endl;
		String s1("Hello World");
		string s2("Hello World");
		cout << "Strings are identical: " << boolalpha << (s1 == s2) << endl;
		cout << "Strings are different: " << boolalpha << (s1 != s2) << endl;
	}
	return 0;
}