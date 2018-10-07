//FINDING THE SUM OF N NATURAL NUMBERS
//libray
#include <iostream>
using namespace std;
//declaring function
int printnum(int n)
{	
	//condition to stop
	if (n==1)
	{
	return 1;
	}
	else
	{
	
	return n+printnum(n-1);
}}	
//driver function
int main()
{	
	//declaring variable
	int n;
	//asking user for the limit
	cout<<"enter a number"<<endl;
	//reading the value
	cin>>n;
	//printing the result
	cout<<printnum(n)<<endl;
	return 0;
}
