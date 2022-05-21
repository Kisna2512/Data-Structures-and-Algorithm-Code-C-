#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt=0;
    while(n>0){
        n=n&(n-1);
        cnt++;
    }
    return cnt;
}


int main(){


int n;
cin>>n;
cout<<"The no of set bits:- "<<count(n);
return 0;

}