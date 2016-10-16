/*

Name: Program03

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 9-18-16

*/

#include <stdio.h>
#define MY_ARRAY 20



get_corners();
output_corners();
polygon_area();


int main()
{
	FILE *inp;
	FILE *outp;
	
	double x[MY_ARRAY];
	double y[MY_ARRAY];
	double item;
	int xIdx = 0;
	int yIdx = 0;

	int input_status;

	inp = fopen("number_array.txt", 'r');
	int ctrlKey = 0;

	//input_status = fscanf(inp, "%lf", &item); //reads in the values
	
	while (input_status == 1) //checks to see if there a numbers in the file
	{
		input_status = fscanf(inp, "%lf", &item);
		if (ctrlKey == 0) {
			x[xIdx] = item;
			xIdx++;
			ctrlKey = 1;
		}
		else {
			y[yIdx] = item;
			yIdx++;
			ctrlKey = 0;
		}
	}

	for (int i = 0; i < sizeof(x); i++)
	{
		printf("%lf", x[i]);
	}
	return 0;
}

get_corners()
{
	
	

	

	
	


}

output_corners()
{


}

polygon_area()
{


}