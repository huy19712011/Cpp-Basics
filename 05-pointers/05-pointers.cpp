
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 1
	//int x;
	//cout << &x << '\n';
	//cout << x << '\n';

	// 2
	//int x{}; // x = 0
	//cout << &x << '\n';
	//cout << x << '\n';

	// 3: address of operator &
	//int x{ 5 };
	//cout << x << '\n';
	//cout << &x << '\n';

	// 4: inderection operator * (dereference operator)
	//int x{ 5 };
	//cout << x << '\n';
	//cout << &x << '\n';
	//cout << *(&x) << '\n';

	// 5: declaring a pointer
	//int *iPtr{};
	//double *dPtr{};
	//int* ptr1, ptr2 // ptr1 is pointer, but ptr2 is int 

	// 6: assigning a value to a pointer
	//int v{ 5 };
	//int* ptr{ &v };

	//cout << &v << '\n';
	//cout << ptr << '\n';

	// 7
	//int iValue{ 5 };
	//double dValue{ 7.0 };

	//int* iPtr{ &iValue }; // ok
	//double* dPtr{ &dValue }; // ok
	//iPtr = &dValue; // wrong -- int pointer cannot point to the address of a double variable
	//dPtr = &iValue; // wrong -- double pointer cannot point to the address of an int variable

	//int* ptr{ 5 }; // not ok
	//double* dPtr{ 0x0012FF7C }; // not okay

	// 8: The address-of operator returns a pointer
	//int x{ 8 };
	//cout << typeid(x).name() << '\n'; // return int
	//cout << typeid(&x).name() << '\n'; // return int*

	// 9: Indirection through pointers
	//int value{ 5 };
	//std::cout << &value << '\n'; // prints address of value
	//std::cout << value << '\n'; // prints contents of value

	//int* ptr{ &value }; // ptr points to value
	//std::cout << ptr << '\n'; // prints address held in ptr, which is &value
	//std::cout << *ptr << '\n'; // Indirection through ptr (get the value that ptr is pointing to)

	// 10: Once assigned, a pointer value can be reassigned to another value
	//int value1{ 5 };
	//int value2{ 7 };

	//int* ptr{};

	//ptr = &value1; // ptr points to value1
	//std::cout << *ptr << '\n'; // prints 5

	//ptr = &value2; // ptr now points to value2
	//std::cout << *ptr << '\n'; // prints 7

	//*ptr = 10;
	//cout << value2; // prints 10

	// 11:
	//ptr is the same as &value
	//*ptr is treated the same as value

	//int value{ 5 };
	//int* ptr{ &value }; // ptr points to value

	//*ptr = 7; // *ptr is the same as value, which is assigned 7
	//std::cout << value << '\n'; // prints 7

	// 12: The size of pointers
	char* chPtr{}; // chars are 1 byte
	int* iPtr{}; // ints are usually 4 bytes

	struct Something
	{
		int x{};
		int y{};
		int z{};
	};

	Something* somethingPtr{}; // Something is probably 12 bytes

	std::cout << sizeof(chPtr) << '\n'; // prints 8
	std::cout << sizeof(iPtr) << '\n'; // prints 8
	std::cout << sizeof(somethingPtr) << '\n'; // prints 8

}

