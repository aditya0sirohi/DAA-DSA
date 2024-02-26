#include<iostream>
#define m 10
using namespace std;
void Binary_search(int arr,int n,int key){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(low<=high){
        if(arr[mid]==key){
            cout<<"Present "<<mid;
            break;
        }
        else if(key>arr[mid])
            low=mid+1;
        else if(key<arr[mid])
            high=mid-1;
        else{
            cout<<"Not Present "
            break;
        }
        int mid=low+(high-low)/2;
    }
}

int main(){
    int c,n,key,arr[m];
	cin>>c;
	while(c!=0){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cin>>key
		Binary_search(arr,n,key);
		c--;
	}
}
