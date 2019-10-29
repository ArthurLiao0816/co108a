#include<stdio.h>
//Or(a=o1,b=out[2],out=o2);
int main()
{
    int i;
    for(i=1;i<=8;i++){
        printf("RAM4K(in=in,load=s%d,address=address[0..10],out=out%d);\n",i,i);
    }
}
