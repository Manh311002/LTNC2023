#include <iostream>
using namespace std;

int tongtrai(int *a, int i)
{
    int t=0;
    for(int j=0; j<i; j++){
        t+=a[j];
    }
    return t;
}

int tongphai(int *a, int i, int n)
{
    int t=0;
    for(int j=i+1; j<n; j++){
        t+=a[j];
    }
    return t;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int dem=0;
    for(int i=0; i<n; i++){
        if(tongtrai(a,i)==tongphai(a,i,n)){
            dem++;
        }
    }
    if(dem==0){
        cout << "NO";
    }else{
    cout << "YES";
    }
    return 0;
}
