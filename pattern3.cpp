#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        int k=i;
        int l=2;
        for(int j=1;j<=n*2-1;j++){
            if(j<=n-i || j>=n+i){
                cout<<" ";
            }
            else{
                if(k>=1){
                    cout<<k;
                    k--;
                }
                else if (k<=1){
                    cout<<l;
                    l++;
                }
            }
          
        }
        cout<<endl;
    }
    return 0;
}