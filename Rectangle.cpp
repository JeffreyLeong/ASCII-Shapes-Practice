/*==============================================================================================================
Class:          CIS 054
Assignment:     Practice Assignment 3-0
Name:           Jeffrey Leong
Date:           Feb 20, 2022

Purpose:        Make a Rectangle
Input:          height, width, and symbol
Output:         ASCII Shape with symbol
===============================================================================================================*/

#include<iostream>
using namespace std;
int main()
{
    // Variables
    int height, width;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int h = 0; h<height; h++) { // outer loop, height
        for (int w =0; w<width; w++) { // inner loop, width
            cout << symbol;
        }
        cout << endl;
    }

 return 0;
}
