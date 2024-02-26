
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, key, count = 0;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> key;

    
    auto x = lower_bound(arr, arr + n, key);
    auto y = upper_bound(arr, arr + n, key);

    if (x == arr + n && y == arr + n)
        cout << "Key is not present ";
    else {
        count = y - x;
        cout << key<<" count is "<< " - " << count;
    }

    return 0;
}
