#include<bits/stdc++.h>
using namespace std;
void string_erase(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"In function:"<<s<<endl;
}
int main()
{
    string s;
    cin>>s;
    string_erase(s);
    cout<<"In main function"<<" "<<s;
    return 0;
}
