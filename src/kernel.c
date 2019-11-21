#include "include/isr.h"
#include "include/shell.h"


kmain()
{
    isr_install();
    //clearScreen();
    //int a=10/0;
    print("Slate OS Active \nType help for all commands\n\n");
    launch_shell(0);
    
}
