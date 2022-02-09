#include <iostream>
#include <vector>
#include <string>
using namespace std;

unsigned int palindrome(unsigned int i, unsigned int j, bool d, vector<unsigned int> v){
    if(d == 0){
        //cout << "We return 0 because the vector is not a palindrome." <<endl;
        return d;
    }else if(i == j && d == 1){
        //cout << "We return 1 because the vector is a palindrome."<<endl;
        return d;
    }else if(i == (j-1) && v[i] == v[j]){
        d = 1;
        //cout << v[i] << " and " << v[j] << " are equal. Retturn a 1, this is one of the bases."<<endl;
        return d;
    }else{
        if(v[i] == v[j]){
            d = 1;
            palindrome(i+1, j-1, d, v);
            //cout << v[i] << " and "<< v[j] << " are equal. We keep going through the vector."<<endl;
        }else if(v[i] != v[j]){
            d = 0;
            //cout << v[i] << " and " << v[j] << " are not equal. So we return 0."<< endl;
        }
    }

    //cout << "We return d."<<endl;
    return d;
}


int main(){
    unsigned int n, i=0, j;
    vector<unsigned int> v;
    bool d = 1, res;
    string result;


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

    j = v.size() - 1;

    //cout << "The index j is: " << j <<endl;
    res = palindrome(i, j, d, v);

    if(res == 1){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }


    return 0;
}