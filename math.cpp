#include<iostream>
#include<math.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<' '<<n/2<<"\n";
        }
        else{
            bool max=false;
            for(int i=0;i<sqrt(n);i++){
                if(n%i==0){
                    int d=n/i;
                    cout<<d<<" "<<n-d<<'\n';
                    max=true;
                    break;
                }
            }
          if(!max){
              cout<<1<<' '<<n-1<<'\n';
          }  
        }
    }
    return 0;
}