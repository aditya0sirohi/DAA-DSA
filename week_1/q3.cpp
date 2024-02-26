// Online C++ compiler to run C++ program online
#include <iostream>
#define m 10
using namespace std;

void linearsearch(int arr[],int start,int end,int key,int n){
    int i,c=0;
    for(i=start;i<end;i++){
        if(arr[i]==key){
            cout<<"Found At "<<i+1;
            break;
        }
        else
            c++;
    }
    if(c==n)
        cout<<"Not Found "<<c;
} 
void present(int arr[],int key,int n){
    if(arr[0]==key)
        cout<<"Found At 0";
    int i=1;
    while(i<n && arr[i]<=key){
        i=i*2;
    }
    linearsearch(arr,i/2,min(n-1,i),key,n); 
}

int main() {
    int arr[m],key,i,n;
    cout<<"Array Size & Key ";
    cin>>n>>key;
    cout<<"Elements";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    present(arr,key,n);
    return 0;
}
