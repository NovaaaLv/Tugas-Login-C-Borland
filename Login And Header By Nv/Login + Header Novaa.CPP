#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include "profile.h"
main()
{

char tumbal,user[100],pass[]="Kafucin";
int i,a=0;

Login:
clrscr();
Profile("PROFILE");

cout<<"Masukan User Name : ";gets(user);
cout<<"Masukan Password  : ";
for (i = 0 ; i <= 7 ; i ++)
 {  tumbal = getch();
    cout<<"*";
    if (tumbal == pass [i])
    {
     a = a + 1;
    }
 }
if ((strcmp(user,"Claire")==0) && a == 7)
  {
   clrscr();
   cout<<"HII! "<<user<<" Selamat Datang Di APK BETA Kami !"<<endl;
  }
  else
  {
  cout<<"Maaf Akun Yang Anda Masukan Salah Mohon Coba Lagi !!"<<endl;
  goto Login;
  }
getch();
}