#include<bits/stdc++.h>
using namespace std;

class person
{
public:
    string Name;
    int Age;

    void display1()

    {
        cout << "Name :" << Name << endl;
        cout << "Age :" << Age << endl;

    }
};

class student: public person
{
public:
    int ID;

    void display2()
    {
       cout << "ID :" << ID << endl;
       display1();
    }

};

int main()
{
    student s1;
    s1.ID = 50;
    s1.Name = "MD.Shojib Sheikh" ;
    s1.Age = 20;
    s1.display2();

}
