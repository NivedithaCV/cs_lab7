//PRINTING N NUMBERS
//library
#include <iostream>
using namespace std;

//declaring variable
int printnum(int n,int i)
{	
	//condition to stop
	if (i==n+1)
	{
	return 0;
	}
	else
	{
	//printing a number
	cout<<i<<endl;
	//increamenting
	i++;
	//repeating by recursion printmum(n,i)
	return printnum(n,i);
}}	
//Driver function
int main()
{	
	//declaring variables
	int i;
	int n;
	//asking for limiting number
	cout<<"enter a number"<<endl;
	//reading the value
	cin>>n;
	//calling printnum function
	printnum(n,1);
	return 0;
}
