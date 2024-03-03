/*1) Write a function that converts kilometers per hour to miles per hour
2) Write a function that converts temperature in Kelvin to Fahrenheit
3) Write a function that will compute the total and average of five numbers
4) Write a function that will accept the radius of a circle from the user and compute the area
    and circumference
*/
/*
void test(int arg1, double arg2)
{
	cout << "\nIn function test()."
		 << "\n 1.argument: "<< arg1
		 << "\n 2.argument: "<< arg2 << endl;
}*/
//Felix Jaramillo
//Lab5
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void measure(double);
void temperature(double);
void Average(double, double, double, double, double);
void Radius(double);

int main(){
	//Speed converter
	double kilo;
	cout<< "Enter a value in kph to convert to mph"<<endl;
	cin>>kilo;
	measure(kilo);
	//Temperature converter
	double kelvin;
	cout<< "Enter a Value in Kelvin too convert to Fahrenheit"<<endl;
	cin>>kelvin;
	temperature(kelvin);
	//Average
	double num1, num2, num3, num4, num5;
	cout<<"Enter 5 numbers to caluculate the average of "<<endl;
	cin>>num1>>num2>>num3>>num4>>num5;
	Average(num1, num2, num3, num4, num5);
	//Radius
	double rad;
	cout<<"Enter radius to find circumference and area of a circle"<<endl;
	cin>>rad;
	Radius(rad);
	return 0;
}

void measure(double kilo)
{
	double miles;
	miles = kilo / 1.609;
	cout<<kilo<<"kph to mmph is "<<miles<<"mph" << endl;
}

void temperature(double kelvin)
{
	double Fahrenheit;
	//(0K − 273.15) × 9/5 + 32 = -459.7°F
	Fahrenheit = (kelvin - 273.15) * 9/5 + 32;
	cout<<kelvin<<"kelvin to Fahrenheit is "<<Fahrenheit<< endl;
}

void Average(double num1,double num2,double num3,double num4,double num5)
{
	double Avg;
	Avg = (num1 + num2 + num3 + num4 + num5)/5;
	cout<<"The Average is "<<Avg<< endl;
}

void Radius(double rad)
{
	double circumference, area;
	circumference = 2 * 3.14 * rad;
	area = 3.14 * pow(rad, 2);
	cout<<"THe circumference is: "<<circumference<<endl;
	cout<<"The area is: "<<area<<endl;
}