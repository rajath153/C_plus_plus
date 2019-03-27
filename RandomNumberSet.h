#ifndef RANDOMNUMBERSET_H_
#define RANDOMNUMBERSET_H_
#include<iostream>
#include<vector>
#include<ctime>
#include<bitset>
#include<iomanip>

using namespace std;
class RandomNumberSet
{
public:
    RandomNumberSet();
    RandomNumberSet(int range);
    void reset(); // clears all the numbers stored
    
    bool set(int i); // If number i is not in the set, stored by setting the corresponding bit in the bit set and return true, else return false

    int size(); // returns numbers of numbers stored
    int operator - (RandomNumberSet R)
    {
         int c;
        if(set4.count()==R.set4.count())	      
         c = ((set4^R.set4).count())/2;
        else if (((set4^R.set4).count() > set4.count())&&(set4.count() > R.set4.count()))
         c = ((set4^R.set4).count()) - R.set4.count();
        else if (((set4^R.set4).count() > R.set4.count())&&(R.set4.count() > set4.count()))
         c = ((set4^R.set4).count()) - set4.count();
        else
         c = (set4^R.set4).count();
         if(set4.count()>R.set4.count())
           c = set4.count() - (set4&R.set4).count();
         else
           c = R.set4.count() - (set4&R.set4).count();
        return c;
    }
   friend void operator << (ostream& out,RandomNumberSet& R)
     {
        
        for(int i =0; i<R.v1.size();i++)
        {
            out <<  setw(3) << R.v1[i];
        }
	cout << endl;
//        cout << R.set4<< endl;
        
     }
private:
    vector<int> v1;
    int max_num;
    bitset<101> set4;
    int num_passed = 0;
    int number_count = 0;

#endif    
};
