#include<iostream>
#include<string>
using namespace std;
class hashtable
{
public:
    hashtable()
    {
        key="";
    }
    int Hs(string key,int num);
private:
    string key="";
    
};
int hashtable::Hs(string key,int num)
{
    int index;
    int hash = 0;
    index = key.length();
    for(int i=0;i<key.length();i++){
        cout << "key["<<i<<"]" << (int)key[i] << endl;
    }
    return key[num];
}
int main()
{
    hashtable ht;
    cout << ht.Hs("rajath",5);
}