#include "string.h"

uint16 strlength(string ch)
{
    uint16 i = 1;
    while(ch[i++]);
        return --i;

}

uint8 strEql(string ch1,string ch2)                     
{
        uint8 result = 1;
        uint8 size = strlength(ch1);
        if(size != strlength(ch2)) result =0;
        else 
        {
        uint8 i = 0;
        for(i;i<=size;i++)
        {
                if(ch1[i] != ch2[i]) result = 0;
        }
        }
        return result;
}

uint8 strContain(string ch1,string ch2)                     
{
        uint8 result = 1;
        uint8 size = strlength(ch1) - 1;
        uint8 siz = strlength(ch2) - 2;
        uint8 i = 0;
        if(size != siz)
        {
            result = 0;
        }
        else
        for(i=0;i<=size;i++)
        {
               
                if(ch1[i] != ch2[i])
                    result = 0;
        }
        return result;
}
