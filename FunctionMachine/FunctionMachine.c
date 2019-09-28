#include<stdio.h>
//Or(a=o1,b=out[2],out=o2);
int main()
{
    int i;
    for(i=0;i<14;i++){
        printf("Or(a=o%d,b=out[%d],out=o%d);\n",i+1,i+2,i+2);
    }
}
