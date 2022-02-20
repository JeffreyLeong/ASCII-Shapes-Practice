/*==============================================================================================================
Class:          CIS 054
Assignment:     Practice Assignment 3-0
Name:           Jeffrey Leong
Date:           Feb 20, 2022

Purpose:        Make a Triangle
Input:          height, width, and symbol
Output:         ASCII Shape with symbol
===============================================================================================================*/
#include<iostream>
using namespace std;
int main()
{
    int length;
    cout << "Length: ";
    cin >> length;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int i=1; i<=length; i++) {
        for (int j=1; j<=i; j++) {
            cout << symbol;
        }
        cout << endl;
    }



 return 0;
}