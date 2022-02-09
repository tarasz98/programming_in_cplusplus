#include <iostream>
#include <vector>
using namespace std;

void reverse(unsigned int i, vector<unsigned int> v){
    if(i == 1){
        cout << v[i-1];
        return;

    }else if(v.size() == 0){
        return;
    }else{
        cout << v[i-1] <<" ";
        reverse(i-1, v);
    }

}


int main(){
    vector<unsigned int> v;
    unsigned int n, i=0;

    /*
    while(cin.fail() == false){
        cin >> n;
        v.push_back(n);
    }*/

    while(true){
        if(cin.fail()){
            break;
        }
        
        cin >> n;

        if(cin.fail()){
            break;
        }

        v.push_back(n);

        if(cin.get() == true){
            break;
        }

    }
    
    i = v.size();
    //cout << "The size of the vector is "<< i <<endl;


    reverse(i ,v);




    return 0;
}