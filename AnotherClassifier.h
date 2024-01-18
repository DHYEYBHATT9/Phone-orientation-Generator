
#include"Classifier.h"
#include"Data.h"

using namespace std;

/// <summary>
/// @brief HERE, is the AnotherClassifier class.
/// It inherits from the Classifier class which is our parent class.
/// 
/// @author DHYEY BHATT
/// @date 14/04/2023
/// </summary>
class AnotherClassifer :public Classifier {

public:
	/// <summary>
	/// @brief Here, is the testingFunction function. It overrides the inherited testingFunction function.
	/// 
	/// This testingFunction function overrides the inherited function. Also prints a message to the user in the terminal.
	/// @author DHYEY BHATT
	/// @date 14/04/2023
	/// </summary>
	void testingFunction();
	/// <summary>
	/// @brief This is the classifyFunction function. It overrides the inherited classifyFunction function.
	/// 
	/// This classifyFunction function overrides the inherited function. Also prints a message to the user in the terminal.
	/// @author DHYEY BHATT
	/// @date 14/04/2022
	/// </summary>
	void classifyFunction();
};