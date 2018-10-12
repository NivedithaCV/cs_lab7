//program to find the nth Fibonacci term using recursssion
//library
#include <iostream>
using namespace std;
//declaring function
int fib(int n)
{
//condition
if(n==1){
return 1;}
if(n==2){
return 1;}
else{
 return fib(n-1)+fib(n-2);}
}

//driver function
int main(){
//declaring variable
int a;
//asking for number
cout<<"type a number"<<endl;
cin>>a;
//displaying result
cout<<fib(a);
return 0;
}
  



