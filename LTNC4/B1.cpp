#include<iostream>
using namespace std;
int main(){
    int n;
    int p;
    cin>>n>>p;
    int ans;
    if(n%2==0){
        if(p>n/2){
            ans = (n-p)/2;
        }else{
            ans = p/2;
        }
    }else{
        if(p>n/2){
            ans = (n-p)/2;
        }else{
            ans = p/2;
        }
    }
    cout<<ans<<endl;

}
