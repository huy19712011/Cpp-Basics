#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number; // number of students
    string studentName1, studentName2;
    double math[10];
    double physical[10];
    double chemistry[10];
    string student[10];
    string ignoreStr;

    std::cout << "Enter number of students: ";
    cin >> number;
    cin.ignore(1000, '\n');

    for (int i = 1; i <= number; ++i) {
        cout << "Enter name: ";
        getline(cin, student[i]);
        cout << "Enter marks: ";
        cin >> math[i] >> physical[i] >> chemistry[i];
        getline(cin, ignoreStr);
        //cin.ignore(1000, '\n');
    }
    
    for (int i = 1; i <= number; ++i) {
        cout << "Student " << i << ": " << student[i] << '\n';
        cout << "Math: " << math[i] << '\n';
        cout << "Physical: " << physical[i] << '\n';
        cout << "Chemistry: " << chemistry[i] << '\n';
    }

}

