#include <bits/stdc++.h>
using namespace std;

int main(){

char str[100];

char temp=cin.get();

int l=1;

while(temp!='\n'){
    cout<<temp;
    temp=cin.get();
     l++;
}
cout<<endl<<"Length:- "<<l<<"\n";
return 0;

}