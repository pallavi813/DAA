#include <bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> &ar,int n,int key)
{
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;

    while(s<e)
    {
        if(ar[mid]==key)
            return mid;
        else if(ar[mid]>key)
            e=mid-1;
        else 
            s=mid+1;
        mid = (s+e)/2;
    }
    return -1;
}

int main()
{
    int n = 10000;
    int N = n*10 + 1;
    vector<int> ar(n);

    for(int i=0;i<n;i++)
    {
        ar[i] = rand() % N ; // assigning random value to array which is btw (0-1000)
        //cout<<ar[i]<<"\t";
    }
    
    // Declare clock_t type variable to store current time at the START of the program.
    clock_t start;
    // Declare clock_t type variable to store current time at the END of the program.
    clock_t end;

    // Store the time at the START of the linear search
    start = clock();

    sort(ar.begin(),ar.end());

    // Store the time at the END of the program
    end = clock();

    // Double type variables to calculate total time taken during execution of the program. 
    // Calculating Time during execution of the program.
    double timetaken1 = (end - start) / (double)CLOCKS_PER_SEC;
    timetaken1 = timetaken1 * 1000000;
    cout << "Time taken by Sorting: " << fixed << timetaken1 << " microsec" << endl;
    
    // Store the time at the START of the linear search
    start = clock();

    int key = ar[n-2];
    int index = binarySearch(ar,n,key);

    // Store the time at the END of the program
    end = clock();

    // Double type variables to calculate total time taken during execution of the program. 
    // Calculating Time during execution of the program.
    double timetaken2 = (end - start) / (double)CLOCKS_PER_SEC;
    timetaken2 = timetaken2 * 1000000;
    
    cout << "Time taken by Binary Search: " << fixed << timetaken2 << " microsec" << endl;
    
    if(index == -1)
        cout<<endl<<"not found "<<key<<endl;
    else
        cout<<endl<<"found at index "<<index<<" having value "<<key<<endl;

    return 0;
}
