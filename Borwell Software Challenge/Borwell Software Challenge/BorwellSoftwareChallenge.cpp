// BorwellSoftwareChallenge.cpp
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "borwellSoftwareChallengeHeader.h"
using namespace std;


//floatInput takes a string as an argument. This string is displayed as a message then the user is asked for input until they enter a number
float floatInput(string userPrompt) {	
	float result;
	cout << userPrompt;
	cin >> result;
	while (cin.fail()) {
		cout << "Please enter a number" << endl;
		cin.clear();
		cin.ignore(255, '\n');
		cin >> result;
	}
	return result;
};

//Main block of code takes in each dimension using the lofatInput function and assigns these values to the object room1
int main()
{
	roomInfo room1;		
	room1.width = floatInput("Enter the room width(metres) : ");	
	room1.depth = floatInput("Enter the room depth(metres): ");
	room1.height = floatInput("Enter the room height(metres): ");	
	cout << "The area(metres^2) is " << room1.area() << endl;
	cout << "The amount of paint(litres) required to paint the room is:" << room1.paintRequired() << endl;
	cout << "The volume(metres^3) of the room is " << room1.volume() << endl;	
	cin.ignore(255, '\n');
	cin.get();
	return 0;
	
};



