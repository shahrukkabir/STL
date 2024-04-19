
/* #include<bits/stdc++.h>
using namespace std;

int main() {

    // Creating a map with string keys and integer values

    map<string, int> myMap;

    // Inserting elements into the map
    myMap["apple"] = 5;
    myMap["banana"] = 3;
    myMap["orange"] = 7;

    // Accessing elements in the map
    cout << "Number of apples: " << myMap["apple"] << endl;
    cout << "Number of bananas: " << myMap["banana"] << endl;
    cout << "Number of oranges: " << myMap["orange"] << endl;

    return 0;
} */





#include<bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v = {1, 2, 3, 4, 2, 3, 1, 3, 4, 5};

    // Create a map to store the frequency of elements
    map<int, int> freqMap;

    // Iterate through the vector and update the frequency map
    for (auto num : v) {
        freqMap[num]++;
    }

    // Print the frequency of each element
    for (auto pair : freqMap) {
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
    }

    return 0;
}
 
/* 
  Output: 
  
  Element: 1, Frequency: 2
  Element: 2, Frequency: 2
  Element: 3, Frequency: 3
  Element: 4, Frequency: 2
  Element: 5, Frequency: 1

*/


/*

map vs unordered_map : 

map : increasing ordering of keys (by default)
unordered_map: no ordering
map search time : log(n)
unordered_map : o(1)->Average , o(n)->worst case










 */