#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void repeating(int v[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    for(auto &pair:m){
        if(pair.second>1) cout<<pair.first<<',';
    }
}
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    repeating(v,n);
    return 0;
}