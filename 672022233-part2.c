#include <stdio.h>

int main(){
 int i, j, a, n, d, e, c, x, bil, tampung;
 menu:
 puts ("=================");
 puts ("Tugas Quiz ASD");
 puts ("=================");
 puts ("1. Level 1");
 puts ("2. Level 2");
 puts ("3. Level 3");
 puts ("4. Exit");
 puts ("=================");
 printf ("Pilih menu : ");
 scanf ("%d", &n);
 system ("cls");

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
    getch();
    system ("cls");
    goto menu;
    break;

 case 2 :
    printf ("Masukkan angka : ");
    scanf ("%d", &a);

        for (i=1; i<=a; i++){
        for (j=1; j<=i; j++){
        printf ("%3d", i*j);
    }
        printf ("\n");
    }
    getch();
    system ("cls");
    goto menu;
    break;

 case 3 :
    printf ("Masukkan bilangan (max 9) : ");
    scanf ("%d", &bil);
            for (c=1; c<=bil; c++){
            printf("\n");
            for (e=1; e<=bil-c; e++){
                printf(" ");
            }
            for (d=1; d<=c;d++){
            printf("%d", d);
            }
            for (d=c-1; d>=1; d--){
            printf("%d", d);
            }
            }
            for (c=bil-1; c>=1; c--){
            printf("\n");
            for (e=1; e<=bil-c; e++){
                printf(" ");
            }
            for (x=1; x<=c;x++){
                printf("%d", x);
            }
            for (d=c-1; d>=1; d--){
            printf("%d", d);
            }
        }
    getch();
    system ("cls");
    goto menu;
    break;
 case 4 :
    printf ("~TERIMA KASIH~");
    break;

 default :
    printf ("Menu Tidak Tersedia");
 }
 return 0;
}
