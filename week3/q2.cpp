#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{
    int i,j,swaps=0,comparisons=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            comparisons++;
            if(arr[i]>arr[j]){
                swap(arr[j],arr[i]);
                swaps++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"    ";
    }
    cout<<endl<<"Swaps : "<<swaps<<endl<<"Comparisons : "<<comparisons;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
   
//   -21 -13 12 45 46 65 76 89
}
