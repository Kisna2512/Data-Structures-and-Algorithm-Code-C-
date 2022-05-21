#include <bits/stdc++.h>
using namespace std;

void bsort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
         
        }
    }
}


int main(){
 int n;
	cout<<"Enter the size of an array:- "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in array:- "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    bsort(arr,n);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
return 0;

}