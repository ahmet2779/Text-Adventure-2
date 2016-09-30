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

	cout << "Enter an X and Y index!" << endl;
	int x;
	int y;
	cin >> x >> y;
	cout << rooms[x][y] << endl;


	return 0;

	
}
