#include<iostream>
#include<map>
using namespace std;
void symmetricpairs(int arr[][2],int n){
    map<pair<int,int>,int>m;
    for(int i=0;i<n;i++){
         pair<int,int> p = {arr[i][0], arr[i][1]};
        pair<int,int> rev = {arr[i][1], arr[i][0]};
        if(m.find(rev)!=m.end()){
            cout<<'('<<p.first<<','<<p.second<<')'<<'('<<rev.first<<','<<rev.second<<')'<<endl;
            m.erase(rev);
        }
        else
m[p]++;
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    symmetricpairs(arr,n);
    return 0;
}
