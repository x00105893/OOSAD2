
#include <iostream>
#include "firstlib.h"
using namespace std;

void printGreeting()
{
	cout << "Welcome to C++ Library Programming" << endl;
}

void weatherForecast(int ndays){
	while(0 <= ndays <= 3){
		cout << " Day" << ndays << endl;
		cout << " High in deg C " << ndays + (0.5* ndays) <<endl;
		cout << " Low in deg C " << ndays - (0.5* ndays)<< endl;
		cout << " Predicted Rainfal "<< ndays * 1000<< " ml" << endl;
		cout << " Windspeed " << ndays * 10 << "Km/h"<< endl;
		cout << " Wind-direction " << "North"<< endl;		  
	}	
}
void getMyLocation(std::string &location){
		location = "Dublin";
}
