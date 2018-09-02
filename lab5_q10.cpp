//include library
#include <iostream>
using namespace std;
//main function
int main()
{
//declare and define variables
     char a;
     cout<< "Enter any alphabet (upper or lower case)";
     cin>> a;
//give conditions
     if(a >= 'A' && a <= 'Z')
     {cout<<"The character entered is upper case";}
     else if(a >= 'a' && a <= 'z')
     {cout<<"The character entered is lower case";}
//end of program
return 0;
}
