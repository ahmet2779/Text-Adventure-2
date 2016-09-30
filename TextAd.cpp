#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int n;
	srand(time(NULL));

	string rooms[4][3];

	int mapWidth = 4;
	int mapHeight = 3;

	rooms[0][0] = "IHOP \n Here you can get pancakes 24/7";
	rooms[1][0] = "Cliffside \n A tall cliff to the north block your way further";
	rooms[1][1] = "Grassy Field \n You are standing in a grass field";
	rooms[1][2] = "River";
	rooms[2][0] = "Cave Entrance \n A gaping hole on the cliff wall leads inwards to a dark cavern";
	rooms[2][1] = "Soccer Field";
	rooms[2][2] = "Dark Forest";
	rooms[3][0] = "Inside Cave \n The spooky cave is dark and damp";
	rooms[3][1] = "Deep Cave \n There is a man dressed like a bat in here, much to your suprise";
	rooms[3][2] = "Village Exit";
	rooms[0][1] = "Village Entrance \n A Sleepy village sits, barely anbody wandering around";
	rooms[0][2] = "Village Inn \n You could order some tasty pancakes here.";

	int Playerx = 1;
	int Playery = 1;

	bool isDone = false;

	cout << rooms[Playerx][Playery];
	
	int keyX = rand() % mapWidth;
	int keyY = rand() % mapHeight;

	int doorX = rand() % mapWidth;
	int doorY = rand() % mapHeight;
	
	if (Playerx == doorX && Playery == doorY)
	{
		cout << "The door is here but it is locked." << endl << endl;
	}
	
	if (Playerx == keyX && Playery == keyY)
	{
		cout << "The Key is here" << endl << endl;
	}
	
	while (!isDone)
	{
		
		cout << endl << "[N]orth, [S]outh, [E]ast, [W]est" << endl;
		char choice;
		cout << "Enter what direction you want to go: ";
		cin >> choice;
		choice = tolower(choice);

		if (choice == 'n' && Playery > 0 )
		{
			Playery--;
		}
		else if (choice == 's' && Playery < ( mapHeight - 1 ) )
		{
			Playery++;
		}
		else if (choice == 'e' && Playerx < ( mapWidth - 1 ) )
		{
			Playerx++;
		}
		else if(choice == 'w' && Playerx > 0)
		{
			Playerx--;
		}
		else
		{
			cout << "You can not go that way!";
		}

		cout << endl<< rooms[Playerx][Playery];
		
		if (Playerx == doorX && Playery == doorY)
		{
			cout << "The door is here but it is locked." << endl << endl;
		}

		if (Playerx == keyX && Playery == keyY)
		{
			cout << "The Key is here" << endl << endl;
		}

			
	
	
	}


	return 0;

	
}
