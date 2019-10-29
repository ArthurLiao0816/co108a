#include<stdio.h>
//Or(a=o1,b=out[2],out=o2);
int main()
{
    int i;
    for(i=1;i<=8;i++){
        printf("Mux8Way16(a=out%d,b=out%d,c=out%d,d=out%d,e=out%d,f=out%d,g=out%d,h=out%d,sel=address[3..5],out=oout%d);\n",8*i-7,8*i-6,8*i-5,8*i-4,8*i-3,8*i-2,8*i-1,8*i-0,i);
    }
}
