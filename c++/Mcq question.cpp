                          // mcq 1:
#include <iostream>
using namespace std;

int r(){
    
    static int num=7;
    return num--;
}
int main()
{
    
    for(r();r();r()){
        printf("%d ",r());
    }
    return 0;
}

// output-> 5 2
