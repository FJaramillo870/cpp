#include "car_dealership.h"

int main(){
	int inp;
	int inp2;
	int inp3;
	Dealership availability;	
	availability.car_availability();
	
	while (true){
	cout<<"===================================Choose one of the four choices==========================================================="<<endl;
	cout<< "1) See today's stock of all cars." <<"\n"
	    << "2) See a specific stock of a certain car."<<"\n"
	    << "3) Go to a new day."<<"\n"
	    << "4) Leave the dealership"<<endl;
	cin>>inp;
	
	if(inp == 1){
	availability.current_stock();}
	
	else if(inp == 2){
	cout<<"Choose a brand"<<"\n"
	    <<"0)ford"<<"\n"
	    <<"1)chevy"<<"\n"
	    <<"2)ferrari"<<endl;
	cin>>inp2;
	cout<<"choose a body type"<<"\n"
	    <<"0)sedan"<<"\n"
	    <<"1)Pickup"<<"\n"
	    <<"2)MV"<<"\n"
	    <<"3)SUV"<<"\n"
	    <<"4)conver"<<endl;
	cin>>inp3;
	availability.user_choice(inp2, inp3);
	}
	
	else if(inp == 3){
	availability.car_availability();
	cout<<"New Day check to see whats new."<<endl;}
	
	else if(inp == 4){exit(0);}
	
	}

return 0;
}
