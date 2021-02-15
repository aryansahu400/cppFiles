#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows and columbs of the first matix: ";
    cin>>r1>>c1;
    cout<<"Enter the number od rows and columbs of the second matrix: ";
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"Matrix can not be multiplied";
        return 0;
    }
    int a[r1][c1], b[r2][c2];
    cout<<"Enter the elements of the first matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>b[i][j];
        }
    }
    //multiplication algo
    int mul[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            mul[i][j]=0;
            for(int k=0;k<c2;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    // for displaying
    cout<<"The multiplication gives: "<<endl;
    for(auto& x:mul){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}