#include<iostream>
using namespace std;

static string reverse(string str){
    string rev = "";
    for(int i = str.length() - 1; i>=0; i--){
        rev = rev + str[i];
    }

    return rev;
}


int main(){

    int n;
    cout << "Enter a number to convert into binary(without decimals): ";
    cin >> n;

    string binary="";

    while(n != 0){
        binary += to_string((n%2));
        n=n/2;
    }
    cout << "Binary Number: " << reverse(binary);
}