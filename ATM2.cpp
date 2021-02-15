#include<iostream>

int main()
{
    int t;
    
    std::cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int n, k;
        std::cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            std::cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            bool one=false;
            if(k-arr[i]>=0)
            {
                one=true;
                k=k-arr[i];
            }
            if(one){
                std::cout<<1;
            }else{
                std::cout<<0;
            }
        }
        std::cout<<"\n";
    }
    return 0;
}