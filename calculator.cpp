#include<bits\stdc++.h>
using namespace std;

int main(){
    int a,b,choice;
    cout<<"SIMPLE CALCULATOR"<<endl;
    cout<<"Enter two integer numbers: ";
    cin>>a;
    cin>>b;
    
    choice=0;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo Division"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice>5){
        cout<<"INVALID CHOICE"<<"\n";
        return 1;
    }  

    switch (choice)
    {
    case 1 :  cout<<a + b<<endl;
        break;
    case 2 :  cout<<a-b<<endl;
        break; 
    case 3 :  cout<<a*b;
        break;       
    case 4 :  if(b!=0){
                  cout<<a/b<<endl;
              } else{
                  cout<<"ERROR"<<endl;
              }
        break;
    case 5 :  cout<<a%b<<endl;
        break;    
    default:
        break;
    }
    
    return 0;
}