#include<iostream>
using namespace std;
int main()
{
    int n,mx=-99999;
    int array[n];
    int i;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n;i++)
    {
        
         mx=max(mx,array[i]);//max function:It compares the two numbers passed in its arguments and returns the larger of the two, and if both are equal, then it returns the first one.

        
    }
    cout<<"The maximum of the numbers are : "<<mx;
}
/*
Output
Enter the size of the array: 
3
Enter 3 numbers
4 6 2
The maximum of the numbers are : 6


Enter the size of the array: 
3
Enter 3 numbers
12 -99 78
The maximum of the numbers are : 78
*/



