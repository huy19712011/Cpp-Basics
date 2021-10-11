#include <iostream>
#include <string>


int main()
{
	using namespace std;

	cout << "Basics Cpp" << '\n';

	/* 4. input many variables */

	string str1, str2, str3;

	int n1, n2, n3;

	//cout << "Enter 3 strings variables: ";
	//cin >> str1 >> str2 >> str3;
	//cout << str1 << '\n';
	//cout << str2 << '\n';
	//cout << str3 << '\n';

	//cout << "Enter 3 numbers: ";
	//cin >> n1 >> n2 >> n3;
	//cout << n1 << '\n';
	//cout << n2 << '\n';
	//cout << n3 << '\n';

	cout << "Enter 1st number: ";
	cin >> n1;
	cin.ignore(1000, '\n');

	cout << "Enter 1st string: ";
	//cin >> str1;
	getline(cin, str1);

	cout << "Number 1: " << n1 << '\n' << "String 1: " << str1 << '\n';

	cout << "Enter 2nd number: ";
	cin >> n2;

	cout << "Enter 2nd string: ";
	cin >> str2;

	cout << n2 << '\n' << str2 << '\n';

}