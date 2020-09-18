// Manish has got the task to frame a speech for his professor at the university at the Annual sports meet.But the problem is that
// the professor has speech dyslexia and he can't speak the words clearly which have vowels in them. So Manish has to avoid such words
//  and has to minimise their usage in the speech letter. Your task is to help Manish mark the vowels in the words so that he can minimise their use.
//  You are given a string S consisting of lower case letters only. You need to count the number of vowels in the string S.
//
// INPUT The first line will contain an integer T denoting the number of test cases. The following T lines will contain a string S in lower case letters only.
//
// OUTPUT Print the number the vowels in the string S.
//
// CONSTRAINTS 1<=T<=100


#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	while(num>0){
		string str;
		cin>>str;
		map<char, int> vowels;
		int i = str.length() - 1;
		while(i >= 0){
			vowels[str[i]]++;
			i--;
		}
		int count = vowels.find('a')->second+vowels.find('e')->second+vowels.find('i')->second+vowels.find('o')->second+vowels.find('u')->second;
		cout<<count;
		num--;
	}
}
