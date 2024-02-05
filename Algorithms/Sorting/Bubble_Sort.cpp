/*
*	author 	: nxtsourav7
*	problem : Bubble Sort
*	created : 2023/10/05 09:48:46
*/
#include<bits/stdc++.h>
using namespace std;


void Bubble_Sort(int array[] , int n) {
    for(int i=0 ; i<n-1 ; i++) {

        bool flag = false;

        for(int j=0 ; j<n-i-1 ; j++) {
            if(array[j]>array[j+1]) {
                swap(array[j] , array[j+1]);
                flag = true;
            }
        }

        if (!flag) break;
    }
}

//sorted Array Print !!!
void print(int array[] , int n) {
    for(int i=0 ; i<n ; i++) {
        cout << array[i] << " ";
    }
    cout << '\n';
}

//Driver Code !!
int main() {
    int n;cin >> n;

    int array[n];
    for(auto &a : array) cin >> a;

    Bubble_Sort(array , n);

    cout << "Sorted Array : \n";
    print(array , n);


    return 0;
}
