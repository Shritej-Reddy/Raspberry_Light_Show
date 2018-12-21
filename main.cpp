
#include <iostream>
#include <windows.h>

#define pid "13"
#include "utilities.cpp"
using namespace std;

bool update()
{
    data_transfer::download("signal");
    ifstream r_object("signal");
    char test[5];
    r_object >> test;

    if(strcpy(test, pid))
    {
        return true;
    }
    else
        return false;
}

void emergency_green()
{
    while(update())
    {
        system("color 22");
    }
}
int main()
{
   while(true)
   {
       for(int i=0; i<5; ++i)
       {
           system("color 44");
           if(update())
           {
               emergency_green();
           }
           Sleep(1000);
       }

       for(int i=0; i<3; ++i)
       {
           system("color 66");
           if(update())
           {
               emergency_green();
           }
           Sleep(1000);
       }

       for(int i=0; i<4; ++i)
       {
           system("color 22");
           if(update())
           {
               emergency_green();
           }
           Sleep(1000);
       }

   }

}
