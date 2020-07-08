#include<bits/stdc++.h>
using namespace std;
void getplusminus(int arr[],int n){
    float count=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        count++;
        else if(arr[i]>0)
        count1++;
        else
        count2++;
    }
    cout<<setprecision(6)<<count1/n<<"\n";
    cout<<setprecision(6)<<count/n<<"\n";
    cout<<setprecision(6)<<count2/n<<"\n";
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getplusminus(arr,n);
    return 0;
}