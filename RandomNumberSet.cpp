#include<iostream>
#include<vector>
#include<ctime>
#include<bitset>
#include<iomanip>
#include"RandomNumberSet.h"
using namespace std;

RandomNumberSet::RandomNumberSet()
{
    
    this -> max_num = 39;

}

RandomNumberSet::RandomNumberSet(int range)
{
    
    this -> max_num = range;
}
    
void RandomNumberSet::reset()
{
    set4.reset();
    for (int i=v1.size()-1;i>=0;i--)
    {
        v1.pop_back();
    }
}
bool RandomNumberSet::set(int i)
{
    num_passed = i;
    
    while(number_count < 5)
    {
        if (num_passed <= max_num)
        {
            if (set4[num_passed] == 0)
            {
                v1.push_back(num_passed);
                set4[num_passed] = 1;
                number_count ++;
                return true;
            }
            else
            {
		cerr << "The number " << i << " already existing in set, hence could not add" << endl;
                return false;
            }
        }
        else
        {
            cerr << "The given maximum value " << i << " exceeds the bitset range " << max_num << " hence could not set" << endl;
            return false;
        }
        
    }
    if(number_count >= 5)
    {
	   cerr << "maximum number allowed in set is  5, set is already filled with 5 numbers" << endl;
    }
    
}
int RandomNumberSet::size()
{
    int x = set4.count();
    return x;
}



