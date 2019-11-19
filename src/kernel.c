#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
kmain()
{
    clearScreen();
    print("Slate OS Active\nType help for all commands\n\n");
    while (1)
    {
        print("\n@Slate> ");
        string ch = readStr();
        if(strEql(ch,"ucmd"))
        {
            print("\nalready in an ultimate terminal");

        }
        else if(strEql(ch,"help"))
        {
            print("\nucmd :   for starting a new ultimate terminal");
            print("\nclr :   for clearing the screen");
        }
        else if(strEql(ch,"clr"))
        {
            clearScreen();    
        }
        else
        {
           print("\ncommand not found\n");
        }
        
        print("\n");
    }
    
}
