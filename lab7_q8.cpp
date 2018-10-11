//To find the sum of the digits of a number
//library
#include <iostream>
using namespace std;

//declaring the function
int sumofdigit(int n,int i)
{
	//providing condition to stop
	if(n==0)
	{
         return i;
	}
	//providing the else condition
	else
	{
	
	 i=(i)+(n%10);
	 
	 return sumofdigit(n/10,i);
	}
}

//driver function
int main()
{
	//declaring the variable
	int n,c;
	//asking a number
	cout<<"type a number : "<<endl;
	//reading the value
	cin>>n;
	//call to the function
	c = sumofdigit(n,0);
	//print the result
	cout<<"The sum is "<<c<<endl;
	return 0;
}
