#include"Data.h"
#pragma once

using namespace std;

/// <summary>
/// @brief This is a Classifier class. It is an abstract class.
/// 
/// @author DHYEY BHATT
/// @date 14/04/2023
/// </summary>
class Classifier
{
	/// <summary>
	/// @brief This is a testingFunction function.
	/// 
	/// This testingFunction function is an abstract function.
	/// @author DHYEY BHATT
	/// @date 14/04/2023
	/// </summary>
	virtual void testingFunction() = 0;
	/// <summary>
	/// @brief This is a classifyFunction function.
	/// 
	/// This classifyFunction function is an abstract function.
	/// @author DHYEY BHATT
	/// @date 14/04/2023
	/// </summary>
	virtual void classifyFunction() = 0;


};