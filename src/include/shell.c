#include "shell.h"

void launch_shell(int n)
{
    string ch = (string) malloc(200);
    int countter = 0;
    do
    {
        print("\n@Slate(");
        print(int_to_string(n));
        print(")>");
        ch = readStr();
        if(strContain("ucmd",ch))
        {
            print("\nstarting a new shell ");
            launch_shell(n+1);

        }
        else if(strContain("help",ch))
        {
            print("\nucmd   :   for starting a new ultimate terminal");
            print("\nexit   :   for exiting the shell");
            print("\nsrc    :   for displaying source");
            print("\nclr    :   for clearing screen (Bug not fixed)");
            print("\ndbo    :   divide by zero");            
        }
        else if(strContain("dbo",ch))
        {
            print("\n");
            int n = 5/0;
        }
        else if(strContain("src",ch))
        {
            print("\nsrc @ https://github.com/elsonjose/slate");
        }
        else if(strContain("clr",ch))
        {
            clearScreen();    
        }
        else if(strContain("exit",ch))
        {
            print("\nexiting the shell");  
        }
        else
        {
           print("\ncommand not found");
        }
        
        print("\n");


    }while(!strContain("exit",ch));
}



