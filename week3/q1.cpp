#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& arr, int n)
{
    int i,current,j,shifts=0,comparisons=0;
    for(i=1;i<n;i++){
        current=arr[i];
        shifts++;
        j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j=j-1;
            shifts++;
            comparisons++;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"    ";
    }
    cout<<endl<<"shifts : "<<shifts<<endl<<"Comparisons : "<<comparisons;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
   
    // -23 65 -31 76 46 89 45 32
    // 54 65 34 76 78 97 46 32 51 21
}
