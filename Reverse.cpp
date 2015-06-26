//Michael Drummond
//Reverse String Order and Compare to original
#include <iostream>
using namespace std;

int main()
{
    //Declaring string variables
	string strin,TempString;

	cout << "Enter String:";
	cin >> strin;

    //Output string to reverse
	cout << "Reversing the string:" << strin <<endl;
	
	//Reversing the string order and setting it to TempString variable
	TempString = string(strin.rbegin(), strin.rend());
	
	//Comparing original string to reverse order
	if (strin == TempString)
	{
	    cout <<"The string reversed is the same as the original string" << endl;
	}
	else 
	{
	    cout <<"Reversed string is not the same as original string"<< endl;
        }
    
    //Output reverse order
	cout << "Reverse order:" << TempString;

	return 0;
}
