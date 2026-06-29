#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    string studentsID;
    float lab1, lab2, lab3, average;

    cout << "Enter Students ID: ";
    cin >> studentsID;

    cout << "Enter Lab 1 Score: ";
    cin >> lab1;

    cout << "Enter Lab 2 score: ";
    cin >> lab2;

    cout << "Enter Lab 3 score: ";
    cin >> lab3;

    average = (lab1 + lab2 + lab3) / 3;

    cout << endl;
    cout<< "StudentsID:   " << studentsID << endl;
    cout << "Average Score: " << fixed <<
    setprecision(4) << average << endl;

    return 0;
}