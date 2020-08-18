// https://leetcode.com/problems/letter-combinations-of-a-phone-number/solution/

#include <bits/stdc++.h>
using namespace std; 

vector<int> ans;

void combination(vector<char> ph[], int n, string res){
  int index = n%10;
	if (index == -1) {
		cout << res << " ";
		return;
	}
	int len = ph[index].size();
	for (int i = 0; i < len; i++) {
		combination(ph, n/10, ph[index][i] + res);
	}
}

int main()
{
  vector<char> ph[] = {
    {},
    {},
    {'a', 'b', 'c'},
    {'d', 'e', 'f'},
    {'g', 'h', 'i'},
    {'j', 'k', 'l'},
    {'m', 'n', 'o'},
    {'p', 'q', 'r', 's'},
    {'t', 'u', 'v'},
    {'w', 'x', 'y', 'z'}
  };
  int n;
  cin>>n;
  vector<int> res;
  combination(ph, n, "");

  return 0;
}

