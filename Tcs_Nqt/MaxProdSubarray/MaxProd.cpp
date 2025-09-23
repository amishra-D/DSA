#include<iostream>
#include<climits>
using namespace std;
int maxprod(int arr[],int n){
    int prev_max=arr[0];
    int global_max=arr[0];
    int prev_min=arr[0];
    for(int i=0;i<n;i++){
    int temp_max = max(arr[i], max(prev_max * arr[i], prev_min * arr[i]));
    int temp_min = min(arr[i], min(prev_max * arr[i], prev_min * arr[i]));
    prev_max=temp_max;
    prev_min=temp_min;
    global_max = max(global_max, prev_max);
    }
    cout<<global_max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxprod(arr,n);
    return 0;
}