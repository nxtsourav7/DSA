#include<bits/stdc++.h>
using namespace std;

//Driver Code
void Selection_Sort(int array[] , int n) {
    for(int i=0 ; i<n ; i++) {
        for(int j=i+1 ; j<n ; j++) {
            if(array[i] > array[j]) {
                swap(array[i] , array[j]);
            }
        }
    }
}

//sorted Array Print !!!
void print(int array[] , int n) {
    for(int i=0 ; i<n ; i++) {
        cout << array[i] << " ";
    }
    cout << '\n';
}


int main() {
    int n;cin >> n;

    int array[n];
    for(auto &a : array) cin >> a;

    Selection_Sort(array , n);

    cout << "Sorted Array : \n";
    print(array , n);


    return 0;
}