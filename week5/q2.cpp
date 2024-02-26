#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<int, int> mp;
    int n, k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mp[arr[i]] = i; 
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(mp.find(k - arr[i]) != mp.end() && mp[k - arr[i]] != i) {
            cout<< i << " - " << mp[k - arr[i]] << endl;
            flag=1;
        }
        else{
            mp[arr[i]]=i;
        }
    }
    if(flag){
        cout<<"Not present";
    }
    return 0;
    
}
