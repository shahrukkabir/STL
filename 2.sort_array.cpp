/* 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3, 5, 1, 2, 4};

    // Sort the array in ascending order 
    sort(begin(arr), end(arr));

    // Print the sorted array 
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/



// sort() in STL.


#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr + n);

    cout << "Number of elements in the array: " << n << endl;
    cout << "Array after sorting using default sort is : \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// Output:
// Number of elements in the array: 10
// Array after sorting using default sort is : 
// 0 1 2 3 4 5 6 7 8 9