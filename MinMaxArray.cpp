//Efficient algorithms for finding min and max
// using Iterative Algorithm 
//Time complexity is O(n-1)
#include<iostream>
using namespace std;

class min_max{

    public:
        int min(int arr[], int size){
            int m = arr[0];         //Stores first element of array in min and max value to compare with another elements of array 
            for(int i=1;i<size;i++){
                if(m>arr[i])
                    m=arr[i];
            }
            return m;
        }

        int max(int arr[], int size){
            int m = arr[0];         //Stores first element of array in min and max value to compare with another elements of array 
            for(int i=1;i<size;i++){
                if(m<arr[i])
                    m=arr[i];
            }
            return m;
        }

        
};

int main(){
    int a[10]={420,464,654,651,631,216,684,165,216,845};
    
    int n=sizeof(a)/sizeof(int); // To find size of array

    min_max f;

    cout<<"\nMIN :- "<<f.min(a,n)<<"\nMAX:- "<<f.max(a,n)<<endl;
    
    return 0;
}
