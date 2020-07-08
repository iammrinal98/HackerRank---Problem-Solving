#include<bits/stdc++.h>
using namespace std;
void getstaircase(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
           cout<<" ";
        }
    int count=i+1;
    for(int j=0;j<count;j++){
        cout<<"#";
    }
    cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    getstaircase(n);
}