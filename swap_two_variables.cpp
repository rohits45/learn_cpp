//program for swap two veriables 
#include<iostream>
using namespace std;
int a = 4 , b = 6;
 
 int main()
 {  
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
    int c=a;
    a=b;
    b=c;

     cout<<a<<" , "<<b;
     return 0;
 }