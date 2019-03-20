#include <iostream>
#include <string>
#include <cmath>
using namespace std;
	
int main()
{
	float m1; // var for mass of object 1
	float v1i; // var for initial velocity of object 1
	float v1f; // var for final velocity of object 1
	float m2; // var for mass of object 2
	float v2i; // var for initial velocity of object 2
	float v2f; // var for final velocity of object 2
	char ContChoice = 'y'; // choice when user deciding to continue or not
	char CollType; // var for identifying what type of collision occurred
	
	cout << "This program takes user input data from the " << endl;
	cout << "collisions laboratory experiment, and outputs " << endl;
	cout << "calculated data useful for analysis." << endl << endl << endl;
	cout << "Please be sure to enter you data carefully!" << endl << endl << endl;
	
    while ( ContChoice == 'y' )
    {
       	cout << "Please enter mass[kg] of object 1:" << endl << "     ";
       	cin >> m1;
       	cout << "Please enter initial velocity[m/s] of object 1:" << endl << "     ";
       	cin >> v1i;
       	cout << "Please enter final velocity[m/s] of object 1:" << endl << "     ";
       	cin >> v1f;
       	cout << "Please enter mass[kg] of object 2:" << endl << "     ";
       	cin >> m2;
       	cout << "Please enter initial velocity[m/s] of object 2:" << endl << "     ";
       	cin >> v2i;
       	cout << "Plese enter final velocity[m/s] of object 2:" << endl << "     ";
       	cin >> v2f;
       	cout << "What type of collission?   (e = elastic / i = inelastic) :";
       	cout << endl << "     ";
       	cin >> CollType;
       	cout << endl << endl << endl;
       	cout << "Pi = " << m1*v1i + m2*v2i << " [kgm/s] " << endl << endl;
       	cout << "Pf = " << m1*v1f + m2*v2f << " [kgm/s] " << endl << endl;
       	cout << "%Diff = " << ((m1*v1i + m2*v2i)-(m1*v1f + m2*v2f))/(m1*v1i + m2*v2i)*100 << " [%] ";
       	cout << endl << endl;
		if (CollType == 'e')
       	{
       		cout << "Eki = " << (.5)*m1*(pow(v1i,2)) + (.5)*m2*(pow(v2i,2)) << " [J] " << endl << endl;
			cout << "Ekf = " << (.5)*m1*(pow(v1f,2)) + (.5)*m2*(pow(v2f,2)) << " [J] " << endl << endl;
			cout << "%Diff = " << (((.5)*m1*(pow(v1i,2)) + (.5)*m2*(pow(v2i,2)))-((.5)*m1*(pow(v1f,2)) + (.5)*m2*(pow(v2f,2))))/((.5)*m1*(pow(v1i,2)) + (.5)*m2*(pow(v2i,2)))*100 << " [%] ";
			cout << endl << endl; 
       	}
       	cout << endl << endl;
       	cout << "Analyze data for another data set?  y/n ";
		cout << endl << "     ";
       	cin >> ContChoice;
    }
    cout << endl << endl;
    cout << "You have chosen to end this calculation session. Thank you!" << endl << endl; 
return 0;
}
