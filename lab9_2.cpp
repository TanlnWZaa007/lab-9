#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void printO(double n,double m){
    if(n>0 && m>0){
    for(int i=0; i < n ;i++){
    for(int a = 0; a<m;a++){
        cout << "O";
    }
    cout << "\n";
    }
    }
    else{
        cout << "Invalid input";
    }
}
