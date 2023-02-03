#include <stdio.h>

int main(){
 int i, j, a, n, tampung;
 while (1){
 system ("cls");
 puts ("Tugas Quiz ASD");
 puts ("1. Level 1");
 puts ("2. Level 2");
 puts ("3. Level 3");
 puts ("4. Exit");
 printf ("Pilih menu : ");
 scanf ("%d", &n);

switch (n){
case 1 :
    printf ("Masukkan Angka : ");
    scanf ("%d", &a);

 for (i=0; i<=a+1; i++){
        tampung=i;
  for (j=0; j<i; j++){
    printf ("%3d", tampung-1);
  tampung++;
  }
  printf ("\n");
}
getch ();
break;
}
//case 2 :
}
}

