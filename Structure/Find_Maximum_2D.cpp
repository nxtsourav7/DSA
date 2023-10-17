/*
*	author 	: nxtsourav7
*	problem : Find Maximum Element From 2D Array (structure)
*	created : 2023/10/05 09:48:46
*/
#include<bits/stdc++.h>
using namespace std;

//int a[100][100];

struct output{
    int value;
    int position_column;
    int position_row;
};


output mx (int a[][7],int row , int col ) {
    int maximum = a[0][0];
	int pos_max_row = 0 , pos_max_col = 0;
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			// find maximum
			if(a[i][j] > maximum) {
				maximum = a[i][j];
				pos_max_row = i;
				pos_max_col = j;
			}
		}
	}


    output x;
    x.value = maximum;
    x.position_row = pos_max_row;
    x.position_column = pos_max_col;

    return x;
}



int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	// input row and column
	int row,col;
	cin >> row >> col;
	
	// input Array
	int a[row][col];
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			cin >> a[i][j];
		}
	}
    output x = mx(a,row , col);
	
	// Print min and max with position
	// cout << "Minimum : " << minimum << "\n";
	// cout << "Position : [" << pos_min_row << " " << pos_min_col << "]\n";
	cout << "Maximum : " << x.value << "\n";
	cout << "Position : [" << x.position_row << " " << x.position_column << "]\n";
	
    return 0;
}
