	//Rank problem//
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
void allotranks(int arr[],int n){
unordered_map<int,int>m;
int dum[n];
for(int i=0;i<n;i++){
	dum[i]=arr[i];
}
sort(dum,dum+n);
for(int i=0;i<n;i++){
	m[dum[i]]=i+1;
}
for(int i=0;i<n;i++){
	arr[i]=m[arr[i]];
}
for(int i=0;i<n;i++){
	cout<<arr[i]<<' ';
}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
allotranks(arr,n);
return 0;
}