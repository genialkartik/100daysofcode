// https://leetcode.com/problems/letter-combinations-of-a-phone-number/solution/

#include <iostream>
#include <vector>
using namespace std;

vector<string> ar;

// Top-down Recursive function to find all possible combinations by
// replacing key's digits with characters of the corresponding list
void findCombinations(vector<char> keypad[], int input[],
						string res, int index)
{
	// if we have processed every digit of key, print result
	if (index == -1) {
    ar.push_back(res);
		return;
	}

	// stores current digit
	int digit = input[index];

	// size of the list corresponding to current digit
	int len = keypad[digit].size();

	// one by one replace the digit with each character in the
	// corresponding list and recur for next digit
	for (int i = 0; i < len; i++) {
		findCombinations(keypad, input, keypad[digit][i] + res, index - 1);
	}
}

int main()
{
	// mobile keypad
	vector<char> keypad[] =
	{
		{}, {},		// 0 and 1 digit don't have any characters associated
		{ 'A', 'B', 'C' },
		{ 'D', 'E', 'F' },
		{ 'G', 'H', 'I' },
		{ 'J', 'K', 'L' },
		{ 'M', 'N', 'O' },
		{ 'P', 'Q', 'R', 'S'},
		{ 'T', 'U', 'V' },
		{ 'W', 'X', 'Y', 'Z'}
	};

	// input number in the form of an array (number can't start from 0 or 1)
	int input[] = { 2, 3 };
	int n = sizeof(input)/sizeof(input[0]);

	// find all combinations
	findCombinations(keypad, input, string(""), n - 1);
  for(vector<string>::iterator it =  ar.begin(); it!=ar.end(); it++){
    cout<<*it<<" ";
  }
	return 0;
}
