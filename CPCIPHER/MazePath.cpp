#include <iostream>
using namespace std;
 
int countMazePath(int endrow, int endcol, int curr_row, int curr_col, string move) {
	if(curr_row == endrow and curr_col == endcol) {
                cout<<move<<endl;
		return 1;
	}
	if(curr_row > endrow or curr_col > endcol) {
		return 0;
	}
	int hresult = countMazePath(endrow, endcol, curr_row, curr_col+1, move+"H-");
        int dresult = countMazePath(endrow, endcol, curr_row+1, curr_col+1, move+"D-");
	int vresult = countMazePath(endrow, endcol, curr_row+1, curr_col, move+"V-");
	int myresult = hresult + dresult +vresult;
	return myresult;
}
 
int main()
{
	cout<<countMazePath(2,2,0,0, "");
	return 0;
}
