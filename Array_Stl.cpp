//STL in Array
#include<iostream>
#include<array>
using namespace std;

int SizeofArray=0;
array<int, 9> arr1 = {2,4,42,12,41,53};
array<int, 9> arr2 = {4,56,7,76,3,57,8,78,23};

int main()
{
    //SizeofArray = sizeof(arr1)/sizeof(*arr1); // size of arr1 is size of memory it takes divided by memory size of type 
    //cout<<"\nsize of array: "<<SizeofArray<<"\n";


    cout<<"\nsize of array: "<<arr1.size()<<"\n"; //to get size of array
    cout<<"memory size of array: "<<sizeof(arr1)<<"\n"; //to get memory size in bit
    
    cout<<"Front :- "<<arr1.front()<<endl; // to get first element
    cout<<"Back :- "<<arr1.back()<<endl; // to get last element

    cout<<"Data :- "<<arr1.data()<<endl; // to get first memory location

    cout<<"element at 2nd location :- "<<arr1.at(2-1)<<endl; // to get element at 2nd location

    cout<<"is it empty array :- "<<boolalpha<<arr1.empty()<<endl;

    cout<<"\nPrint array1"<<endl;
    for(int i=0;i<arr1.size();i++) //Print array1
        cout<<arr1[i]<<" ";
    cout<<endl;

    arr1.fill(2);// to fill one value in all location

    cout<<"\nPrint array1 after fill opration"<<endl;
    for(int i=0;i<arr1.size();i++) //Print array1 after fill opration 
        cout<<arr1[i]<<" ";
    cout<<endl;

    arr1.swap(arr2); //to swap arr1 with arr2;

    cout<<"\nPrint array1 after swap opration "<<endl;
    for(int i=0;i<arr1.size();i++) //Print array1 after swap opration 
        cout<<arr1[i]<<" ";
    cout<<endl; 

    cout<<"\nPrint array2 after swap opration  "<<endl;
    for(int i=0;i<arr2.size();i++) //Print array2 after swap opration 
        cout<<arr2[i]<<" ";
    return 0;

}