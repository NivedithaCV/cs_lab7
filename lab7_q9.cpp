//Finding the factorial
//library
#include <iostream>
using namespace std;
//recursion function
	int calculatefactorial(int n)
	{
	//condition 
		if (n!=0)
		{
		 return n*calculatefactorial(n-1);
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
		int a;
	//asking for base number
		cout<<"enter the base number"<<endl;
	//reading for variable a
		cin>>a;
	
	//call function
		calculatefactorial(a);
	//displaying the result
		cout<<"the answer is "<<calculatefactorial(a)<<endl;
		return 0;
}
