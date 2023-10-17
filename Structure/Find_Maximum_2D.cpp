/*
*	author 	: nxtsourav7
*	problem : Find Maximum Element From 2D Array (structure)
*	created : 2023/10/05 09:48:46
*/
#include<bits/stdc++.h>
using namespace std;

int a[100][100];

struct number{
    int value;
	int position_row;
    int position_column;
};


number maximum_number(int row , int col ) {
	number maximum;
    maximum.value = a[0][0];
	maximum.position_row = 0 , maximum.position_column = 0;
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			// find maximum
			if(a[i][j] > maximum.value) {
				maximum.value = a[i][j];
				maximum.position_row = i;
				maximum.position_column = j;
			}
		}
	}

    return maximum;
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
    number maximum = maximum_number(row , col);
	
	// Print Maximum with position
	cout << "Maximum : " << maximum.value << "\n";
	cout << "Position : [" << maximum.position_row << " " << maximum.position_column << "]\n";
	
    return 0;
}
