# include <iostream>
# include <conio.h>
# include <stdio.h>
# include <windows>
# include <string.h>
# include <fstream.h>



void ingreso_de_datos();
void cursos();
void catedraticos();
void estudiantes();
void asignaciones();

void reportes();

//FUNCIONES PARA DISEÑO
void encabezado();
void estilo();
void estilo_ing_datos();

//Funcion para almacenar datos
ofstream estudiante;

void main()
{

	estudiante.open("estudiante.txt",ios::app);
   int opcion;
   while(opcion!=3)
  	{

      clrscr();

      encabezado();
      estilo();

      gotoxy(32,12);
  		cout<<"1"<<endl<<endl;
      gotoxy(38,12);
  		cout<<"INGRESO DE DATOS     "<<endl<<endl;

  		gotoxy(32,18);
      cout<<"2"<<endl<<endl;
      gotoxy(38,18);
  		cout<<"REPORTES     "<<endl<<endl;

  		gotoxy(32,24);
      cout<<"3"<<endl<<endl;
      gotoxy(38,24);
  		cout<<"SALIR              "<<endl<<endl;
      gotoxy(35,30);
      cout<<"OPCION---|     |";
      gotoxy(46,30);
      cin>>opcion;


  		switch(opcion)
      {
       	case 1:
  					ingreso_de_datos();
					break;
         case 2:
         		reportes();
               break;
      }//fin switch


  	}//fin while
}//fin funcion menu principal





//------------------------------------------------------------------------------------------------------------------------------------------------------
//INGRESO DE DATOS .........................................................
void ingreso_de_datos()
{


   char opcion;
   do
   {
      clrscr();
      encabezado();
      estilo_ing_datos();
      gotoxy(38,8);
   	cout<<"INGRESO DE DATOS"<<endl;
  		gotoxy(24,12);
   	cout<<"CURSOS"<<endl;
   	gotoxy(57,12);
   	cout<<"b.  CATEDRATICOS"<<endl;
   	gotoxy(24,20);
  	 	cout<<"ESTUDIANTES"<<endl;
  	 	gotoxy(57,20);
   	cout<<"d.  ASIGNACIONES"<<endl;
      gotoxy(30,27);
   	cout<<"R.  REGRASAR AL MENU PRINCIPAL"<<endl;
      gotoxy(38,32);
      cout<<"OPCION---|   |";
      gotoxy(49,32);
      cin>>opcion;

      switch(opcion)
      {
      	case 'a':
         			cursos();
         			break;
         case 'b':
         			catedraticos();
         			break;
         case 'c':
         			estudiantes();
         			break;
         case 'd':
         			asignaciones();
         			break;

      }

    }while((opcion!='r')&&(opcion!='R'));



}

void cursos()
{



   char repetir;
   do
   {

      clrscr();
      encabezado();
      gotoxy(35,8);
      cout<<"CURSOS";
      gotoxy(28,34);
      cout<<"Desea realizar otro registro S/N?: ";
      cin>>repetir;


   }while((repetir=='s')||(repetir=='S'));

}

void catedraticos()
{
   char repetir;
   do
   {
		clrscr();
      encabezado();
      gotoxy(35,8);
      cout<<"CATEDRATICOS";
      gotoxy(28,32);
      cout<<"Desea realizar otro registro S/N?: ";
      cin>>repetir;


   }while((repetir=='s')||(repetir=='S'));


}
void estudiantes()
{

   char repetir;
   do
   {
   	clrscr();
      encabezado();
      gotoxy(30,7);
      cout<<"REGSITRO DE UN NUEVO ESTUDIANTE";
      gotoxy(41,9);
      cout<<"ESTUDIANTES";


      cout<<"  "<<endl;


      gotoxy(28,32);
      cout<<"Desea realizar otro registro S/N?: ";
      cin>>repetir;


   }while((repetir=='s')||(repetir=='S'));


}
void asignaciones()
{

   char repetir;
   do
   {
   	clrscr();
      encabezado();
      gotoxy(35,8);
      cout<<"ASIGNACIONES";
      gotoxy(28,32);
      cout<<"Desea realizar otro registro S/N?: ";
      cin>>repetir;


   }while((repetir=='s')||(repetir=='S'));


}

void reportes()
{

char opcion;
   do
   {
      clrscr();
      encabezado();
      gotoxy(38,8);
   	cout<<"REPORTES"<<endl;
  		gotoxy(15,12);
   	cout<<"a.  Por Curso"<<endl;
   	gotoxy(15,14);
   	cout<<"b.  Por Estudiante"<<endl;
   	gotoxy(15,16);
  	 	cout<<"c.  Por Catedratico"<<endl;
  	 	gotoxy(15,18);
   	cout<<"d.  Estudiantes con mayor promedio (Por semestre)"<<endl;
      gotoxy(15,20);
   	cout<<"e.  Estudiantes Aprobados"<<endl;
      gotoxy(15,22);
   	cout<<"f.  Estudiantes Con Cursos Retrasadas"<<endl;
      gotoxy(30,27);
     	cout<<"R.  REGRASAR AL MENU PRINCIPAL"<<endl;


      gotoxy(38,32);
      cout<<"OPCION---|   |";
      gotoxy(49,32);
      cin>>opcion;

      switch(opcion)
      {
      	case 'a':
         			cursos();
         			break;
         case 'b':
         			catedraticos();
         			break;
         case 'c':
         			estudiantes();
         			break;
         case 'd':
         			asignaciones();
         			break;

      }

    }while((opcion!='r')&&(opcion!='R'));



}



//DISEÑOS --------------------------------------------------------------------------------------------
void encabezado()
{
   gotoxy(1,1);
	cout<<"__________________________________________________________________________________________";
   gotoxy(26,3);
   cout<<"UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA";
   gotoxy(1,5);
   cout<<"==========================================================================================";


}

void estilo()
{
//horizontal LARGO
	for(int i=31;i<59;i++)
   {

   	gotoxy(i,13); cout<<char(196);
      gotoxy(i,19); cout<<char(196);
      gotoxy(i,25); cout<<char(196);
      gotoxy(i,31); cout<<char(196);
   }
   //horizontal CORTO
	for(int i=31;i<34;i++)
   {

   	gotoxy(i,10); cout<<char(196);
      gotoxy(i,16); cout<<char(196);
      gotoxy(i,22); cout<<char(196);

   }
   gotoxy(31,10); cout<<char(218);
   gotoxy(33,10); cout<<char(191);
   gotoxy(31,16); cout<<char(218);
   gotoxy(33,16); cout<<char(191);
   gotoxy(31,22); cout<<char(218);
   gotoxy(33,22); cout<<char(191);


   //vertical 1 INGRESO DE DATOS
   for(int j=11;j<13;j++)
   {
   	gotoxy(31,j); cout<<char(179);
      gotoxy(33,j); cout<<char(179);
   }
   gotoxy(31,13); cout<<char(192);
   gotoxy(33,13); cout<<char(193);


   //vertical 2 REPORTES
   for(int j=17;j<19;j++)
   {
   	gotoxy(31,j); cout<<char(179);
      gotoxy(33,j); cout<<char(179);
   }
   gotoxy(31,19); cout<<char(192);
   gotoxy(33,19); cout<<char(193);

   //vertical 3 SALIR
   for(int j=23;j<25;j++)
   {
   	gotoxy(31,j); cout<<char(179);
      gotoxy(33,j); cout<<char(179);
   }
   gotoxy(31,25); cout<<char(192);
   gotoxy(33,25); cout<<char(193);


}

void estilo_ing_datos()
{

   //horizontal LARGO
	for(int i=19;i<40;i++)
   {
   	gotoxy(i,11); cout<<char(196);
      gotoxy(i,13); cout<<char(196);
      gotoxy(i,19); cout<<char(196);
      gotoxy(i,21); cout<<char(196);
   }

   //horizontal CORTO
	for(int i=19;i<20;i++)
   {
   	gotoxy(i,11); cout<<char(196);
      gotoxy(i,19); cout<<char(196);
   }
//__________________________________________
   //vertical a
   for(int j=12;j<13;j++)
   {
   	gotoxy(19,j); cout<<char(179);
      gotoxy(21,j); cout<<char(179);
   	gotoxy(40,j); cout<<char(179);
   }
   //esquinas superior a
   gotoxy(19,11); cout<<char(218);
   gotoxy(21,11); cout<<char(194);
   //esquinas
   gotoxy(19,13); cout<<char(192);
   gotoxy(21,13); cout<<char(193);
   gotoxy(40,11); cout<<char(191);
   gotoxy(40,13); cout<<char(217);
	gotoxy(20,12);
   cout<<"a"<<endl;


//__________________________________________
   //vertical c
   for(int j=20;j<21;j++)
   {
   	gotoxy(19,j); cout<<char(179);
      gotoxy(21,j); cout<<char(179);
      gotoxy(40,j); cout<<char(179);
   }
   //esquinas superior c
   gotoxy(19,19); cout<<char(218);
   gotoxy(21,19); cout<<char(194);

   //esquinas
   gotoxy(19,21); cout<<char(192);
   gotoxy(21,21); cout<<char(193);
   gotoxy(40,19); cout<<char(191);
   gotoxy(40,21); cout<<char(217);
   gotoxy(20,20);
   cout<<"c"<<endl;


}
