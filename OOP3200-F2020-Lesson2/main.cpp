/** main.cpp
 *
 *	In this example program, did the following:
 *		- Examined a simple class with 'instance' data-members, a constructor, accessors, mutators.
 *
 *	@author		Kaifkhan Vakil
 *	@studentID  100772820
*/

#include <iomanip>			// fixed, setprecision()
#include <iostream> 		// cin, cout

#include "CartesianPoint.h"
#include "MyConsoleInput.h"// ConsoleInput::ReadInteger()

using namespace std;

// class declaration section


// main() function
int main()
{
	// Declarations
	// a point called 'origin', initialized to 0, 0
	CartesianPoint origin = CartesianPoint(10, 20);
	
	// a point called 'destination'
	CartesianPoint destination;

	int inputX; // temporary input variable for x
	int inputY; // temporary input variable for y
	
	// to store the distance between two points
	double distance;

	try
	{
		// Input

		// Prompt the user for the coordinates
		cout << "\nEnter coordinates of the destination point: " << endl;
		// prompt for, read, and store x coordinate:
		cout << "X: ";
		inputX = ConsoleInput::ReadInteger();
		destination.SetX(inputX);

		// prompt for, read, and store y coordinate:
		cout << "Y: ";
		inputY = ConsoleInput::ReadInteger();
		destination.SetY(inputY);


		// Processing
		// determine the distance between the two points
		//distance = origin.GetDistanceTo(destination);
		distance = origin - destination;

		std::cout << "origin is equal to destination:" << std::to_string(origin == destination) << std::endl;

		CartesianPoint newPoint = origin + destination;

		std::cout << "origin + destination = " << newPoint.ToString() << endl;
		
		// Output 
		// Show the points and the distance
		cout << fixed << setprecision(3); // formatting
		cout << "\nThe Distance between " << origin.ToString()
			<< " and " << destination.ToString() << " is "
			<< distance << ". " << endl;
	}

	catch (exception& ex)
	{
		cerr << ex.what() << " Ending the program." << endl;
	}

	// done.
	cout << endl << endl;
	return 0;
} // end of main()


