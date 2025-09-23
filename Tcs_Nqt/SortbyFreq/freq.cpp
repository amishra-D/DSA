#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
static bool compare(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second)
    return a.first<b.first;
    return a.second>b.second;
}
void sbf(int a[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    vector<pair<int,int>>v;
    for(auto p:m){
     v.push_back({p.first,p.second});
    }
    sort(v.begin(),v.end(),compare);
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].second; j++) {
            cout << v[i].first << " ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sbf(a,n);
return 0;
}