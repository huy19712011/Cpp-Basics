#include <iostream>
#include <string>


int main()
{
	std::cout << "Basics Cpp" << '\n';

	/* 2. variables */
	std::string name;
	short age;
	std::string address;

	/* 1. output */
	std::cout << "Hello, my name is John" << std::endl;
	std::cout << "I am 18 years old" << '\n';
	std::cout << "I am from Da Nang" << std::endl;

	/* 3. input */
	std::cout << "Enter your name: ";
	//std::cin >> name;
	std::getline(std::cin, name);

	std::cout << "Enter your age: ";
	std::cin >> age;
	
	/* add following to ignore newline character when reading string */
	/* 2 ways */
	//std::string ignoreNewLine;
	//std::getline(std::cin, ignoreStr);

	//std::cin.ignore(1000, '\n');


	std::cout << "Enter your address: ";
	//std::cin >> address;
	std::getline(std::cin, address);

	std::cout << "Hello, my name is " << name << std::endl;
	std::cout << "I am " << age << " years old" << '\n';
	std::cout << "I am from " << address << std::endl;


}