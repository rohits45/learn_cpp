//Efficient algorithm for Linear search
//iterative algorithm 
//time complexity worst case O(n)
//                 best case O(1)
#include<iostream>
using namespace std;

class search{
    public:
        bool linear_search(int a[],int size, int key){
            bool ans=false;
            for(int i=0;i<size;i++){
                //cout<<a[i]<<endl;
                if(a[i]==key){
                    ans=true;
                    break;    //For efficient algorithm break loops when you get desired output to save time
                }
                else
                    ans=false;
            }
            return ans;
        }
};
int main(){
    int a[10]={420,464,654,651,631,262,684,165,216,845};
    int n=sizeof(a)/sizeof(int); // To find size of array
    
    search s;

    int key=464;

    if (s.linear_search(a,n,key))
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    
    return 0;
}
