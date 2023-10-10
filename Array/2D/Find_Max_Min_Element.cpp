/*
*	author 	: nxtsourav7
*	problem : Find Maximum and Minimum Element
*	created : 2023/10/05 09:48:46
*/
#include<bits/stdc++.h>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	// input row and column
	int row,col;
	cin >> row >> col;
	
	// input Array
	int array[row][col];
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			cin >> array[i][j];
		}
	}

	// find minimum and maximum
	int maximum = array[0][0];
	int minimum = array[0][0];
	int pos_max_row = 0 , pos_max_col = 0;
	int pos_min_row = 0, pos_min_col = 0;
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			// find minimum
			if(array[i][j] < minimum) {
				minimum = array[i][j];
				pos_min_row = i;
				pos_min_col = j;
			}
			// find maximum
			if(array[i][j] > maximum) {
				maximum = array[i][j];
				pos_max_row = i;
				pos_max_col = j;
			}

		}
	}
	
	// Print min and max with position
	cout << "Minimum : " << minimum << "\n";
	cout << "Position : [" << pos_min_row << " " << pos_min_col << "]\n";
	cout << "Maximum : " << maximum << "\n";
	cout << "Position : [" << pos_max_row << " " << pos_max_col << "]\n";
	
    return 0;
}
