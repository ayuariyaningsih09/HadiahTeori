#include <iostream.h>
#include <conio.h>

main () {
int nilai,jumlah,Z;
 cout <<"masukkan nilai = "; cin>>nilai;
 jumlah =0;
 for (Z=1; Z<=nilai;Z++)
 if (nilai % Z == 0)

 jumlah++;
 if (jumlah == 2)
 cout<<"nilai yang anda inputkan bilangan prima \n";
 else
 cout<<"nilai yang anda inputkan bukan bilangan prima \n";
getch () ;
}
