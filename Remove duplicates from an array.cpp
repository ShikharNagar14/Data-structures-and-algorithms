#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
	int res=1;
	for(int i=1;i<n;i++){
		if(arr[res-1]!=arr[i])
		{  
			arr[res]=arr[i];
			 res++;
		
		}
	}
	for(int i=0;i<res;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main(){
	int arr[]={1,2,3,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,n);

