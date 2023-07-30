#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>0)
    {
        cout<<"x value is positive number  "<<endl;
        if(x%2==0)
        {
            cout<<"x value is even number"<<endl;
            if(x>999 & x>10000)
            {
                cout<<"x value contains digits 4 "<<endl;

            }
        }
    }
    return 0;
}













