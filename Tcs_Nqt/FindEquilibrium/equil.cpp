#include<iostream>
using namespace std;
void findequil(int a[],int n){
        int l=0,r=0,t=0,idx=-1;
    for(int i=0;i<n;i++){
        t+=a[i];
    }
    for(int i=0;i<n;i++){
        r=t-l-a[i];
        if(l==r) {
            idx=i;
            break;
    }
    l+=a[i];
}
cout<<idx;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
findequil(a,n);
return 0;
}