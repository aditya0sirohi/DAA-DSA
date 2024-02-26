#include<iostream>
#define m 10
using namespace std;

void linearsearch(int arr[],int n){
    int search_element,flag=1;
    cin>>search_element;
		for(int i=0;i<n;i++){
            if(arr[i]==search_element){
                cout<<"Present "<<++i<<endl;
                return;
            }
            flag++;
}
if(flag>=n)
cout<<"Not Present "<<n;
}

int main(){
	int c,n,search_ele,arr[m];
	cin>>c;
	while(c!=0){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		linearsearch(arr,n);
		c--;
	}
}
