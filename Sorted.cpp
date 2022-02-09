#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;
    int a[n];

// Array that stores the numbers inserted by the user
    
    if(n != 0 && n != 1){
     for(int i=0; i < n; i=i+1){
        int b;

        cin >> b;
        a[i]=b;
        }
    }

//Assessment of the introduced numbers
    int sorted;
    for(int i2=0; i2<n; i2=i2+1){
        if( a[i2] < a[i2+1]){
            sorted = sorted + 1;
        }else{
            sorted = sorted + 0;
        }
    }

    if(sorted == n || n == 0 || n == 1){
        cout <<"SORTED"<< endl;
    }else{
        cout <<"UNSORTED"<< endl;
    }


}