//simple calculator using CPP for +-*/
#include<iostream>
using namespace std;


int main()
{   
    int a,b;
    char ch='y',op;
    cout<<"**** welcome to cpp calcultor **** \n **you can perform** \nAddition    subtraction    multiplication    divide\n";
 
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter two Oprands:\n";
        cin>>a>>b;
        cout<<"\nEnter Oprator: ";
        cin>>op;
    switch(op)
    {

    case '+' :
        cout<<"Ans=: "<<a+b;
        
        cout<<"\nEnter Y or y to Continue: ";
        cin>>ch;
    break;

    case '-' :
        cout<<"Ans=: "<<a-b;
        
        cout<<"\nEnter Y or y to Continue: ";
        cin>>ch;
    break;
    
    case '*' :
        cout<<"Ans=: "<<a*b;
        
        cout<<"\nEnter Y or y to Continue: ";
        cin>>ch;
    break;

    case '/' :
        if(b==0)
        {
            cerr<<"\n****Divide by 0 error****\n";
            continue;
        }
        float c;
        c=float(a)/b;
        cout<<"Floating point Ans=: "<<c;
        cout<<"\nDivison=: "<<a/b;
        cout<<"\tRemainder=: "<<a%b;
        cout<<"\nEnter Y or y to Continue: ";
        cin>>ch;
    break;

    default:
        cerr<<"Wrong Choice";
        
        cout<<"\nEnter Y or y to Continue: ";
        cin>>ch;
        exit(0);
    break;

    }
    }
    return 0;
}
