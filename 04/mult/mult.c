#include <stdio.h>

int main() {
    int R0;
    int R1;
    int R2;

    scanf("%d",&R0);
    scanf("%d",&R1);
    R2=0;   //@2 M=0;
Loop:   //(Loop)
    if(R0==0) goto END; //@0 D=M; @END D,JEQ;
    if(R0<0)goto Negative;  //@Negative D,JLT;
    R2+=R1; //@1 D=M; @2 M=M+D;
    R0--;   //@0 M=M-1;
    if(R0==0) goto END; //@0 D=M; @END D,JEQ;
    goto Loop;  //@Loop 0,JMP;
Negative:
    R2+=R1; //@1 D=M; @2 M=M+D;
    R0++; //@0 M=M+1; @0 D=M;
    if(R0==0) goto NR;  //@NR D,JEQ;
    goto Negative;  //@Negative 0,JMP;
NR:
  R2*=-1; //@2 M=-M;
  goto END; //@END 0,JPM;
END:
    printf("%d",R2);  //@Exit 0,JMP;
}
