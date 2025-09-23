#include<iostream>
using namespace std;
void findpall(int n1,int n2){
    int nd=n2-n1,idx=0;
    int arr[nd];
    for(int i=n1;i<n2;i++){
        int n=0;
        int temp=i;
        int d=i;
        while(temp>0){
        int nno=temp%10;
        temp=temp/10;
        n=n*10+nno;
        }
        if(n==d) arr[idx++]=n;
    }
    for(int i=0;i<idx;i++){
        cout<<arr[i]<<' ';
    }
}
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    findpall(n1,n2);
}