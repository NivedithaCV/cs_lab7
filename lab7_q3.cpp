//PRINTING EVEN NUMBERS
//library
#include <iostream>
using namespace std;
//declaring function
void printeven1(int a,int z,int i)
{	
	//condintion to stop
	if(i<a||i>z)
	{
	 
	}
	else
	{
	//condition to increment by @
	if(i%2==0){
	//printing the number
	 cout<<i<<endl;
	//incrementing by 2
	 i=i+2;
	//repeating by recursion printeven1
	printeven1(a,z,i);}
	else{
	//incrementing by 1
	i++;
	//repeating by recursion printeven2
	printeven1(a,z,i);}
	
	}
}	

//driver function
int main()
{
	//driving function
	int a,z;
	//asking for input and reading the variables
	cout<<"print the lower limit"<<endl;
	cin>>a;
	cout<<"print the upper limit"<<endl;
	cin>>z;
	//callling the function printeven
	 printeven1(a,z,a);
	
	return 0;
}
