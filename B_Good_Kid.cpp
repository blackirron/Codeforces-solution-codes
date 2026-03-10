#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        long long present = 1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            present *= arr[i];
        }
        int mn = *min_element(arr, arr + n);
        if(mn!=0){
            present = present * (mn + 1) / mn;
            cout << present << endl;
        } else{
            for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr[i]++;
                break;
            }
            }
            present = 1;
            for(int i=0;i<n;i++) present *= arr[i];
            cout << present << endl;
        }
    }
    return 0;
}
