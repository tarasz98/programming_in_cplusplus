#include <iostream>

using namespace std;

int a[1001]={0};

void add(int x){
    a[x]=a[x]+1;
}

void del(int x){
    a[x]=a[x]-1;
}

void qry(int x){
    if(a[x] > ){
        cout<<"T";
    }else{
        cout<<"F";
    }
}

int main(){
    string function;
    int x;
    cin>>function;
    while(function != "quit"){
        cin>>x;
        if(x>=0&&x<=1000){ // No hace falta, pero si quieres asegurar de que el número esté entre entre 0 y 1000 sí
            if(function == "add"){
                add(x);
                cin>>function;
            }else if(function == "del"){
                del(x);
                cin>>function;
            }else if(function == "qry"){
                qry(x);
                cin>>function;
            }
        }
    }
    return 0;
}
