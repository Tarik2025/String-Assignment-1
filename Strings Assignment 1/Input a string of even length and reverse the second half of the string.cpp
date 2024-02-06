#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"enter the string:";
    getline(cin,s);
    int n=s.length();
    reverse(s.begin()+(n/2),s.end());
    cout<<"Number of consonants in the given string is :"<<s<<endl;
    return 0;
}
