                            /* passing array as argument in function both c and c++ me same work krega.*/

#include <iostream>
using namespace std;

int average(int[], int); // function declaration

int main()
{
    int marks[]={10,20,30,40,50,60};
    int size = sizeof(marks)/sizeof(marks[0]);
    int a=average(marks,size);
    cout<<a;
}

int average(int marks[],int size){
    
    int n=sizeof(marks)/sizeof(marks[0]);/* ye glat output dega.his is because when you pass an array to a function, 
    it decays to a pointer, and you lose the size information. matlab marks pointer ban jayega hence sizeof se pointer
    ka size print karege.  4 ya 8 byte according to machine.
    
    to avoid it size of main method se send karna function me .
    */
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=marks[i];
    }
    return sum/size;
}
