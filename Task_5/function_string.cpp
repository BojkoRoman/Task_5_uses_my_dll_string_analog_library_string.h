#include <iostream>
#include "header_string.h"
#include "header_function.h"
using namespace std;

void Welcome()
{
	cout << "Програма яка використовує my_dll_string аналог бiблiотеки string.h (функцiї strcpy, strcat, ...) мови С.\n";
	cout << "Ця програма пояснює суть кожної функцiї i дає можливiсть спробувати їх."<<endl;
	cout << "\t Copyright 2014 by Roman Bojko\n";
}
void Enter()
{
	int number;

	cout << "Виберiть яку функцiю ви буде використовувати : \n";
	cout << "\tФункцію strcpy  натиснiть 1.\n";
	cout << "\tФункцію strncpy натиснiть 2.\n";
	cout << "\tФункцію strcat  натиснiть 3.\n";
	cout << "\tФункцію strncat натиснiть 4.\n";
	cout << "\tФункцію strcmp  натиснiть 5.\n";
	cout << "\tФункцію strncmp натиснiть 6.\n";
	cout << "\n\t EXIT Enter 0.\n";
	cin >> number;
	
	switch(number){
	    case 0:
			 cout << "\t\t~Па-Па~"<<endl;
			 for( int i = 0; i < 80; ++i )
			 {
				 cout <<"-";
			 }
			 system("pause");
			 exit(1);
		break;
		case 1: 
			cout << "\tВи вибрали функцiю strcpy \n\n";
			MyStrCpy();  
		break;
		case 2:
			cout << "\tВи вибрали функцiю strncpy \n\n";
			MyStrnCpy();
		break;
		case 3:
			cout << "\tВи вибрали функцiю strcat \n\n";
			MyStrCat();
		break;
		case 4:
			cout << "\tВи вибрали функцiю strncat \n\n";
			MyStrnCat();
		break;
		case 5:
			cout << "\tВи вибрали функцiю strcmp \n\n";
			MyStrCmp();
		break;
		case 6:
			cout << "\tВи вибрали функцiю strncmp \n\n";
			MyStrnCmp();
		break;
		default:
			ErrorExit();
	}
}

void ErrorEnter()
{
	int a;
	while ( ( ! ( cin >> a ) ) || ( a < 0 ) || ( a > 6 ) || cin.peek() != '\n' )
   {
	ErrorExit();
	}
} 
void ErrorExit()
{
	int a;
	int b;
	while ( ( ! ( cin >> a ) ) || ( a < 0 ) || ( a > 2 ) || cin.peek() != '\n' )
	{
		cout << "\tВи зробили поганий вибір\n";
		cout << "\n\tЗапустити програму ще раз..?\n\n";
		cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		cin.clear();
        cin.sync();
		cin >> b;
			switch(b)
		{
		case 1:
			 Welcome();
			 Enter();
		break;
		case 2:
			 cout << "\t\t~Па-Па~"<<endl;
			 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
			 system("pause");
			 exit(1);
			 break;
		default:
			ErrorEnter();
		}
		cin.clear();
        cin.sync();
	}
	
}

void MyStrCpy()
{
	int a;
	cout << "Функцiя Strcpy() використовується для копiювання вмiсту одного рядка у другий"<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Оригiнал Рядка :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 };
	cin.clear();
	cin.sync();
	cout <<"Введiть рядок, яким ви замiните рядок "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrcpy( string,string1 );
	cout << "Результат : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
				 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
				system("pause");
				exit(1);
				break;
			default:
				ErrorExit();

			}
}

void MyStrnCpy()
{
	int a;
	cout << "Функцiя Strncpy() використовується для копiювання  ' num ' перших символiв рядка str2 у рядок str1."<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Оригiнал Рядка :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"Введiть рядок, яким ви замiните рядок "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Введiть кiлькiсть перших символiв рядка : "<< string1 <<" якими ви замiните рядок "<<string<<endl;
	int num;
	cin >> num;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrncpy( string,string1,num );
	cout << "Результат : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
				 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
				system("pause");
				exit(1);
				break;
			default:
				ErrorExit();

			}
}

void MyStrCat()
{
	int a;
	cout << "Функцiя Strcat() використовується для додавання рядка str2 до  рядка str1."<<endl;
	char string[255] = "Hello World!_";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Оригiнал Рядка :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"Введiть рядок, який ви приєднаєте до  рядка "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrcat( string,string1);
	cout << "Результат : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
				 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
				system("pause");
				exit(1);
				break;
			default:
				ErrorExit();

			}
}

void MyStrnCat()
{
	int a;
	cout << "Функцiя Strncat() використовується для додавання  ' num ' перших символів рядка str2 до рядка str1."<<endl;
	char string[255] = "Hello World!_";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Оригiнал Рядка :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"Введiть рядок, який ви приєднаєте до  рядка "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Введiть кiлькiсть перших символiв рядка : "<< string1 <<" якi ви приєднаєте до рядка "<<string<<endl;
	int num;
	cin >> num;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrncat( string,string1,num);
	cout << "Результат : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
				 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
				system("pause");
				exit(1);
				break;
			default:
				ErrorExit();

			}
}

void MyStrCmp()
{
	int a;
	cout << "Функцiя Strcmp() використовується для порівняння двох рядків."<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Оригiнал Рядка :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"Введiть свiй рядок, для порівняння з рядком "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Якщо рядки рiвнi виведеться ' Рiвнi ', якщо ні, тоді на екранi буде ' Нерiвнi '."<<endl;
	if(myStrcmp( string,string1) == 0 )
	{
		cout << "Рядки Рiвнi" <<endl;
	}else
	{
		cout << "Рядки Нерiвнi" <<endl;
	}
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
				 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
				system("pause");
				exit(1);
				break;
			default:
				ErrorExit();

			}
}

void MyStrnCmp()
{
	int a;
	cout << "Функцiя Strncmp() використовується для порівняння ' num ' перших символів двох рядків."<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Оригiнал Рядка :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"Введiть свiй рядок, для порівняння з рядком "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	 cout <<"Введiть кiлькiсть перших символiв рядка : "<< string1 <<" якi ви порiвняєте з ' num ' першими символами рядка "<<string<<endl;
	int num;
	cin >> num;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"Якщо перші "<<num<<" символи рядка "<<string<<" рiвнi з першими "<<num<<" символами рядка "<<string1<<" ,тоді виведеться ' Рiвнi ', якщо ні, тоді на екранi буде ' Нерiвнi '."<<endl;
	for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\t Результат : ";
	if(myStrncmp( string,string1,num) == 0 )
	{
		cout << "Рядки Рiвнi" <<endl;
	}else
	{
		cout << "Рядки Нерiвнi" <<endl;
	}
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\tЗапустити програму ще раз..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~Па-Па~"<<endl;
				 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
				system("pause");
				exit(1);
				break;
			default:
				ErrorExit();

			}
}
