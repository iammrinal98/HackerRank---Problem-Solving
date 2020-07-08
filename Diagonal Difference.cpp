#include<bits/stdc++.h>
using namespace std;
#define SIZE 100
int getsum(int mat[SIZE][SIZE],int n){
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            sum1=sum1+mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1)
            sum2=sum2+mat[i][j];
        }
    }
    return abs(sum2-sum1);

}
int main(){
    int n;
    cin>>n;
    int mat[SIZE][SIZE];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<getsum(mat,n)<<"\n";
    return 0;
}
