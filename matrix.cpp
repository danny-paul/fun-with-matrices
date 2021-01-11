#include "matrix.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
const int ROW = 2; const int COLUMN = 2; const int SIZE = 4; //sets constants for ease of viewing

//Constructors
Matrix::Matrix() {
	for (int i = 0; i < ROW; i++) //handles rows in array
		for (int j = 0; j < COLUMN; j++) //handles columns in array
			arr[i][j] = 0; //assigns value 0 to array position
}
Matrix::Matrix(const int value1, const int value2, const int value3, const int value4) {
	arr[0][0] = value1;
	arr[0][1] = value2;
	arr[1][0] = value3;
	arr[1][1] = value4;
}

//Constant Member Functions
int Matrix::getCell(const int row,const int column) const {
	if (row <= ROW && row >= 0 && column <= COLUMN && column >=0) //ensures within bounds of array
		return arr[ROW][COLUMN]; //returns value in specified position
}

//Modification Member Functions
void Matrix::setCell(int const row, int const column, int const value) {
	if (row <= ROW && row >= 0 && column <= COLUMN && column >= 0) //ensures within bounds of array
		arr[row][column] = value;
}

//Operator Overloading
Matrix operator+ (const Matrix &matLeft,const Matrix &matRight) {
	Matrix tempMat;
	for (int i = 0; i < ROW;i++) //tracks ROW position
		for (int j = 0; j < COLUMN; j++) //tracks COLUMN position
			tempMat.arr[i][j] = matLeft.arr[i][j] + matRight.arr[i][j]; //adds corresponding cells, assigns to Matrix object
	return tempMat; //returns addition result
}

Matrix operator- (const Matrix& matLeft, const Matrix& matRight) {
	Matrix tempMat; 
	for (int i = 0; i < ROW; i++) //tracks ROW position
		for (int j = 0; j < COLUMN; j++) //tracks COLUMN position
			tempMat.arr[i][j] = matLeft.arr[i][j] - matRight.arr[i][j]; //subtracts corresponding cells, assigns to Matrix object
	return tempMat; //returns subtraction result

}

Matrix operator* (const Matrix &matLeft, const Matrix &matRight) {
	Matrix tempMat; 
	for (int i = 0; i < ROW; i++) //tracks ROW position
		for (int j = 0; j < COLUMN; j++) //tracks COLUMN position
			tempMat.arr[i][j] = matLeft.arr[i][j] * matRight.arr[i][j]; //Multiplies corresponding cells, assigns to Matrix object
	return tempMat; //returns multiply result
}

ostream& operator<< (ostream& outpLeft, const Matrix& matRight) { 
	for (int i = 0; i < ROW; i++) { //tracks ROW position
		for (int j = 0; j < COLUMN; j++) { //tracks COLUMN position
			outpLeft << "[" << i << "," << j << "]: " << matRight.arr[i][j] << " "; //assigns Matrix object components to output buffer
		}
		outpLeft << "\n"; //formatting added to output stream
	}
	return outpLeft;
}

istream& operator>> (istream& inpLeft, Matrix& matRight) {
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COLUMN; j++) {
			inpLeft >> matRight.arr[i][j]; //assigns (assumed good) data from input stream to passed reference Matrix 
		}
	return inpLeft;
}