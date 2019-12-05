#include <stdio.h>

int main(){
forever                         //(forever)
    int addr=SCREEN;            //@SCREEN D=A; @addr M=D;
    int n=8192;                 //@8192 D=A; @n M=D;
    int i=0;                    //@i M=0;  
    while(i<n){                 //(loop)@i D=M; @n D=D-M; @endloop D,JEQ
        if(*KBD==0){            //@KBD D=M; @else D,JNE @i D=M; @addr A=A+D;
        RAM[addr+i]=0;          //@addr M=0; @endif 0,JMP
        }                       //(else) @addr M=-1;
        else RAM[addr+i]=-1;    //(endif) @i M=M+1;(endloop)
        i++;                    //@forever 0,JMP
    }
goto forever;
}

