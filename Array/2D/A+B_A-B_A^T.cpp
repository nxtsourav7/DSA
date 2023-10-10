/*
*	author 	: nxtsourav7
*	problem : A+B ; A-B ; A^T
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
	int A[row][col];
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			cin >> A[i][j];
		}
	}
	//input B Matrix
	int B[row][col];
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			cin >> B[i][j];
		}
	}
	
	cout << "\n";
	int ans[row][col];
	
	
	// A+B
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ;++j) {
			ans[i][j] = A[i][j] + B[i][j];
		}
	}
	// answer of A+B
	cout << "A+B : \n";
	for(int i=0 ; i<row ; ++i) {
		cout <<"| ";
		for(int j=0 ; j<col ; ++j) {
			cout << setw(3) << ans[i][j] << " ";
		}
		cout << "|\n";
	}
	cout << "\n";
	
	
	// A-B
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ;++j) {
			ans[i][j] = A[i][j] - B[i][j];
		}
	}
	// answer of A-B
	cout << "A-B : \n";
	for(int i=0 ; i<row ; ++i) {
		cout <<"| ";
		for(int j=0 ; j<col ; ++j) {
			cout << setw(3) << ans[i][j] << " ";
		}
		cout << "|\n";
	}
	cout << "\n";
	
	
	// Transpose of A
	int trans[col][row];
	for(int i=0 ; i<row ; ++i) {
		for(int j=0 ; j<col ; ++j) {
			trans[j][i] = A[i][j];
		}
	}
	// Output of Transpose
	cout << "Transpose of A : \n";
	for(int i=0 ; i<col ; ++i) {
		cout <<"| ";
		for(int j=0 ; j<row ; ++j) {
			cout << setw(3) << trans[i][j] << " ";
		}
		cout << "|\n";
	}
	cout << "\n";
	
	
    return 0;
}
