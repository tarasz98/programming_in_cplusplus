#include <iostream>
#include <vector>
using namespace std;


int F(int n){
    if(n == 0){
        //cout << "Reached base of the recursion for value 0." <<endl;
        return 1;
    }else if(n == 1){
        //cout << "Reached base of the recursion for value 1." <<endl;
        return 1;        
    }else{
        //cout <<"Computation of the fibonacci of "<< n <<endl;
        return (F(n-1) + F(n-2));
    }

}




int main(){
    int n;
    vector< int> v;
    vector< int> f;
    

    
    while(true){
        if(cin.fail()){
            break;
        }
        
        cin >> n;

        if(cin.fail()){
            break;
        }

        //cout << "Pushing back value "<< n <<endl;
        v.push_back(n);

        if(cin.get() == true){
            break;
        }

    }

    //cout << "Starting the creation of the fibonacci vector:"<<endl;
    for(int i=0; i < v.size(); i++){
        f.push_back(F(v[i]));

    }

   /* cout <<"Displaying the input vector: "<<endl;
    for (int i=0; i < v.size(); i++){
        cout << v[i] << ' ';
    }*/

    //cout <<endl;

    //cout <<"Displaying the fibonacci vector: "<<endl;
    for (int i=0; i < f.size(); i++){
        cout << f[i] << ' ';
    }
        
    


    return 0;
}