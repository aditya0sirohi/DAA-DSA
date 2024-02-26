
#include <iostream>

using namespace std;
vector<vector<int>> threesum(vector<int>& arr,int n){
    int k=n-1,i=0;
    int j=k-1;
    while(1){
        if(arr[i]+arr[j]>arr[k])
            j--;
        else if(arr[i]+arr[j]<arr[k])
            i++;
        else if(arr[i]+arr[j]==arr[k])
        
        return ;
        else
            k--;
            i=0;
            j=k-1;
    }
}
int main() {
    int count=0,n;
    vector<int>arr(n-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    threesum(arr,n);
    return 0;
}
