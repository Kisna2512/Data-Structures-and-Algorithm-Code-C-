#include <bits/stdc++.h>
using namespace std;

void clearbit(int &n,int i){
    int mask=~(1<<i);
 n=n&mask;
}



int main(){

int n=13;
int i;
cin>>i;
clearbit(n,i);
cout<<"After clearing the bit the value of n is:- "<<n<<endl;


return 0;

}