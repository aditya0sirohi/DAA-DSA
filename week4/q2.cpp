#include <iostream>
#include<vector>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
   
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(vector<int> &arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void print_bool(vector<int>&arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            cout<<"YES"<<endl;
            break;
        }
        else
            count++;
    }
    If(count==n)
        cout<<"NO"<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n/2-1;i>=0;i--){
       heapify(arr,n,i);
    }
    heapSort(arr, n);
   
    print_bool(arr,n);
    return 0;
}
