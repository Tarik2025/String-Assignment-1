#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout << "enter the string:";
    getline(cin, s);
    
    int n = s.length();
    string p;
    for (int i = 1; i <= n; i++) // Corrected loop indexing
    {
        p.push_back(s[n - i]); // Corrected indexing here as well
    }   

    if (s == p)
        cout << "Entered string is a palindrome" << endl;
    else
        cout << "Entered string is not a palindrome" << endl;

    return 0;
}
