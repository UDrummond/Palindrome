//Michael Drummond
//Check String if Palindrome
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
	    cout <<"This is a palidrome" << endl;
	}
	else 
	{
	    cout <<"This is not a palidrome"<< endl;
        }
    
    //Output reverse order
	cout << "Reverse order:" << TempString;

	return 0;
}
