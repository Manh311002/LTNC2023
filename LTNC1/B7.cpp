#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float A[n];
    for(int i=0; i<n; i++){
        cin >> A[n];
    }
   float soduong=0, soam=0,so0=0;
    for(int i=0;i<n; i++)
    {
        if(A[i] > 0){
            soduong++;
        }
        if(A[i] < 0){
            soam++;
        }
        if(A[i] == 0){
            so0++;
        }
    }
    cout << soduong/(n*1.0) << endl << soam/(n*1.0) << endl << so0/(n*1.0);
    return 0;
}
