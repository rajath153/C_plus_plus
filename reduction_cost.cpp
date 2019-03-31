#include<iostream>
#include<string>
using namespace std;
string Roll_Forward_or_Backward(string P, int i, int j, char D) {
    string C = P;
    for(int start = i; start <= j; start++) {
        if(D == 'R' || D == 'r'){
            if(C[start] == 'z'){
                C[start] = 'a';
                continue;
            }
            C[start] = static_cast<char> (C[start] + 1);
            //cout<<C[i];
        }
        if(D == 'L' || D == 'l'){
            if(C[start] == 'a'){
                C[start] = 'z';
                continue;
            }
            C[start] = static_cast<char>(C[start] - 1);
            //cout<<C[i];
        }
    }
    return C;
}

int main() {
    //char opt;
    string Plain = "abc";
    cout<<"Enter left shift or right shift"<<endl;
    //cin>>opt;
    string Cipher = Roll_Forward_or_Backward(Plain, 0, 1, 'l');
    cout<<Cipher<<endl;
    Cipher = Roll_Forward_or_Backward(Cipher, 1, 2, 'r');
    cout<<Cipher<<endl;
    Cipher = Roll_Forward_or_Backward(Cipher, 0, 2, 'R');
    cout<<Cipher<<endl;
}
