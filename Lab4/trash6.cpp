#include <iostream.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip.h>

class phone{
public:
  long  number;
  char *data;
  int   lock;
  char *name;
  phone(){number=0; *data=' '; lock=0; *name=' ';};
};
  void change(phone &a,long  &numer, char *dat, int &lok, char *nm);
  void show();
  void sort();

phone obj[7];

void change(phone &a,long  &numer, char *dat, int  &lok, char *nm)
{
  a.number = numer;
  a.lock = lok;
  a.data = new char[strlen(dat)+1];
  strcpy(a.data,dat);
  a.name = new char[strlen(nm)+1];
  strcpy(a.name,nm);
}

void sort()
{
 int i,j;
 phone temp;
  for (i=0; i<7; i++)
   for (j=i+1; j<7; j++)
   if (obj[i].number > obj[j].number) {
    temp = obj[i];
    obj[i] = obj[j];
    obj[j] = temp;
   }
}
void show()
 {
  int i,j;
 cout << "                            ТЕЛЕФОН: \n";
 cout << "----------------------------------------------------------------\n";
 cout << "   Номер     Дата установки     Блокиратор     Фамилия абонента \n";
 cout << "----------------------------------------------------------------\n";

char s[10];
for (i=0; i<7; i++) {
 ltoa(obj[i].number,s,10);
 if (strlen(s)==6){
 cout <<' '<<s[0]<<s[1]<<"-"<<s[2]<<s[3]<<"-"<<s[4]<<s[5];}
 else if (strlen(s)==7){
 cout << s[0]<<s[1]<<s[2]<<"-"<<s[3]<<s[4]<<"-"<<s[5]<<s[6];}
 cout << setw(15) <<  obj[i].data;
  if (obj[i].lock == 0) cout << setw(15) << "Нет";
  else if (obj[i].lock == 1) cout << setw(15) << "Да";
 cout << setw(25) << obj[i].name;
 cout << "\n";
}
cout << "----------------------------------------------------------------\n";
}

void main()
{
 int r = 0;

 for (int a=0; !a;){
  clrscr();
  cout <<"1. Добавить записи\n"  ;
  cout <<"2. Сортировать базу\n";
  cout <<"3. Вывести базу\n";
  cout <<"4. Выход\n";
  cout <<"> ";
  int p;
  cin>>p;
   switch(p) {
     case 1: {
      change(obj[0],921034,"12.05.99",1,"Иванов");
      change(obj[1],1002010,"17.12.85",0,"Петров");
      change(obj[2],109231,"02.01.80",1,"Сидоров");
      change(obj[3],324439,"27.07.94",0,"Селиванов");
      change(obj[4],1251367,"20.10.01",1,"Ильин");
      change(obj[5],173167,"10.01.83",0,"Хрущ╦в");
      change(obj[6],134367,"11.06.79",0,"Козлов");
      r = 1;
     break;
    }

    case 2: {
     if (r == 0) {cout<<"В базе нет записей."; getch();}
     else if (r == 1) sort();
    break;
    }

    case 3: {
     if (r == 0) {cout<<"В базе нет записей."; getch();}
    else if (r == 1)show();
    getch();
    break;
    }

    case 4: {
    a=1;
    break;
    }

    default :{
    cout << "Неверный вызов";
    getch();
    break;
    }
  }
}

}