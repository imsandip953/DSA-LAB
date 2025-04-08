#include<bits/stdc++.h>
using namespace std;
float avg(int n, int arr[]){
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    float res = sum / n;
    return res;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    float sum = avg(n, arr);
    cout << sum;

}
