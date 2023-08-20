#include <bits/stdc++.h>
using namespace std;

class watermelon{

public:
    void disply (int n)
    {
        if(n%2==0 && n>2)
        {
            cout<< "YES";
        }
        else
        {
           cout<< "NO";
        }
    }

};

int main()
{
    int n;
    cin>> n;
    watermelon ob1;
    ob1.disply(n);
}
