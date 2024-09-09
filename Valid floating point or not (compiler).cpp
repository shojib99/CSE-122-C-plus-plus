#include<bits/stdc++.h>

using namespace std;
 bool isValid(const string &s)
 {
     regex valid(R"(^[0-9]\.[0-9]$|^\.\d+$)");
     return regex_match(s,valid);
 }
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(isValid(s))
        {
            cout<<"Valid"<<endl;

        }else{
        cout<<"Invalid"<<endl;
        }
    }
}
