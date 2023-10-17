/*
*	author 	: nxtsourav7
*	problem : Union Set
*	created : 2023-09-21 09:27:40
*/
#include<bits/stdc++.h>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	// set A
	int m;
    cin >> m;
    int A[m];
    for(auto &x : A) {
        cin >> x;
	}

	// set B
    int n;
    cin >> n;
    int B[n];
    for(auto &x : B) {
        cin >> x;
    }

	// Union between set A & B
	int ans[m+n];
	for(int i=0 ; i<m ; ++i) ans[i] = A[i];
	int pos = m;
	for(int i=0 ; i<n ; ++i) {
		bool flag = false;
		
		for(int j=0 ; j<m ; ++j) {
			if(B[i] == A[j]) {
				flag = true;
				break;
			}
		}
		
		if(!flag) {
			ans[pos] = B[i];
			pos ++;
		}
	}
    

	// Print Set
	cout << "\nUnion Set : [ ";
	for(int i=0 ; i<pos ; ++i) {
		cout << ans[i] << " ";
	}
    cout << "]\n";


    return 0;
}
