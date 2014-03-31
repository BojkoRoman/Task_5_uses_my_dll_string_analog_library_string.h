#include <iostream>
#include "header_string.h"
#include "header_function.h"
using namespace std;

void Welcome()
{
	cout << "�������� ��� ����������� my_dll_string ������ �i��i����� string.h (�����i� strcpy, strcat, ...) ���� �.\n";
	cout << "�� �������� ������� ���� ����� �����i� i �� ������i��� ���������� ��."<<endl;
	cout << "\t Copyright 2014 by Roman Bojko\n";
}
void Enter()
{
	int number;

	cout << "�����i�� ��� �����i� �� ���� ��������������� : \n";
	cout << "\t������� strcpy  ������i�� 1.\n";
	cout << "\t������� strncpy ������i�� 2.\n";
	cout << "\t������� strcat  ������i�� 3.\n";
	cout << "\t������� strncat ������i�� 4.\n";
	cout << "\t������� strcmp  ������i�� 5.\n";
	cout << "\t������� strncmp ������i�� 6.\n";
	cout << "\n\t EXIT Enter 0.\n";
	cin >> number;
	
	switch(number){
	    case 0:
			 cout << "\t\t~��-��~"<<endl;
			 for( int i = 0; i < 80; ++i )
			 {
				 cout <<"-";
			 }
			 system("pause");
			 exit(1);
		break;
		case 1: 
			cout << "\t�� ������� �����i� strcpy \n\n";
			MyStrCpy();  
		break;
		case 2:
			cout << "\t�� ������� �����i� strncpy \n\n";
			MyStrnCpy();
		break;
		case 3:
			cout << "\t�� ������� �����i� strcat \n\n";
			MyStrCat();
		break;
		case 4:
			cout << "\t�� ������� �����i� strncat \n\n";
			MyStrnCat();
		break;
		case 5:
			cout << "\t�� ������� �����i� strcmp \n\n";
			MyStrCmp();
		break;
		case 6:
			cout << "\t�� ������� �����i� strncmp \n\n";
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
		cout << "\t�� ������� ������� ����\n";
		cout << "\n\t��������� �������� �� ���..?\n\n";
		cout << "\n\t1 ��� ---- 2 ͳ\n\n";
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
			 cout << "\t\t~��-��~"<<endl;
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
	cout << "�����i� Strcpy() ��������������� ��� ���i������ ��i��� ������ ����� � ������"<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i��� ����� :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 };
	cin.clear();
	cin.sync();
	cout <<"����i�� �����, ���� �� ���i���� ����� "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrcpy( string,string1 );
	cout << "��������� : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~��-��~"<<endl;
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
	cout << "�����i� Strncpy() ��������������� ��� ���i������  ' num ' ������ ������i� ����� str2 � ����� str1."<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i��� ����� :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"����i�� �����, ���� �� ���i���� ����� "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i�� �i���i��� ������ ������i� ����� : "<< string1 <<" ����� �� ���i���� ����� "<<string<<endl;
	int num;
	cin >> num;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrncpy( string,string1,num );
	cout << "��������� : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~��-��~"<<endl;
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
	cout << "�����i� Strcat() ��������������� ��� ��������� ����� str2 ��  ����� str1."<<endl;
	char string[255] = "Hello World!_";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i��� ����� :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"����i�� �����, ���� �� �������� ��  ����� "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrcat( string,string1);
	cout << "��������� : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~��-��~"<<endl;
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
	cout << "�����i� Strncat() ��������������� ��� ���������  ' num ' ������ ������� ����� str2 �� ����� str1."<<endl;
	char string[255] = "Hello World!_";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i��� ����� :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"����i�� �����, ���� �� �������� ��  ����� "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i�� �i���i��� ������ ������i� ����� : "<< string1 <<" ��i �� �������� �� ����� "<<string<<endl;
	int num;
	cin >> num;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	myStrncat( string,string1,num);
	cout << "��������� : " <<string<<endl;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~��-��~"<<endl;
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
	cout << "�����i� Strcmp() ��������������� ��� ��������� ���� �����."<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i��� ����� :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"����i�� ��i� �����, ��� ��������� � ������ "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"���� ����� �i��i ���������� ' �i��i ', ���� �, ��� �� �����i ���� ' ���i��i '."<<endl;
	if(myStrcmp( string,string1) == 0 )
	{
		cout << "����� �i��i" <<endl;
	}else
	{
		cout << "����� ���i��i" <<endl;
	}
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~��-��~"<<endl;
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
	cout << "�����i� Strncmp() ��������������� ��� ��������� ' num ' ������ ������� ���� �����."<<endl;
	char string[255] = "Hello World!";  
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"����i��� ����� :  ";
	cout << string <<endl; 
     for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cin.clear();
	cin.sync();
	cout <<"����i�� ��i� �����, ��� ��������� � ������ "<<string<<endl;
	char string1[255]; 
	cin.getline( string1,255 ); 
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	 cout <<"����i�� �i���i��� ������ ������i� ����� : "<< string1 <<" ��i �� ���i������ � ' num ' ������� ��������� ����� "<<string<<endl;
	int num;
	cin >> num;
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout <<"���� ����� "<<num<<" ������� ����� "<<string<<" �i��i � ������� "<<num<<" ��������� ����� "<<string1<<" ,��� ���������� ' �i��i ', ���� �, ��� �� �����i ���� ' ���i��i '."<<endl;
	for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\t ��������� : ";
	if(myStrncmp( string,string1,num) == 0 )
	{
		cout << "����� �i��i" <<endl;
	}else
	{
		cout << "����� ���i��i" <<endl;
	}
	 for(int i = 0; i < 80; ++i)
			 {
				 cout <<"-";
			 }
	cout << "\n\t��������� �������� �� ���..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";

	cin >> a;
			switch(a)
			{
			case 1:
				Welcome();
				Enter();
				break;
			case 2:
				cout << "~��-��~"<<endl;
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