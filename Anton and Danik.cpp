#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string outcomes;
    cin >> outcomes;

    int anton_wins = 0, danik_wins = 0;
    for (char outcome : outcomes)
        {
        if (outcome == 'A')
         {
            anton_wins++;
        }
    else
        {
            danik_wins++;
        }
    }

    if (anton_wins > danik_wins)
        {
        cout << "Anton" << endl;
    }
    else if (danik_wins > anton_wins)
        {
        cout << "Danik" << endl;
    }
    else
        {
        cout << "Friendship" << endl;
    }

    return 0;
}
