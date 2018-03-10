/*******************************************************************************
* AUTHORS		: Zac Campos & Sebastian Hooshmand
* STUDENT ID	: 1058476 
* LAB #11		: Output - Geometry
* CLASS			: CS1A
* SECTION		: MW 8am
* DUE DATE		: 3/12/18
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
* Output - Geometry
* -----------------------------------------------------------------------------
* This program will output the area and perimeter of a triangle, rectangle, 
* and circle with dimensions inputted by the user.
* -----------------------------------------------------------------------------
* INPUT:
* 		<Height and base of the triangle, width and height of the rectangle,
* 		and the radius of the circle.>
*
* OUTPUT:
* 	<This program will output the area and perimeter of each of the objects>
******************************************************************************/


int main()
{
	/***************************************************************************
	* CONSTANTS
	* -------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING, PI, ALIGNMENT
	* -------------------------------------------------------------------------
	* PROGRAMMERS	: Programmers' Names
	* CLASS			: Students' Course
	* SECTION		: Class Days and Times
	* LAB_NUM		: Lab Number (specific to this lab)
	* LAB_NAME		: Title of the Lab
	**************************************************************************/
	const char		PROGRAMMERS[]= "Zac Campos & Sebastian Hooshmand";
	const char		CLASS[]		= "CS1A";
	const char		SECTION[]	= "MW: 8am";
	const int		LAB_NUM		= 5;
	const char		LAB_NAME[]	= "Eclipse Tutorial";
	const float		PI			= 3.14159;
	const int		ALIGN		= 34;
	
	// variable declarations go here
	float height				= 0;
	float base					= 0;
	float areaOfTriangle		= 0;
	float perimeterOfTriangle	= 0;

	float width					= 0;
	float heightRect			= 0;
	float areaOfRectangle		= 0;
	float perimeterOfRectangle	= 0;

	float radius				= 0;
	float areaOfCircle			= 0;
	float circumferenceOfCircle	= 0;


	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMERS << endl;
	cout << "*  " << setw(14) << "CLASS" << ": " << CLASS << endl;
	cout << "*  " << setw(14) << "SECTION" << ": " << SECTION << endl;
	cout << "*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	* INPUT - Takes in the height and base of triangle
	**************************************************************************/
	cout << left;
	cout << setw(ALIGN) << "Enter the height of the triangle:";
	cin  >> height;

	cout << setw(ALIGN) << "Enter the base of the triangle:";
	cin  >> base;
	
	cout << endl;

	/***************************************************************************
	* PROCESSING - Computes the area and perimeter of triangle
	**************************************************************************/
	areaOfTriangle		= (height * base) / 2;

	perimeterOfTriangle = base * 3;

	/***************************************************************************
	* OUTPUT - Outputs the area and perimeter of the triangle
	**************************************************************************/
	cout << right;
	cout << "TRIANGLE OBJECT" << endl;
	cout << setw(9) << "Area" << setw(18) << "Perimeter" << endl;
	cout << setw(9) << areaOfTriangle << setw(18) << perimeterOfTriangle;
	cout << endl << endl << endl;

	/***************************************************************************
	* INPUT - Takes in the width and height of rectangle
	**************************************************************************/
	cout << left;
	cout << setw(ALIGN + 1) << "Enter the width of the rectangle: ";
	cin  >> width;

	cout << setw(ALIGN + 1) << "Enter the height of the rectangle: ";
	cin  >> heightRect;

	cout << endl;

	/***************************************************************************
	* PROCESSING - Computes the  area and perimeter of rectangle
	**************************************************************************/
	areaOfRectangle			= width * heightRect;

	perimeterOfRectangle	= (width + heightRect) * 2;

	/***************************************************************************
	* OUTPUT - Outputs the area and perimeter of rectangle
	**************************************************************************/
	cout << right;
	cout << "RECTANGLE OBJECT" << endl;
	cout << setw(9) << "Area" << setw(18) << "Perimeter" << endl;
	cout << setw(9) << areaOfRectangle << setw(18) << perimeterOfRectangle;
	cout << endl << endl << endl;

	/***************************************************************************
	* INPUT - Takes in the radius of the circle
	**************************************************************************/
	cout << left;
	cout << setw(ALIGN - 2) << "Enter the radius of the circle: ";
	cin  >> radius;

	cout << endl;

	/***************************************************************************
	* PROCESSING - Computes the area and circumference of circle
	**************************************************************************/
	areaOfCircle			= PI * radius * radius;

	circumferenceOfCircle	= PI * radius * 2;

	/***************************************************************************
	* OUTPUT - Outputs the area and circumference of circle 
	**************************************************************************/
	cout << right;
	cout << "CIRCLE OBJECT" << endl;
	cout << setw(9) << "Area" << setw(18) << "Circumference" << endl;
	cout << setw(9) << areaOfCircle << setw(18) << circumferenceOfCircle;

	cout << endl << endl << endl << endl << endl;

	//Second Run

	/***************************************************************************
	* INPUT - Takes in the height and base of triangle
	**************************************************************************/
	cout << left;
	cout << setw(ALIGN) << "Enter the height of the triangle:";
	cin >> height;

	cout << setw(ALIGN) << "Enter the base of the triangle:";
	cin >> base;

	cout << endl;

	/***************************************************************************
	* PROCESSING - Computes the area and perimeter of triangle
	**************************************************************************/
	areaOfTriangle = (height * base) / 2;

	perimeterOfTriangle = base * 3;

	/***************************************************************************
	* OUTPUT - Outputs the area and perimeter of the triangle
	**************************************************************************/
	cout << right;
	cout << "TRIANGLE OBJECT" << endl;
	cout << setw(9) << "Area" << setw(18) << "Perimeter" << endl;
	cout << setw(9) << areaOfTriangle << setw(18) << perimeterOfTriangle;
	cout << endl << endl << endl;

	/***************************************************************************
	* INPUT - Takes in the width and height of rectangle
	**************************************************************************/
	cout << left;
	cout << setw(ALIGN + 1) << "Enter the width of the rectangle: ";
	cin >> width;

	cout << setw(ALIGN + 1) << "Enter the height of the rectangle: ";
	cin >> heightRect;

	cout << endl;

	/***************************************************************************
	* PROCESSING - Computes the  area and perimeter of rectangle
	**************************************************************************/
	areaOfRectangle = width * heightRect;

	perimeterOfRectangle = (width + heightRect) * 2;

	/***************************************************************************
	* OUTPUT - Outputs the area and perimeter of rectangle
	**************************************************************************/
	cout << right;
	cout << "RECTANGLE OBJECT" << endl;
	cout << setw(9) << "Area" << setw(18) << "Perimeter" << endl;
	cout << setw(9) << areaOfRectangle << setw(18) << perimeterOfRectangle;
	cout << endl << endl << endl;

	/***************************************************************************
	* INPUT - Takes in the radius of the circle
	**************************************************************************/
	cout << left;
	cout << setw(ALIGN - 2) << "Enter the radius of the circle: ";
	cin >> radius;

	cout << endl;

	/***************************************************************************
	* PROCESSING - Computes the area and circumference of circle
	**************************************************************************/
	areaOfCircle = PI * radius * radius;

	circumferenceOfCircle = PI * radius * 2;

	/***************************************************************************
	* OUTPUT - Outputs the area and circumference of circle
	**************************************************************************/
	cout << right;
	cout << "CIRCLE OBJECT" << endl;
	cout << setw(9) << "Area" << setw(18) << "Circumference" << endl;
	cout << setw(9) << areaOfCircle << setw(18) << circumferenceOfCircle;

	int a = 0;

	cin >> a;

	return 0;
}
