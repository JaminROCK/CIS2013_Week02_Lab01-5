#include <iostream>
using namespace std;

int main()
{
	//Create a room's variables
	int room_length = 155;
	int room_width = 155;
	float room_radius = 15.2;
	float room_circle_area = (room_radius * room_radius) * 3.14;
	bool keep_running = true;
	char question;
	//Loop the program
	while (keep_running)
	{

		cout << "Enter your length: ";
		cin >> room_length;

		cout << "Enter your width: ";
		cin >> room_width;

		if(room_length > room_width)
		{
			cout << "Length is greater than width." << endl;
		}
		else 
		{
			cout << "Width is greater that length.";
		}

		/*
			Multiline comment
		*/
		
		cout << "Run again (y/n): "; //Inline comment
		cin >> question;
		//Kill the program
		if((question !='y') && (question !='Y')) 
		{
			keep_running = false;
		}
	}
	return 0;
}
