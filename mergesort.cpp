#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &left,vector<int> &right, vector<int> &A);
void mergesort(vector<int> &A);
int main()
{
    vector<int> v1 = {5,9,8,7,6,1};
    mergesort(v1);
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    int k=1;
    int *p;p=&k;
    //cout << "testing is " << *p * 2<< endl;
    return 0;
}
void merge(vector<int> &left,vector<int> &right, vector<int> &A)
{

    int nl = left.size();
    int nr = right.size();
    //cout << nl << " " << nr << endl;
    int i ,j,k=0;
    j=0;
    i=0;
    while(i<nl && j<nr)
    {
        if(left[i] < right[j])
        {
            A[k] = left[i];
            i++;
        }
        else
        {
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<nl)
    {
        A[k] = left[i];
        k++;
        i++;
    }
    while(j<nr)
    {
        A[k] = right[j];
        k++;
        j++;
    }
}
void mergesort(vector<int> &A)
{
    int n = A.size();
    
    vector<int> l1;
    vector<int> r1;

    if(n>=2)
    {
        int mid = (n/2);
        //cout << mid << endl;
        /*for(int i=0;i<n;i++)
        {
            cout<< A[i] << " ";
        }
        cout << endl;
        */for(int i=0; i<=mid-1;i++)
        {
            l1.push_back(A[i]);
            //cout << l1[i] << " ";
        }
        //cout << endl;
        for(int j=mid; j<=n-1;j++)
        {
            r1.push_back(A[j]);
            //cout << r1[j-mid] << " ";
            
        }
        //cout << endl;

        mergesort(l1);
        mergesort(r1);
        merge(l1,r1,A);
    }
}