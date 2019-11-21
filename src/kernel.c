#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/isr.h"
#include "include/idt.h"

kmain()
{
    isr_install();
    clearScreen();
    //int a=10/0;
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
            print("\nsrc :   for displaying source");            
        }
        else if(strEql(ch,"clr"))
        {
            clearScreen();    
        }
        else if(strEql(ch,"src"))
        {
            print("\nsrc @ https://github.com/elsonjose/slate");
        }
        else
        {
           print("\ncommand not found");
        }
        
        print("\n");
    }
    
}
