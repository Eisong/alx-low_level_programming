global   main
	  extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
format: db `Hello, Edet_Isong\n`,0
