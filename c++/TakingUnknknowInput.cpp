// How to read unknown number of inputs?

#include <iostream>
using namespace std;


int main()
{
    int value=0;
    int sum=0;
    
    while(cin>>value){   
        sum+=value;
    }
    cout<<sum;
}

// input aise lena hai -> 3 4 5 6 7 y yaha last me koi bhee key put kar do terminte karne ke liye
