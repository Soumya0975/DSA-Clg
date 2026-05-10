#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input size of array
    cin >> n;

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Element to search
    cin >> key;

    // Linear Search
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}


