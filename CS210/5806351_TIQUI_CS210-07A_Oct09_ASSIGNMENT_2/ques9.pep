	BR main
amount:	.EQUATE 20000	      ;constant
num:	.BLOCK 2	      ;global variable
sum:	.BLOCK 2	      ;global variable
;
main:	DECI	 num, d	      ;cin >> num
	LDA      num, d	      ;sum = num
	ADDA   	 amount,i     ;   + amount
	STA      sum, d       ;store sum
	STRO	 msg, d	      ;cout << "sum = "
	DECO     sum, d       ;   << sum
        CHARO    '\n', i      ;   << endl
	STOP
msg:	.ASCII 	 "sum = \x00"
	.END