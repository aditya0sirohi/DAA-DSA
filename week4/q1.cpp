// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#define max 1
using namespace std;

void merge(vector<int>&arr,int low,int mid,int high,int comp[]){
    int left=low;
    int right=mid+1;
    int i=0;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
            comp[0]++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
            comp[0]++;
        }
        i++;
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
        i++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
        i++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void merge_sort(vector<int>& arr,int low,int high,int comp[]){
    if(low>=high){ return  ;}
    int mid=low+(high-low)/2;
    merge_sort(arr,low,mid,comp);
    merge_sort(arr,mid+1,high,comp);
    merge(arr,low,mid,high,comp);
}

int main() {
    int n,comp[max];
    comp[0]=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1,comp);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"Comparisons - "<<comp[0];
    return 0;
}
