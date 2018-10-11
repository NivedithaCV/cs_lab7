//To find the HCF of two numbers
//library
#include <iostream>
using namespace std;
//declaring function
int hcf(int a, int b)
{
	//giving condition
	if (b != 0)
	{
           return hcf(b, a%b);
	}
	//giving condition to stop
	else
	{ 
         return a;
	}
}

//driving function
int main()
{
   //declaring variable
   int n,c;
   //asking the user to print numbers
   cout << "Enter two numbers"<<endl;
  //reading the values
   cin >> n >> c;
	//printing the result
   cout << "H.C.F of the above numbers is " << hcf(n,c)<<endl;

   return 0;
}


