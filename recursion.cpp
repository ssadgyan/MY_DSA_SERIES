#include <iostream>
using namespace std;

void rus(int n, int m){
    if(n == m){
        return;
    } else {
        for(int i=0;i<m;i++){
        cout << "hii saddu" << endl;
        }
        rus(n + 1, m);
    }
}

int main(){

    int m;
    cout << "enter times you want" << endl;
    cin >> m;
    rus(0, m);

    return 0;

}