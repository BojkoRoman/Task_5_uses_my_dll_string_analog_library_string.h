#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API __declspec(dllimport) 
#endif

#ifndef Strings_Library_H_
#define Strings_Library_H_

/**
* @brief				������� myStrlen() �������� ����� �����.
* @param	[in]		c_str �������� �� �����
* @return	count		����� �����
*/
int myStrlen(char* c_str);
/**
* @brief				������� myStrcpy() ��������������� ��� ��������� ����� str2 � str1. 
*						�������� str2 �� ���� ���������� �� �����, �� ������������ �����
* @param	[in]		*str1 �������� �� �����, ���� ���� ���������� ����� str2
*
*			[in]		*str2 �������� �� ����� ���� ��������� � �� ���������� �����
*
* @return	*str1		������� �������� �� str1
*/
char* myStrcpy(char *str1, char *str2);
/**
* @brief				������� myStrncpy() ��������������� ��� ���������  " num " ������ ������� ����� str2 � ����� str1.
* @param	[in]		str1 �������� �� �����, ���� ���� ���������� ����� str2
* 			[in]		str2 �������� �� ����� ���� ���������
* 			[in]		n ������� ����������� �������
* @return	*str1		address of copied string (destination)
*/
char* myStrncpy(char *str1,  char *str2, int num);
/**
* @brief				������� myStrcat() ��������������� ��� ��������� ����� str2 ��  ����� str1.
* @param	[in]		*str1 �������� �� �����, ���� ���� ���������� ����� str2
*
*			[in]		*str2 �������� �� �����, ���� ���� ����������
*
* @return	*str1		������� �������� �� str1
*/
char* myStrcat(char *str1, const char *str2);
/**
* @brief				������� myStrnccat() ��������������� ��� ���������  " num " ������ ������� ����� str2 �� ����� str1.
* @param	[in]		str1 �������� �� �����, �� ����� ���� ������ ����� str2
* 			[in]		str2 �������� �� ����� ���� ��������
* 			[in]		num  ������� ������� �������
* @return	*str1		������� �������� �� str1
*/
char* myStrncat(char *str1, char *str2, int num);
/**
* @brief				������� myStrcmp() ������� ��� �����.
* @param	[in]		str1 �������� �� ������ �����
* 			[in]		str2 �������� �� ������ �����
* @return	if			str1 < str2 : '-1', if str1 > str2 : '1', if str1 == str2 : '0'
*/
int myStrcmp(char str1[], char str2[]);
/**
* @brief				������� myStrncmp() ������� " num " ������ ������� ���� �����.
* @param	[in]		str1 �������� �� ������ �����
* 			[in]		str2 �������� �� ������ �����
* @return	if			str1 < str2 : '-1', if str1 > str2 : '1', if str1 == str2 : '0'
*/
int myStrncmp(char *str1, char *str2,int num);
#endif