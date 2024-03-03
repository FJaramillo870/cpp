#ifndef _DEALERSHIP_
#define _DEALERSHIP_
#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

class Dealership
{


private:
string car_bodytype[5] = {"       Sedan", "Pickup", "MV", "SUV", "conver"};
string car_type[3] = {"Ford", "Chevy", "Ferrari"};
string availability_choice[2] = {"Yes", "No"};
string availability[3][5];


public:
void car_availability()
{
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<5;j++)
	    {
		int avail = rand() % 2;
		availability[i][j] = availability_choice[avail];
	}
	}
	
};
void current_stock()
{
cout << "These are the current cars in stock:\n"
			 << "============================================================\n";

for (int i=0; i<5; i++)
		{
			cout <<car_bodytype[i] << "\t";
		}

		cout << endl;

		for (int i=0; i<3; i++)
		{
			cout << car_type[i] << "\t";
			for (int j=0; j<5; j++)
			{	
				cout <<availability[i][j] << "\t";
			}
			cout << endl;
		}
};

bool user_choice(int inp2, int inp3){
cout<<availability[inp2][inp3] << "\t";
};

};
#endif
