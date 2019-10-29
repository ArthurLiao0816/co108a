#include<stdio.h>
//Or(a=o1,b=out[2],out=o2);
int main()
{
    int i;
    for(i=0;i<16;i++){
        printf("Bit(in=in[%d],load=load,out=out[%d]);\n",i,i);
    }
}
