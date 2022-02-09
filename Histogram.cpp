#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int l,n,i,x,k,j;
    cin>>l>>n;
    int a[n+1]={};
    x=n;
    while(x>0){
        cin>>a[x];
        x=x-1;
    }
    for(i = 1;i <=n; ++i){
       if(a[0] < a[i]){
           a[0] = a[i];
       }
    }
    if (a[0]%l==0){
        k=a[0]/l;
        int b[l]={};
        for(j=0;j<l-1;++j){
            for(i = 1;i <=n; ++i){
                if((j*k)<=a[i]&&a[i]<((j+1)*k)){
                    b[j]=b[j]+1;
                }
            }
            cout<<j*k<<": "<<b[j]<<endl;   
        } 
        for(i = 1;i <=n; ++i){
                if((j*k)<=a[i]&&a[i]<=((j+1)*k)){
                    b[j]=b[j]+1;
                }
            }
            cout<<j*k<<": "<<b[j]<<endl; 

    }else{
        k=ceil(float(a[0])/float(l));
        int b[l]={};
        for(j=0;j<l;++j){
            for(i = 1;i <=n; ++i){
                if((j*k)<=a[i]&&a[i]<((j+1)*k)){
                    b[j]=b[j]+1;
                }
            }
            cout<<j*k<<": "<<b[j]<<endl;    
        }
    }
    return 0;
}