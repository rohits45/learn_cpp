#include<iostream>
using namespace std;

class fact{
    public:
    int factorial(int n){
        if(n==1)
            return 1;
        else
            return n * factorial(n-1);
    }
 };


int main()
{
    int n;
    fact f;
    cout<<"Enter Number :-";
    cin>>n;
    cout<<f.factorial(n);


}