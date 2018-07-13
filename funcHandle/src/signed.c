
#include <stdio.h>
 
int main(void)
{
 
 unsigned int  uiData = 4294967295;
 
 printf("%u\n",uiData);
 
 signed int iData = (signed int)uiData;
 
 printf("%u\n",iData);
 
 return 0;
}