#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Inserire primo numero: ");
  scanf("%d", &a);
  printf("Inserire secondo numero: ");
  scanf("%d", &b);
  c = a += b;       //ERRORE
  printf("%d + %d = %d\n", a, b, c);
}


/*
- compilare il programma: gcc -g debugger.c
- eseguire il programma: gdb ./a.out
- (gdb) run : per eseguire il programma
- (gdb) break <riga> : per inserire un breakpoint
- (gdb) next : continuare con la prossima istruzione
- (gdb) print <var> : stampa il valore della variabile
- (gdb) exit : per uscire dal debugger
*/