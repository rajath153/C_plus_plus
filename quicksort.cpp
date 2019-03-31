#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &A,int start,int end);
void quicksort(vector<int> &v1,int start,int end);
int partition(vector<int> &A,int start,int end)
{
    int pivot = A[end];
//    cout << pivot << endl;
    int pindex = start;
    for(int i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pindex]);
            pindex = pindex +1;
        }
        
    }
    swap(A[pindex],A[end]);
    return pindex;
}
void quicksort(vector<int> &v1,int start, int end)
{
    int pindex;
    if(start<end)
    {
        pindex = partition(v1,start,end);
        quicksort(v1,start,pindex-1);
        quicksort(v1,pindex+1,end);
        
    }
}
int main()
{
    int low;
    //cout << "low is " << low << endl;
    vector<int> v={7,2,1,6,8,5,3,4};
    quicksort(v,0,7);
    for(int i=0;i<8;i++)
    {
        cout << v[i] << " ";
    }
}