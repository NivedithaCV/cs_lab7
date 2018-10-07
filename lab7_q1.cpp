//FINDING THE POWER OF NUMBERS
//library
#include <iostream>
using namespace std;
//recursion function
	int calculatepower(int base,int power)
	{
	//condition 
		if (power!=0)
		{
		 return base*calculatepower(base,power-1);
		}
	//providing condition to stop
	else 	
		{
		return 1;
		}
	}
	//driver function
	int main()
 	{
	//declaring variables
		int a,b;
	//asking for base number
		cout<<"enter the base number"<<endl;
	//reading for variable a
		cin>>a;
	//asking user for variable b
		cout<<"enter the power"<<endl;
	//reading variable b
		cin>>b;
	//call function
		calculatepower(a,b);
	//displaying the result
		cout<<"the answer is "<<calculatepower(a,b)<<endl;
		return 0;
}
