#include <bits/stdc++.h>
using namespace std;

int linearSearch(int ar[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(ar[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int n = 10000;
    int N = n*10 + 1;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        ar[i] = rand() % N ; // assigning random value to array which is btw (0-1000)
       // cout<<ar[i]<<"\t";
    }
    
    // Declare clock_t type variable to store current time at the START of the program.
    clock_t start;
    // Declare clock_t type variable to store current time at the END of the program.
    clock_t end;

    // Store the time at the START of the linear search
    start = clock();

    int key = ar[n-2];
    int index = linearSearch(ar,n,key);

    // Store the time at the END of the program
    end = clock();

    // Double type variables to calculate total time taken during execution of the program. 
    // Calculating Time during execution of the program.
    double timetaken = (end - start) / (double)CLOCKS_PER_SEC;
    //timetaken = timetaken * 100000;
    if(index == -1)
        cout<<"not found "<<key<<endl;
    else
        cout<<endl<<"found at index "<<index<<" having value "<<key<<endl;
    timetaken = timetaken * 1000000;
    cout << "Time taken by Linear Search: " << fixed << timetaken << " microsec" << endl;
    //cout << "Time taken by Linear Search: " << fixed << timetaken << "s" << endl;
    return 0;
}
