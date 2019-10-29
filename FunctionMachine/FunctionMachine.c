#include<stdio.h>
//Or(a=o1,b=out[2],out=o2);
int main()
{
    int i;
    for(i=0;i<8;i++){
        printf("Register(in=in,load=s%d,out=out%d);\n",i+1,i+1);
    }
}
