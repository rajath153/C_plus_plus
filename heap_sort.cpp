#include<iostream>
#include<vector>
using namespace std;
void heapSort(vector<int> &A, int n);
void max_heapify(vector<int> &A, int index, int size);

int main()
{
    vector<int> v1 = {6,12,3,14,1};
    int k=v1.size();
//    cout << k << endl;
    heapSort(v1,k);
    cout << "sorted array is " << endl;
    for(int i =0; i<v1.size();++i){
        cout << v1[i] << " ";
    }
    return 0;
}
void max_heapify(vector<int> &A, int index, int size)
{
    int l,r;
    l=2*index+1;
    r=2*index+2;
    int largest=index;
    if(l<size && A[l]>A[largest])
    {
        largest = l;
    }
    
    if(r<size && A[r]>A[largest])
    {
        largest = r;
    }
//    cout << "largest is " << largest << endl;
    if(largest != index)
    {
        std::swap(A[index],A[largest]);
        max_heapify(A,largest,size);
    }
    
}

void heapSort(vector<int> &A, int n) 
{ 
//    cout << "n is " << n << endl;
    // Build heap (rearrange array) 
    for (int i = n / 2-1; i >= 0; i--) 
    {
        
        max_heapify(A, i, n); 
//        cout << "i is " << i << endl;
    }
    // One by one extract an element from heap 
    for (int i=n-1; i>=0; i--) 
    { 
        // Move current root to end
        
        swap(A[0], A[i]); 
    
  
        // call max heapify on the reduced heap 
        max_heapify(A, 0, i); 
    } 
    
} 