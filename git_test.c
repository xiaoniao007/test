//https://github.com/xiaoniao007/test


#include <stdio.h>
#include <stdlib.h>


int main(int argc,char * argv[])
{
    printf("Hello!\r\n");
    int i;
    if(argc>2)
    {
        for(i=0;i<argc,i++)
        {
           printf("s%\n",argv[i]);
                   
        }
    }
    return 0;
}
