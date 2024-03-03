#include <iostream>
#include <string>
using namespace std;

namespace electric
{

struct Car{
	string Name;
	int Speed = 150;
	int Acceleration = 30;

	Car(string name)
	{
		Name = name;
	}
};
}


ostream& operator<<(ostream& COUT, electric::Car& cars) 
{
    COUT << "Name: " << cars.Name << endl;
    COUT << "Top Speed: " << cars.Speed << endl;
    COUT << "Acceleration: " << cars.Acceleration << endl;
    return COUT;
}


namespace hybrid
{
struct Car{
	string Name;
	int Speed = 170;
	int Acceleration = 25;

	Car(string name)
	{
		Name = name;
	}
};
}


ostream& operator<<(ostream& COUT, hybrid::Car& cars) 
{
    COUT << "Name: " << cars.Name << endl;
    COUT << "Top Speed: " << cars.Speed << endl;
    COUT << "Acceleration: " << cars.Acceleration << endl;
    return COUT;
}

namespace gasoline
{
struct Car{
	string Name;
	int Speed = 200;
	int Acceleration = 15;

	Car(string name)
	{
		Name = name;
	}
};
}

ostream& operator<<(ostream& COUT, gasoline::Car& cars) 
{
    COUT << "Name: " << cars.Name << endl;
    COUT << "Top Speed: " << cars.Speed << endl;
    COUT << "Acceleration: " << cars.Acceleration << endl;
    return COUT;
}


int main(){

	electric::Car car1("Tesla");
	hybrid::Car car2("Toyota");
	gasoline::Car car3("Dodge");


	cout<< car1 << car2 << car3;
	return 0;
}
