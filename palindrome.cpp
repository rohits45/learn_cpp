#include<iostream>
using namespace std;

class str{
    public:
        bool check_palin(string a){
            int b = a.length();
            bool ans=true;
            for(int i=0,j=b-1; i<j ;i++,j--){
                //cout<<a[i]<<"  "<<a[j]<<endl;
                if(a[i]!=a[j]){
                    ans=false;
                    break;
                }
            }
            return ans;
        }
};

int main(){
    str s;
    string a="rohittihor";
    if (s.check_palin(a))
        cout<<"Word is palindrome";
    else
        cout<<"Not paliondrome";
}