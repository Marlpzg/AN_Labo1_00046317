#include <cstdlib>
#include <iostream>

using namespace std;

int xpown(int x, int n){
    if(n == 0){
        return 1;
    }
    return x*xpown(x, n-1);
}

int main(){

    cout << xpown(3, 2);

    return 0;
}