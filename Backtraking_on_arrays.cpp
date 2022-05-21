#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
 for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
}




void fillarr(int arr[], int i, int n, int val)
{
    if (i == n)
    {
       print(arr,n);
       return;
    }

    arr[i] = val;

    fillarr(arr, i + 1, n, val + 1);

    arr[i] = -1 * arr[i];
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    fillarr(arr, 0, n, 1);
    print(arr,n);

    return 0;
}