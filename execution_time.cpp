//program for Measure execution time of a function  
#include<iostream>
#include<chrono>
using namespace std;
//using namespace std::chrono; 
int main()
 {  
     auto start_time = std::chrono::high_resolution_clock::now();
    //put your code here





    //till here 
     auto end_time =  std::chrono::high_resolution_clock::now();
     auto t=  std::chrono::duration_cast<std::chrono::microseconds>(end_time-start_time);
     cout<<"\n"<<t.count();
     return 0;
 }