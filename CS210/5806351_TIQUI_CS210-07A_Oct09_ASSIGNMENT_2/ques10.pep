       BR   main
list:       .BLOCK      32    ;global variable
i:       .BLOCK        2    ;global variable
numItems:    .BLOCK       2    ;global variable
temp:       .BLOCK        2      ;global variable
;
main: DECI    numItems,d   ;cin >> numItems
    LDX     0,i      ;for (i = 0
       STX     i,d
for1:       CPX     numItems,d    ;   i < numItems
       BRGE    endFor1       
ASLX               ;   an integer is two bytes
DECI    list,x      ;   cin >> list[i]
       LDX     i,d         ;   i++)
       ADDX    1,i
       STX    i,d
       BR      for1
endFor1:    LDX   0,i      ;     
LDA   list,x
STA   temp,d 
ADDX  1,i      
STX     i,d    ;for (i = 1
for2:       CPX     numItems,d    ;   i < numItems - 1   
       BRGE   endFor2
        ASLX
       DECO list,x
CHARO  ' ',i
       LDX  i,d
       ADDX     1,i
       STX     i,d           
       BR      for2
endFor2:     DECO   temp,d
CHARO   '\n',i
STOP
 .END