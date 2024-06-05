#include <iostream>
using namespace std;

namespace space1{
    
    int age=10;
    string name="nikesh";
    
    int car(){
        cout<<"hello";
        return 0;
    }
}
int main()
{
    cout<<space1::age<<endl;
    cout<<space1::name<<endl;
    cout<<space1::car()<<endl;
    return 0;
}

