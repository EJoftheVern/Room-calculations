#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Borwell Software Challenge/BorwellSoftwareChallenge.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			roomInfo roomTest; //Establish an object to test
			roomTest.width = 2; //Asign it values
			roomTest.depth = 3;
			roomTest.height = 1.8;
			// TODO: Your test code here
			Assert::AreEqual(roomTest.area(),float(6)); //Test the area function works
			Assert::AreEqual(roomTest.volume(),float(10.8)); //Test the volume function works
			//The paint calculations are merely estimate they cannot have an exactly correct value 
		}

	};
}