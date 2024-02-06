/*
*	author 	: nxtsourav7
*	created : 2024-02-05 09:57:03
*/
#include<bits/stdc++.h>
using namespace std;


int Binomial_Coefficient(int n, int k) {
    if((k == 0) || (n == k)) {
        return 1;
    }
    else {
        return Binomial_Coefficient(n-1, k-1)
            + Binomial_Coefficient(n-1, k);
    }
}

int main(void) {
    int n,k;
    cin >> n >> k;

    // nCk 
    int nCk = Binomial_Coefficient(n, k);

    cout << nCk << "\n";
    
    return 0;
}