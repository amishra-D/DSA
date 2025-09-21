#include <iostream>
#include<vector>
using namespace std;
vector<int> removedup(vector<int>&v){
    int n=v.size();
    int idx=0;
    for(int i=0;i<n;i++){
        if(v[i]!=v[i+1]){
          v[idx++]=v[i];
        }
    }
    for(int i=idx;i<n;i++) v[i]=-1;
    return v;
    }
int main()
{  
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>d=removedup(v);
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<',';
    }
}