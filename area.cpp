#include<iostream>
#define PI 3.142

using namespace std;
float area(float r)
{
    return PI*r*r;
}
int area(int l,int b)
{
    return l*b;
}

int main()
{
    string shape;
    cout<< "Choose shape: "<<endl;
    cin>>shape;
    if(shape=="circle")
    {
        float rad,ans;
        cout<< "Enter radius: "<<endl;
        cin>>rad;
        ans=area(rad);
        cout<<"Area of the circle is "<<ans;
        cout<<" sq units."<<endl;
    }
    else if(shape=="triangle")
    {
        int b,h;
        float ans;
        cout<< "Enter base and height: "<<endl;
        cin>>b;
        cin>>h;
        ans=area(b,h)/2.0;
        cout<<"Area of the triangle is "<<ans;
        cout<<" sq units."<<endl;
    }
    else if(shape=="rectangle")
    {
        int l,b,ans;
        cout<< "Enter length and breadth: "<<endl;
        cin>>l;
        cin>>b;
        ans=area(l,b);
        cout<<"Area of rectangle is "<<ans;
        cout<<" sq units."<<endl;
    }
    return 0;
}
