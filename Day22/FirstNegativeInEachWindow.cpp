#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void printFirstNegativeInteger(vector<int>& v, int n, int k)
{
    deque<int> Di;
    int i;
    for (i = 0; i < k; i++)
        if (v[i] < 0)
            Di.push_back(i);
    
    for (; i < n; i++)
    {
        // if Di is not empty then the element at front of the queue is the first negative integer
        // of previous window
        if (!Di.empty())
            cout << v[Di.front()] << " ";
        else
            cout << "0" << " ";
        
        // remmove the element which are out of this window
        while (!Di.empty() && Di.front() < (i - k + 1))
            Di.pop_front(); // remove from front
        
        if (v[i] < 0)
            Di.push_back(i);
    }

    // print 1st negative integer of last window
    if (!Di.empty())
        cout << v[Di.front()] << " ";
    else
        cout << "0";
    
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    printFirstNegativeInteger(v, n, k);

    return 0;
}