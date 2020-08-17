#include <bits/stdc++.h>
using namespace std; 

int fab(int base, int powerRaised)
{
    if (powerRaised != 0){
    cout<<base<<" "<<powerRaised<<endl;
        return (base*fab(base, powerRaised-1));
    }
    else
        return 1;
}

int main()
{
    int base, powerRaised, result;
    cin >> base;
    cin >> powerRaised;

    result = fab(base, powerRaised);
    cout<<result;

    return 0;
}

