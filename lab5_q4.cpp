//include library
#include<iostream>
using namespace std;
//main function
int main()
{
//declare and define a variable
   int a;
   cout<<"enter a number";
   cin>>a;
//give condition
   if(a%5 == 0 && a%11 == 0)
   {cout<<"the number is divisible by 5 and 11";}
   else
   {cout <<"the number not divisible by 5 and 11";}
//end of program
return 0;
}
