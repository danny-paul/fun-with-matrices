/*
CONSTRUCTORS

Matrix()
**Description: Will initialize object, 2x2 array
*Precondition: None
Postcondition: Assigns integer 0 to cells of 2x2 array

Matrix(const int, const int, const int, const int)
**Description: Will initialize object, 2x2 array, with given values
*Precondition: four integer values
Postcondition: assigns four integers to 2x2 array

CONSTANT MEMBER FUNCTIONS

int getCell(const int, const int) const
**Description: Returns cell value from object
*Precondition: Integer for array Row, Integer for array Column
Postcondition: Returns corresponding cell value

MODIFICATION MEMBER FUNCTIONS

void setCell(cost int, const int, const int)
**Description: Assign cell values individually
*Precondition: (Integer for the Row, Integer for the Column)
Postcondition: Changes corresponding cell value in private data

OVERLOADED OPERATORS

friend Matrix operator+ (const Matrix&, const Matrix&)
**Description: Adds each cell component of passed Matrix objects
*Precondition: Two Matrix objects
Postcondition: Returns Matrix with cells containing added results

friend Matrix operator- (const Matrix&, const Matrix&)
**Description: Subtracts each cell component of passed Matrix objects
*Precondition: Two Matrix objects
Postcondition: Returns Matrix with cells containing subtracted results

friend Matrix operator* (const Matrix&, const Matrix&)
**Description: Multiplies each cell component of passed Matrix objects
*Precondition: Two Matrix Objects
Postcondition: Returns Matrix with cells containing multiplied results

friend std::ostream& operator<< (std::ostream&, const Matrix&)
**Description: Adds Matrix to output stream for output functionality 
*Precondition: ostream object, Matrix object 
Postcondition: Returns ostream object containing Matrix output

friend std::istream& operator>> (std::istream&, Matrix&)
**Description: Allows input into Matrix objects using >> operator
*Precondition: istream object, Matrix object
Postcondition: Returns istream object containing Matrix input

*/


#ifndef MATRIX_H
#define MATRIX_H

#include <iostream> //necessary for ostream/istream (<</>> overloading)

class Matrix {

public: 
	Matrix(); //default constructor
	Matrix(const int,const int,const int,const int); //Pass sequential list of values into 2d array

	//Constant Member Functions
	int getCell(const int, const int)const;

	//Modification Member Functions
	void setCell(const int, const int, const int);
	//Overloaded Operators
	friend Matrix operator+ (const Matrix&, const Matrix&);
	friend Matrix operator- (const Matrix&, const Matrix&);
	friend Matrix operator* (const Matrix&, const Matrix&);
	friend std::ostream& operator<< (std::ostream&, const Matrix&); //ostream part of standard library
	friend std::istream& operator>> (std::istream&, Matrix&);
private: 
	int arr[2][2];
};

#endif