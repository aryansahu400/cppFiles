#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int x, y, z;
    cin>>x>>y>>z;
    bool triplet=false;
    if(x>y && x>z)
    {
        if(((x*x)==(y*y)+(z*z)))
        {
            triplet=true;
        }
    }
    if(y>x && y>z)
    {
        if((y*y)==(x*x)+(z*z))
        {
            triplet=true;
        }
    }else{
        if((z*z)==(x*x)+(y*y))
        {
            triplet=true;
        }
    }
    if(triplet){
        cout<<"The given set is a Pythagorian Triplet";
    }else{
        
        cout<<"The given set is not a Pythagorian Triplet";
    }
    
    return 0;
}