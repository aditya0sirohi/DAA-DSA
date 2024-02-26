#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int high, int mid) {
    vector<int> temp(high - low + 1);
    int left = low;
    int right = mid + 1;
    int i = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[i++] = arr[left++];
        } else {
            temp[i++] = arr[right++];
        }
    }
    while (left <= mid) {
        temp[i++] = arr[left++];
    }
    while (right <= high) {
        temp[i++] = arr[right++];
    }
    for (int j = low; j <= high; j++) {
        arr[j] = temp[j - low];
    }
}

void merge_sort(vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, high, mid);
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    int flag=0;
    for (int i = 0; i < n; i++) {
        if(arr[i]==arr[i+1]){
            flag++;
            break;
        }
    }
    if(flag){
        cout<<"true";
    }
    else {
        cout<<"FALSE";
    }
    cout << endl;
    return 0;
}
