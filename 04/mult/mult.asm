// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.
@2 
M=0;
(Loop)
@0 
D=M; 
@END 
D,JEQ
@Negative 
D,JLT
@1 
D=M;
@2 
M=M+D;
@0 
M=M-1;
@0 
D=M; 
@END 
D,JEQ
@Loop 
0,JMP
(Negative)
@1
D=M; 
@2 
M=M+D;
@0 
M=M+1; 
@0 
D=M;
@NR 
D,JEQ
@Negative 
0,JMP
(NR)
@2 
M=-M;
(END)
@Exit 
0,JMP