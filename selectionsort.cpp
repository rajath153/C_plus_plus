#include<iostream>
#include<vector>
using namespace std;
void selectionsort(int A[], int n)
{
    int min;
    int temp;
    for(int i = 0; i<n-1;i++)
    {
        min = i;
        for(int j = i+1;  j<n; j++)
        {
            if(A[j]<A[min])
            {
                min = j;
            }
        }
/*        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
*/    
        swap(A[i],A[min]);
    }
}
int main()
{
    int A[5] = {7,6,1,4,9};
    selectionsort(A,5);
    for(int i=0;i<5;i++)
    {
        cout << A[i] << " ";
    }
}