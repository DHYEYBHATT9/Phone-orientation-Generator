
#include"AnotherClassifier.h"                           //LIST OF HEADER FILES
#include"NNClassifier.h"
#include"DummyClassifier.h"
#include"KNNClassifier.h"
#include"Data.h"
#include"Classifier.h"
#include<iostream>
//********************************************
//Dhyey Bhatt
//Final Project - OOP
//AKREM EL GHAZAL
//********************************************

using namespace std;

int main()
{
	cout << "Select a classifier method" << endl;
	cout << "1)DummyClassifier   method" << endl;
	cout << "2)KNNClassifier     method" << endl;
	cout << "3)NNClassifier      method" << endl;
	int i=0;
	cin >> i;
	switch (i)
	{  

	    case 1:
			cout << "This DummyClassifier method has not been implemented yet" << endl;     //DummyClassifier.
		
			break;

		case 2:
			cout << "This KNNClassifier method has not been implemented yet" << endl;       //KNNClassifier.
			break;

		case 3:
		NNClassifier classifier;                                                            //NNClassifier.

		

		do
		{
			cout << "Select an option:" << endl;
			cout << "1) Read data from testingFunction file for finding phone orientation" << endl;
			cout << "2) Read data from unknown file for finding phone orientation" << endl;
			cout << "3) Manually enter a single coordinate for finding phone orientation" << endl;
			int input = 0;
			cin >> input;
			switch (input)
			{
			case 1:
			{
				classifier.testingFunction();                           //to read data using testingFunction
				return 0;

			}
			case 2:
			{
				classifier.classifyFunction();                         //to read data from unknown files
				return 0;
			}
			case 3:                                                    //to manually enter x,y,z coordinates.
			{
				string x, y, z;
				cout << "Please enter the x value of the mobile co-ordinate --> " << endl;
				cin >> x;                                                                 // x coordinate
				if (stod(x) < -1 || stod(x) > 1)
				{
					cout << "Please enter value between or equal to -1 and 1 " << endl;
					break;
					
				}
				cout << "Please enter the y value of the mobile co-ordinate --> " << endl;
				cin >> y;                                                                // y coordinate
				if (stod(y) < -1 || stod(y) > 1)
				{
					cout << "Please enter value between or equal to -1 and 1 " << endl;
					break;

				}
				cout << "Please enter the z value of the mobile co-ordinate --> " << endl;
				cin >> z;                                                                 // z coordinate
				if (stod(z) < -1 || stod(z) > 1)
				{
					cout << "Please enter value between or equal to -1 and 1 " << endl;
					break;

				}
				classifier.classifyFunction(stod(x), stod(y), stod(z));                   // finally assign it in the function
				return 0;
			}
			default:
				system("cls");
			}                                                                             //end of inside switch case taking input 
		} while (true);
		break;
	}                                                                                     //end of the main switch case taking i.
	return 0;
}                                                                                         //end of the main code.