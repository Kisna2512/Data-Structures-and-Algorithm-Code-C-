#include <iostream>
using namespace std;


int binary_search(int arr[],int n,int key){

   int s=0;
   int e=n-1;
   while(s<=e){
       int mid=(s+e)/2;
       if(arr[mid]==key){
           return mid;
       }
       else if(arr[mid]>key){
           e=mid-1;
       }
       else{
           s=mid+1;
       }
   }
   return -1;

}
int main() {
	// your code goes here
	int n;
	cout<<"Enter the size of an array:- "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in array:- "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the key you want to find:- "<<endl;
	cin>>key;
	int idx=binary_search(arr,n,key);
	if(idx!=-1){
		cout<<"Your key is prsent at index:-"<<idx<<endl;
	}
	else{
		cout<<"your key is not found...."<<endl;
	}

	return 0;
}
