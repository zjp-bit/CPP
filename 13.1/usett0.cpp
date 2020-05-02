//usett0.cpp  -- using a base class
#include <iostream>
#include "tabtenn0.h"

int main(void)
{
    using std::cout;
    TableTennisPlayer player1("Jianpu","Zhang",true);
    TableTennisPlayer player2("Jing","Li",false);
    player1.Name();
    if(player1.HasTable())
          cout << ": has a table.\n";
    else
          cout << ": hasn't a table.\n";
    player2.Name();
    if(player2.HasTable())
          cout <<": has a table.\n";
    else
          cout <<": hasn't a table.\n";
    
    return 0;    
}