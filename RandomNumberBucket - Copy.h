#ifndef RANDOMNUMBERBUCKET_H_
#define RANDOMNUMBERBUCKET_H_
#include <iostream>
#include <vector>
using namespace std;
class RandomNumberBucket
{
public:
    RandomNumberBucket();
    RandomNumberBucket(int range);
    int pop(); 
    void refill();
    int size(); 
    bool empty(); 
    void popwithrefill();
   
private:
    int var1;
	int var2;
	int capacity;
	int max_num;
	vector<int> vec1;
	vector<int> vec2;
};
#endif /* RANDOMNUMBERBUCKET_H_ */
