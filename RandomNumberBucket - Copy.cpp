#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include <time.h>
#include"RandomNumberBucket.h"
using namespace std;


RandomNumberBucket::RandomNumberBucket()
{
	srandom(time(0));
	var1 = 0 ;
	var2 = 0;
	capacity = 0;
	max_num = 39;
	for (int j = 1; j <= 39; j++){
		vec1.push_back(j);
	}
}

RandomNumberBucket::RandomNumberBucket(int range)
{
	srandom(time(0));
	var1 = 0 ;
	var2 = 0;
	capacity = 0;
	max_num = range;
	for (int i = 1; i <= max_num; i++){
		vec1.push_back(i);
	}
}
int RandomNumberBucket::pop()
{
	srandom(time(0));
	var1 = (random() % max_num + 1);
	cout << var1 <<endl<< "pop function\n" <<endl;
	cout <<"===========================================================\n" ;
	for(int i=0; i<vec2.size(); i++)
	{
		if (var1 == vec2[i])
		{
			cout<<"element repeated"<<endl;
			pop();
			break;
		}
	}
	if (vec1.size() == 0)
	{
		return -1;
	}
	else
	{
		for (int i = 0; i <= vec1.size(); i++)
		{
			if (vec1[i] == var1)
			{
				vec1.erase(vec1.begin() + i);
				vec2.push_back(var1);
			}
		}

		return var1;
	}
}
int RandomNumberBucket::size()
{
    return vec1.size();
}
void RandomNumberBucket::refill()
{
	if (vec1.size() < max_num)
	{
		for (int i = 0; i < vec2.size(); i++)
		{
			var2 = vec2[i];
			vec1.push_back(var2);
		}
	}
}
bool RandomNumberBucket::empty()
{
	if (vec1.size() == 0)
		return true;
	else
		return false;
}


void RandomNumberBucket::popwithrefill()
{
	if (vec1.size() == 0)
		refill();
}

