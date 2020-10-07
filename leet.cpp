#include <iostream>

using namespace std;

string leet(char c)
{
	switch (toupper(c))
	{
		case 'A':
			return "4";
		case 'B':
			return "8";
		case 'C':
			return "<";
		case 'D':
			return "cl";
		case 'E':
			return "3";
		case 'F':
			return "|=";
		case 'G':
			return "&";
		case 'H':
			return "#";
		case 'I':
			return "!";
		case 'J':
			return "]";
		case 'K':
			return "|<";
		case 'L':
			return "1";
		case 'M':
			return "^^";
		case 'N':
			return "È";
		case 'O':
			return "0";
		case 'P':
			return "9";
		case 'Q':
			return "2";
		case 'R':
			return "ß";
		case 'S':
			return "5";
		case 'T':
			return "7";
		case 'U':
			return "v";
		case 'V':
			return "\\/";
		case 'W':
			return "\\|/";
		case 'X':
			return "%";
		case 'Y':
			return "j";
		case 'Z':
			return "7_";
		default:
			return "" + c;
	}
}

string to1337(string str)
{
	string res = "";
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '_')
			res += " ";
		else if (isalpha(str[i]))
			res += leet(str[i]);
		else
			res += str[i];
	}
	return res;
}

int main()
{
	setlocale(0, "Rus");
	string a = "1";
	while (a != "0")
	{
		cout << "Enter string with underscores instead of spaces:" << endl;
		cin >> a;
		cout << "Output string in 1337 format:" << endl << to1337(a) << endl;
		cout << endl << "Enter 0 to stop or smth else to go on: ";
		cin >> a;
		cout << endl;
	}	
	cin.get();
}
