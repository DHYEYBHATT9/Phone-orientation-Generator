#pragma once
#include"Data.h"
#include"NNClassifier.h"
#define TRAINING_FILE "trainingData.txt"
#define TESTING_FILE "testingData.txt"
#define UKNOWN_FILE "unknownData.txt"
#define RESULT_FILE "result.txt"
//********************************************
//Dhyey Bhatt
//Final Project - OOP
//AKREM EL GHAZAL
//********************************************
using namespace std;


NNClassifier::NNClassifier()
{
	ifstream input;
	input.open(TRAINING_FILE);
	int i = 0;
	if (input.is_open())
	{

		while (!input.eof())
		{

			string line;
			getline(input, line);
			istringstream issline(line);

			string dimentions;


			getline(issline, dimentions);
			istringstream issdimention(dimentions);
			string x;
			string y;
			string z;
			string orientation;
			while (!issdimention.eof()) {
				getline(issdimention, x, ',');
				getline(issdimention, y, ',');
				getline(issdimention, z, ',');
				getline(issdimention, orientation);

			}
			Data newPoint(stod(x), stod(y), stod(z), stoi(orientation));
			dataPoints[i] = newPoint;
			i++;
		}
	}
	input.close();
}

void NNClassifier::testingFunction()
{
	ifstream input;
	input.open(TESTING_FILE);
	int i = 0;
	if (input.is_open())
	{
		while (!input.eof())
		{
			string line;
			getline(input, line);
			istringstream issline(line);

			string dimentions;
			getline(issline, dimentions);
			istringstream issdimention(dimentions);

			string x;
			string y;
			string z;
			string orientation;
			while (!issdimention.eof()) {
				getline(issdimention, x, ',');
				getline(issdimention, y, ',');
				getline(issdimention, z, ',');
				getline(issdimention, orientation);

			}
			Data newPoint(stod(x), stod(y), stod(z), stoi(orientation));
			testingPoints[i] = newPoint;

			i++;
		}

	}
	input.close();


	for (int j = 0; j < i; j++)
	{
		Data nearestNeighbor = this->nearestNeighbor(testingPoints[j]);
		cout << "The testingFunction point's orientation of the phone is: " << nearestNeighbor.getOrientation() << endl;
	}

	for (int j = 0; j < i; j++)
	{
		Data emptyPoint;
		testingPoints[i] = emptyPoint;
	}
}

void NNClassifier::classifyFunction() {
	ifstream input;
	input.open(UKNOWN_FILE);
	int i = 0;
	if (input.is_open())
	{
		while (!input.eof())
		{

			string line;
			getline(input, line);
			istringstream issline(line);

			string dimentions;
			getline(issline, dimentions);
			istringstream issdimention(dimentions);

			string x;
			string y;
			string z;

			while (!issdimention.eof()) {
				getline(issdimention, x, ',');
				getline(issdimention, y, ',');
				getline(issdimention, z);
			}

			Data newPoint(stod(x), stod(y), stod(z), 0);
			testingPoints[i] = newPoint;

			i++;
		}
		input.close();

		//Find nearest neighbor and set orientation
		for (int j = 0; j < i; j++)
		{
			Data nearestNeighbor = this->nearestNeighbor(testingPoints[j]);
			testingPoints[j].setO(nearestNeighbor.getO());
		}

		cout << "Orientations of the mobile have been added to the result.txt data file successfully." << endl;
	}

	//WRITE TESTING DATA TO unknownData.txt
	ofstream output;
	output.open(RESULT_FILE);
	
	if (output.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			Data d;
			d.setO(testingPoints[j].getO());
			output << testingPoints[j].getX() << "," << testingPoints[j].getY() << "," << testingPoints[j].getZ() << "," << testingPoints[j].getO() << d.getOrientation() << endl;
		}

		output.close();
	}
	else
		cout << "Error opening of unknown data file is done." << endl;
}

void NNClassifier::classifyFunction(double x, double y, double z)
{
	Data point(x, y, z, 0);
	Data nearestNeighbor;
	nearestNeighbor = this->nearestNeighbor(point);
	point.setO(nearestNeighbor.getO());
	cout << "That point has the orientation  -> : " << point.getO() << endl;
}

Data& NNClassifier::nearestNeighbor(Data point)
{
	Data nearestNeighbor = dataPoints[0];

	for (int c = 1; c < ARRAY_SIZE; c++)
	{
		if (point.getDistanceFrom(dataPoints[c]) < point.getDistanceFrom(nearestNeighbor))
			nearestNeighbor = dataPoints[c];
	}

	return nearestNeighbor;
}