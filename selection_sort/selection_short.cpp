#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        // for (int j = i+1; j > n; j++) // descending order
        for (int j = i+1; j < n; j++) // ascending order
        {
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}