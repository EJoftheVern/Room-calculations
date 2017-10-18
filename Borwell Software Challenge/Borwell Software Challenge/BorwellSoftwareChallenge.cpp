// BorwellSoftwareChallenge.cpp
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float dimensions[3] = {}; //An array containing the width, depth and height of the room in this order
	cout << "Enter the room width(metres): ";
	cin >> dimensions[0];
	cout << "Enter the room depth(metres): ";
	cin >> dimensions[1];
	cout << "Enter the room height(metres): ";
	cin >> dimensions[2];
	cout << "Floor area(metres^2): " << dimensions[0] * dimensions[1] << endl; //Output floor area
	cout << "Estimated Paint Required(Litres): " << 1.1*(2 * (2 * dimensions[0] * dimensions[2] + 2 * dimensions[1] * dimensions[2] - 1.509522)) / 10 << endl; //10% Extra Paint For Mistakes and Touch Ups * (Number of Coats *(Surface area of walls-standard area of a single door)) / Average area per litre of an interior paint
	cout << "Volume of room(metres^3): " << dimensions[0] * dimensions[1] * dimensions[2]; //Output room volume
	cin.ignore(255, '\n');
	cin.get();
	return 0;
}

