#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

class calci{
    char op;
    int x,y;
public:
    calci(){x=0;y=0;}
    void result();
    void read();
    ~calci(){
        cout<<"Destructor called"<<endl;
    }
};
void calci :: read()
{
    cout << "Choose an arithmetic operator ( +, -, *, /, % )"<<endl;
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> x >> y;
}
void calci :: result()
{
   switch(op)
   {
       case '+': cout<<"sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
                break;
       case '-': cout<<"Difference of "<<x<<" and "<<y<<" is "<<x-y<<endl;
                break;
       case '*': cout<<"Product of "<<x<<" and "<<y<<" is "<<x*y<<endl;
                break;
       case '/': cout<<"division of "<<x<<" and "<<y<<" is "<<x/y<<endl;
                break;
       case '%': cout<<"modulus of "<<x<<" and "<<y<<" is "<<x%y<<endl;
   }
}

int main()
{
    string s="yes";
    calci obj;
    while(s!="no")
    {
        obj.read();
        obj.result();
        cout << "Would you like to perform another operation? (yes/no)"<<endl;
        cin>>s;
        if(s=="yes")
            system("cls") ;

    }
    return 0;
}
