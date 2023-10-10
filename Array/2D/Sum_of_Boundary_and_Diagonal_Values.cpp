/*
*	author 	: nxtsourav7
*	problem : Sum of Boundary and Diagonal Values
*	created : 2023/10/10 08:22:07
*/
#include<bits/stdc++.h>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	

	//input matrix size;
	int n;
	cin >> n;
	int matrix[n][n];
	for(int i=0 ; i<n ; ++i) {
		for(int j=0 ; j<n ; ++j) {
			cin >> matrix[i][j];
		}
	}
	
	// Claculate Sum of Boundary
	int sum_of_boundary = 0;
	for(int i=0 ; i<n ; ++i) {
		for(int j=0 ; j<n ; j++) {
			if(i==0 || j==0 || i==n-1 || j==n-1) {
				sum_of_boundary += matrix[i][j];
			}
		}
	}
	cout << "Sum of Boundary Values : " << sum_of_boundary << "\n";
	
	// Calculate Sum of Diagonal
	int sum_of_diagonal = 0;
	for(int i=0 ; i<n ; ++i) {
		for(int j=0 ; j<n ; j++) {
			if(i==j || j==n-1-i) {
				sum_of_diagonal += matrix[i][j];
			}
		}
	}
	cout << "Sum of Diagonal Values : " << sum_of_diagonal << "\n";
	
	
    return 0;
}

