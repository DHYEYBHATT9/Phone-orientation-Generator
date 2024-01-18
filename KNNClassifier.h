#pragma once
#include"Data.h"
#include"Classifier.h"
#define TRAINING_FILE "trainingData"
#define TESTING_FILE "testingData"
#define UKNOWN_FILE "unknownData"
#define ARRAY_SIZE 175

using namespace std;

/// <summary>
/// @brief This is the KNNClassifier class. It inherits from the Classifier class.
/// 
/// @author DHYEY BHATT
/// @date 14/04/2023
/// </summary>
class KNNClassifier : public Classifier
{
	Data dataPoints[ARRAY_SIZE];
	Data testingPoints[ARRAY_SIZE];
public:
	void classifyFunction();
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

	
};