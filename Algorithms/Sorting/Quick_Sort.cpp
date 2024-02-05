/*
*	author 	: nxtsourav7
*	problem : Quick Sort
*	created : 2023-11-13 20:42:04
*/
#include<bits/stdc++.h>
using namespace std;


int Partition(int array[], int left , int right) {
	int pivot = array[right];

    int i = (left-1);
    for(int j=left ; j<=right ; ++j) {
        if(array[j]<pivot) {
            i++;
            swap(array[i],array[j]);
        }
    }
    swap(array[i+1],array[right]);
    return i+1;
}
void Quick_Sort(int array[], int left, int right) {
	if(left<right) {
		int pi = Partition(array , left , right);
	
		Quick_Sort(array, left, pi-1);
		Quick_Sort(array, pi+1, right);
	}
	
}


//sorted Array Print !!!
void print(int array[], int n) {
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

    Quick_Sort(array ,0, n-1);

    cout << "Sorted Array : ";
    print(array , n);


    return 0;
}
