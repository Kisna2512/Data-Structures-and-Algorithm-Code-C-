#include <bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n)
{
    int large = -1;
    for (int i = 0; i < n; i++)
    {
        large = max(large, arr[i]);
    }

    vector<int> freq(large + 1, 0);

    for (int i = 0; i < large; i++)
    {
        freq[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i <=large; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{    int n;
    cout << "Enter the size of an array:- " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    count_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}