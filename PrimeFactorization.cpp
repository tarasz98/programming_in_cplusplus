#include <iostream>
using namespace std;

int main(){
    int n, Gsum = 0;

    cout <<"Write a positive integer: ";
    cin >> n;

    for (int i=0; i <= n; i=i+1){
        Gsum = Gsum + i;
    }

    cout << "The result is " << Gsum << endl;

}