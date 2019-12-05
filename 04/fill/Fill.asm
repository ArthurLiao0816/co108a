// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Fill.asm

// Runs an infinite loop that listens to the keyboard input.
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel;
// the screen should remain fully black as long as the key is pressed. 
// When no key is pressed, the program clears the screen, i.e. writes
// "white" in every pixel;
// the screen should remain fully clear as long as no key is pressed.

// Put your code here.
(forever)

//addr=screen
@SCREEN
D=A; 
@addr 
M=D;

//n=8192
@8192 
D=A; 
@n 
M=D;

//i=0
@i 
M=0;  

(loop)

//if(i==n) goto endloop
@i 
D=M;
@n
D=D-M;
@endloop
D,JEQ

//if(KBD==0) Ram[addr+i]=0; else goto else
@KBD 
D=M; 
@else 
D,JNE

@addr   //if(KBD==0)
D=M;
@i
A=M+D;
M=0;
@endif 
0,JMP

(else) 
@addr   //if(KBD!=0)
D=M;
@i
A=M+D;
M=-1;

//i++
(endif) 
@i 
M=M+1;

//goto loop
@loop
0,JMP

(endloop) 

//start again
@forever 
0,JMP