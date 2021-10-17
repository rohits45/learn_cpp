//Factorial Program in C++: Factorial of n is the product of all positive descending integers.
// Factorial of n is denoted by n!.
// Eg. 6! = 6*5*4*3*2*1 = 720
#include<iostream>
using namespace std;

class fact{
    long long int ans=1;

    public:
    int factorial(int n){   //Factorial Program using Recursion
        if(n==1)
            return 1;
        else
            return n * factorial(n-1);
    }
    int factorial_normal(int m){    //Factorial Program using Loop
        for(int i = 1; i <= m; i++){
            ans *= i; 
        }
        return ans;
    }

 };

int main()
{
    int n;
    fact f;
    cout<<"Enter Number :-";
    cin>>n;
    cout<<"Factorial using Loop for number "<<n<<" :- "<<f.factorial_normal(n)<<endl;
    cout<<"Factorial using Recursion for number "<<n<<" :- "<<f.factorial(n)<<endl;

}
