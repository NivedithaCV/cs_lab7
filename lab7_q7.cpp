//To check a number is palindrome or not
//library
#include <iostream>
using namespace std;

//declaring the function
int pal(int n,int i)
{
	//providing condition to stop
	if(n==0)
	{
         return i;
	}
	//providing the else condition
	else
	{
	 i=(i*10)+(n%10);
	 return pal(n/10,i);
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
	c = pal(n,0);cout<<endl;
	//printing the condition
	if(n==c)
	{
	cout<<"The above number is a palindrome"<<endl;
	}
	else
	{
	cout<<"The above number  is not palindrome"<<endl;
	}
	return 0;

}
