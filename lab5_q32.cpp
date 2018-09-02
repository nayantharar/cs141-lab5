//include library
#include<iostream>
using namespace std;
int main()
{//declare variables and define all except t
int n,s=1 ,f=0,t;
   cout<<"enter any number";
   cin>>n;
//loop
   while(n>s)
   {f++;
   s=s*10;
   if (f == 1)
   {t =n%10;}
   }
   cout <<"last digit ="<<t<<"\n";
   s=s/10;
   t=n/s;
   cout<<"first digit ="<<t<<"\n";
return 0;
}
