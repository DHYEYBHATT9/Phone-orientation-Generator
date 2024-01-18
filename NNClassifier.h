#pragma once
#include"Data.h"
#include"Classifier.h"
#define TRAINING_FILE "trainingData"
#define TESTING_FILE "testingData"
#define UKNOWN_FILE "unknownData"
#define ARRAY_SIZE 175

using namespace std;

/// <summary>
/// @brief This is the NNClassifier class. It inherits from the Classifier class.
/// 
/// @author DHYEY BHATT
/// @date 14/04/2023
/// </summary>
class NNClassifier : public Classifier
{
	Data dataPoints[ARRAY_SIZE];
	Data testingPoints[ARRAY_SIZE];
public:
	/// <summary>
	/// @brief This is the default constructor.
	/// 
	/// This constructor creates an NNClassifier object.
	/// @author DHYEY BHATT
	/// @date 14/04/2023
	/// </summary>
	NNClassifier();
	/// <summary>
	/// @brief This is the testingFunction function. It overrides the inherited testingFunction function.
	/// 
	/// This testingFunction function overrides the inherited function. It tests the classifier by using the testingFunction data.
	/// @author DHYEY BHATT
	/// @date 14/04/2023
	/// </summary>
	void testingFunction();
	/// <summary>
	/// @brief This is the classifyFunction function. It overrides the inherited classifyFunction function.
	/// 
	/// This classifyFunction function overrides the inherited function. It assigns an orientation to the unknown data from file.
	/// @author DHYEY BHATT
	/// @date 14/04/2023
	/// </summary>
	void classifyFunction(double , double , double );
	/// <summary>
	/// @brief This is the parameterized classifyFunction function. It overrides the inherited classifyFunction function.
	/// 
	/// This classifyFunction function overrides the inherited function. It assigns an orientation to the individual unknown data point.
	/// @author DHYEY BHATT
	/// @param X: A double value for the x position.
	/// @param Y: A double value for the y position.
	/// @param Z: A double value for the z position.
	/// @date 14/04/2023
	/// </summary>
	void classifyFunction();
	/// <summary>
	/// @brief This is the nearestNeighbor function.
	/// 
	/// This function finds the nearest neighbor to a specific data point.
	/// @author DHYEY BHATT
	/// @param Point: A Data object
	/// @return Point: A Data object by reference
	/// @date 14/04/2023
	/// </summary>
	Data& nearestNeighbor(Data point);
};