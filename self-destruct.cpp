#include <iostream>
#include<time.h>
using namespace std;
void delay(int delay) 
{ 
 int now=time(NULL); 
 int later=now+delay; 
 while(now<=later)now=time(NULL); 
} 
int main()
{
    cout<<"The System is going to self Destruct in....\n";
    for (int i = 10; i >= 0 ; i--)
    {
        delay(0.5);
        cout<<i<<"\n";
    }
    cout<<"Boom!!!!"<<endl;
    
    return 0;
}