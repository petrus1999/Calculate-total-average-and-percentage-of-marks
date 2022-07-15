// Calculate total,average and percentage of marks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {

    int Sepedi, English, LO, Mathematics, Physicalsciences, Agriculturalsciences, Lifesciences;
    double Total, Average, Percentage;

    cout << "Enter your sepedi marks" << endl;
    cin >> Sepedi;
    cout << "Enter your English marks" << endl;
    cin >> English;
    cout << "Enter your LO marks" << endl;
    cin >> LO;
    cout << "Enter your Mathematics marks" << endl;
    cin >> Mathematics;
    cout << "Enter your Physical sciences marks" << endl;
    cin >> Physicalsciences;
    cout << "Enter your Agricultural sciences marks" << endl;
    cin >> Agriculturalsciences;
    cout << "Enter your  Life sciences" << endl;
    cin >> Lifesciences;

    Total = Sepedi + English + LO + Mathematics + Physicalsciences + Agriculturalsciences + Lifesciences;
    Average = (Total / 700);
    Percentage = (Total / (700)) * 100;
    cout << "The total  marks  of seven subjects is " << Total << endl;
    cout << "The average  marks  of seven subjects is " << Average << endl;
    cout << "The   percentage of marks  of seven subjects is " << Percentage << endl;

    return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
