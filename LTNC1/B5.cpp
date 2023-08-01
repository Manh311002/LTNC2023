int max(int *a)
{
    int x=a[0];
    for(int i=0; i<4; i++){
        if(x<a[i]){
            x=a[i];
        }
    }
}
