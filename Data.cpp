#include"Data.h"

//********************************************
//Dhyey Bhatt
//Final Project - OOP
//AKREM EL GHAZAL
//********************************************
Data::Data()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->o = 0;
}

Data::Data(double x, double y, double z, int o)                           // data input
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->o = o;
}

Data::Data(Data& point) {                                                //passed through reference
	this->x = point.x;
	this->y = point.y;
	this->z = point.z;
	this->o = point.o;
}

double Data::getX(void) {                                               // all the getters are listed below
	return x;
}

double Data::getY(void) {
	return y;
}

double Data::getZ(void) {
	return z;
}

int Data::getO(void) {
	return o;
}

void Data::setX(double x) {                                            // All the setters are listed below
	this->x = x;
}

void Data::setY(double y) {
	this->y = y;
}

void Data::setZ(double z) {
	this->z = z;
}

void Data::setO(int o) {
	this->o = o;
}

string Data::getOrientation()                                          // to get the orientation
{
	if (this->o == 1)
		return ",Face Up";
	else if (this->o == 2)
		return ",Face Down";
	else if (this->o == 3)
		return ",Portrait ";
	else if (this->o == 4)
		return ",Portrait Upside Down";
	else if (this->o == 5)
		return ",Landscape Left";
	else if (this->o == 6)
		return ",Landscape Right";
}

double Data::getDistanceFrom(Data point)                             // getDistanceFrom for finding the nearest integer
{
	double p = sqrt(pow((point.getX() - this->x), 2) + pow((point.getY() - this->y), 2) + pow((point.getZ() - this->z), 2));       // formula
	return p;
}

Data Data::operator = (Data point)                                  //use of DATA Operator  
{
	if (this != &point)
	{
		this->x = point.x;
		this->y = point.y;
		this->z = point.z;
		this->o = point.o;
	}

	return *this;
}