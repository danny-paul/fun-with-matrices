#include "matrix.h"
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    ifstream inp; //handles input file stream
    Matrix matOne, matTwo;
    int menuOption = 0;
    inp.open("input.txt", ios::out); //opens in same directory as source

    inp >> menuOption; //checks initial menu option

    while (menuOption != 4) { //runs until menu option 4
        inp >> matOne; //receives data for matOne
        inp >> matTwo; //receives data for matTwo

        cout << "matOne " << endl << matOne << endl; //outputs Matrix matOne
        cout << "matTwo " << endl << matTwo << endl; //outputs Matrix matTwo
        cout << "add" << endl << (matOne + matTwo) << endl; //outputs Matrix Addition
        cout << "subtract" << endl << (matOne - matTwo) << endl; //outputs Matrix Subtraction
        cout << "mulitply" << endl << (matOne * matTwo) << endl; //outputs Matrix Multipication

        system("pause");

        inp >> menuOption; //receives menu option decision in 8th position of file
    }

    inp.close();
    return 0;
}