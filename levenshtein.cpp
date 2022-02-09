#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;



unsigned int minim(unsigned int d1, unsigned int d2, unsigned int d3){
    unsigned int tmp;
    //cout << "We compare the values of " << d1 << ", " << d2 << " and " << d3 <<endl;
    /*
    min = d1;

    if(min > d2){
        min = d2;
    }else if(min > d3 && d3 < d2){
        min = d3;
    }*/
    tmp = d1;
    tmp = min(d1, min(d2, d3));


    //cout << "The minimum value is: " << min <<endl;
    return tmp;
}

unsigned int f(string a, string b){
    //cout << "We compare the similarity between " << a << " and " << b <<endl;
    if(a == b){
        return 0;
    }else{
        return 1;
    }
}

unsigned int d(string u, string v){
    if(v.length() == 0){
        //cout << v << " sequence is a blank space, we reached the base."<<endl;
        return u.length();

    }else if(u.length() == 0){
        //cout << u << " sequence is a blank space, we reached the base."<<endl;
        return v.length();

    }else{
        //cout << "We compute the distance between " << u << " and " << v <<endl;

        unsigned int d1 = d(u.substr(1, string::npos), v);
        unsigned int d2 = d(u, v.substr(1, string::npos));
        unsigned int d3 = d(u.substr(1, string::npos), v.substr(1, string::npos));

        return minim(d1 + 1, d2 + 1, d3 + f(v.substr(0,1), u.substr(0,1)));

    }
}



int main(){
    string a;
    string b;

    unsigned int dist;

    //cout << "Insert two words: " <<endl;

    cin >> a; cin >> b;

    //cout << "The distance between " << a << " and " << b << " is: ";

    dist = d(a, b);

    cout << dist <<endl;

    return 0;
}