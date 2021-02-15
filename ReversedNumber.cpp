#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int answer=0;
    
    int temp=n;
    while (temp>0){
        int lastdigit=temp%10;
        temp=temp/10;
        answer=(answer*10)+lastdigit;
    }
    cout<<answer;
    return 0;
}