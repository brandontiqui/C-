;File: ques11.pep
;Assignment 2
;Question #11
;
         BR      main
;
;******* getVect (int ls[], int& n)
ls:       .EQUATE 6          ;formal parameter
n:       .EQUATE 4          ;formal parameter
i:       .EQUATE 0          ;local variable
getList: SUBSP   2,i        ;allocate local
         DECI    n,sf       ;cin >> n
         LDX     0,i        ;for (i = 0
         STX     i,s
for1:    CPX     n,sf       ;   i < n
         BRGE    endFor1
         ASLX               ;   an integer is two bytes
         DECI    ls,sxf      ;   cin >> ls[i]
         LDX     i,s        ;   i++)
         ADDX    1,i
         STX     i,s
         BR      for1
endFor1: RET2               ;pop local and retAddr
;
;******* putList (int ls[], int n)
ls2:      .EQUATE 6          ;formal parameter
n2:      .EQUATE 4          ;formal parameter
i2:      .EQUATE 0          ;local variable
putList: SUBSP   2,i        ;allocate local
         LDX     0,i        ;for (i = 0
         STX     i2,s
for2:    CPX     n2,s       ;   i < n
         BRGE    endFor2
         ASLX               ;   an integer is two bytes
         DECO    ls2,sxf     ;   cout << ls[i]
         CHARO   ' ',i      ;      << ' '
         LDX     i2,s       ;   i++)
         ADDX    1,i
         STX     i2,s
         BR      for2
endFor2: CHARO   '\n',i 
	RET2               ;pop local and retAddr
;
;******* rotate (int ls[], int n)
ls3:      .EQUATE 8          ;formal parameter
n3:      .EQUATE 6          ;formal parameter
i3:      .EQUATE 2          ;local variable
temp:    .EQUATE 0     ;local variable
rotate:   SUBSP   4,i        ;allocate local 
LDX   0,i      ;     
LDA   ls3,sxf
STA   temp,s 
ADDX  1,i      
STX     i3,s    ;for (i = 1
for3:       CPX     n3,s    ;   i < numItems - 1   
       BRGE   endFor3
        ASLX
       DECO ls3,sxf
CHARO  ' ',i
       LDX  i3,s
       ADDX     1,i
       STX     i3,s           
       BR      for3
endFor3:     DECO   temp,s

  RET2               ;pop local and retAddr
;
;******* main ()
list:    .EQUATE 2          ;local variable
numItems: .EQUATE 0          ;local variable
main:    SUBSP   34,i       ;allocate locals
         MOVSPA             ;push address of list
         ADDA list,i
         STA -2,s
         MOVSPA             ;push address of numItems
         ADDA numItems,i
         STA -4,s
         SUBSP 4,i          ;push params
         CALL getList       ;getList (list, numItems)
         ADDSP 4,i          ;pop params
         MOVSPA             ;push address of list
         ADDA list,i
         STA -2,s
         LDA numItems,s      ;push value of numItems
         STA -4,s
         SUBSP 4,i          ;push params
         CALL putList       ;putList (list, numItems)
     
         
  ADDSP 4,i          ;pop params
         MOVSPA             ;push address of list
         ADDA list,i
         STA -2,s
         LDA numItems,s      ;push value of numItems
         STA -4,s
         SUBSP 4,i          ;push params
  CALL rotate
  


 ADDSP 4,i          ;pop params
         ADDSP   34,i       ;deallocate locals
 STOP
         .END   
