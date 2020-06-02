#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class number{
    string s;
public:
    number();
    void count();
};

number :: number()
{
    cout << "String: ";
    getline(cin,s);
}

void number:: count()
{
    int i,v=0,c=0;
    for(i=0;i<s.size();i++)
    {
     if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'
        ||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            v++;
     else if(!(isspace(s[i])))
        c++;
    }
    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;
}
int main()
{
    number obj;
    obj.count();
    return 0;
}
