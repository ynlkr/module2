#include<iostream>
using namespace std;
 
int main() {
    int n, count = 0;
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] < 0){
            count++;
        }
    }
    if(count == 0){
        cout << "NO";
    } else {
        cout << count << endl;
        for (int c = n - 1; c >= 0; c--){
            if (arr[c] < 0){
                cout << arr[c] << " "; 
            }
        }
    }
    return 0;
}