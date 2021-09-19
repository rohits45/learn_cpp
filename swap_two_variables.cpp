//program for swap two veriables 
#include<iostream>
using namespace std;

 
 int main()
 {  
     int a,b;
     cout<<"Enter Two values for Swap :\n";
     cin>>a>>b;
     //methode 1 using + and - arithmetic oprations
    a=a+b;
    b=a-b;
    a=a-b;

     //methode 2 using xor opration
    a=a^b;
    b=a^b;
    a=a^b;

     //methode 3 using inbuild swap function but it's use temp as third variable 
    swap(a,b);

     //methode 4 using third veriable
    int temp=a;
    a=b;
    b=temp;
     cout<<"\nAfter four time swap it will give same input as an output\n";
     cout<<a<<" , "<<b;
     return 0;
 }
