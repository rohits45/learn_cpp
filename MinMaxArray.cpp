//Efficient algorithms for finding min and max
//Time complexity is O(n-1)
#include<iostream>
using namespace std;

int main(){
    int a[10]={420,464,654,651,631,216,684,165,216,845};
    
    int n=sizeof(a)/sizeof(int); // To find size of array
    
    int min,max;
    min=max=a[0];    //Stores first element of array in min and max value to compare with another elements of array 

    // using Iterative Algorithm 

    for(int i=1;i<n;i++){
        if(min>a[i])
            min=a[i];
    }

    for(int i=1;i<n;i++){
        if(max<a[i])
            max=a[i];
    }

    cout<<"\nMIN :- "<<min<<"\nMAX:- "<<max<<endl;
    
    return 0;
}