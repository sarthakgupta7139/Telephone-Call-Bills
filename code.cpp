#include<iostream>

using namespace std;
int phone_call(int);
int main()
{
   int calls, amount;
   cout<<"Enter Total Number of Calls Made: ";
   cin>>calls;
   amount = phone_call(calls);
   cout<<"\nTotal Phone Bill to Paid: "<<amount;
   cout<<endl;
   return 0;
}
int phone_call(int ncall)
{
   int temp, charge;
   if(ncall<=150)
      return 0;
   else
   {
      ncall = ncall - 150;
      if(temp<=250)
         charge = temp*1;
      else
      {
         temp = ncall-250;
         charge = 250 + (temp*2);
      }
      return charge;
   }
}
