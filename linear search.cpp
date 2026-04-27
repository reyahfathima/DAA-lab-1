#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5, key = 6;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i;
            return 0;
        }
    }
    cout << "Element not found";
}