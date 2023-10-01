#include<bits/stdc++.h>
using namespace std;

class vehicle
{
public:

    int wheels;
    int Range;
    int passenger;
    void display1()
    {
        cout<<"wheels:"<<wheels<<endl;
        cout<<"Range:"<<Range<<endl;
        cout<<"passenger:"<<passenger<<endl;

    }

};
class Track:public vehicle
    {
    public:

    int wheels;
    int Range;
    int passenger;
    int load;
    void display2()
    {
        cout<<"wheels:"<<wheels<<endl;
        cout<<"Range:"<<Range<<endl;
        cout<<"load:"<<load<<endl;

    }

    };
int main()
{
    vehicle v1;
    Track t1;
    v1.wheels=4;
    v1.Range=500;
    v1.passenger=5;
    v1.display1();
    t1.wheels=12;
    t1.Range=1200;
    t1.load=3000;
    t1.display2();


}
