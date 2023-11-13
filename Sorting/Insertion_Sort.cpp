/*
*	author 	: nxtsourav7
*	problem : Insertion Sort
*	created : 2023-11-13 19:08:54
*/
#include<bits/stdc++.h>
using namespace std;


void Insertion_Sort(int array[] , int n) {
    for(int j=1 ; j<n ; ++j) {

        int key_value = array[j];
        int i = j-1;
       
        while(i>=0 && array[i] > key_value) {
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key_value;
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

    Insertion_Sort(array , n);

    cout << "Sorted Array : \n";
    print(array , n);


    return 0;
}
