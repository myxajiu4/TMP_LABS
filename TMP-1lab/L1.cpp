#include "stdafx.h"
#include <fstream> 
#include <iostream> 
#include <cstring> 
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char str1[10][50];
	char str2[10][50];

	ifstream file1("file1.txt"); // открытие первого файла
	ifstream file2("file2.txt"); // открытие второго файла


	//считывание первого файла							 
	{ int i = 0;
	while (file1) {
		const int max_lenght = 50;
		do {
			file1.getline(str1[i], 50);
			i++;
		} while (!file1.eof());
	}
	file1.close();
	}


	//считывание второго файла
	{ int i = 0;
	while (file2) {
		const int max_lenght = 50;
		do {
			file2.getline(str2[i], 50);
			i++;
		} while (!file2.eof());
	}
	file2.close();
	}


	//printf содержание первого файла 
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			printf_s("%c", str1[j][i]);
		}
		printf_s("\n");
	}
	printf_s("\n");

	// printf содержание второго файла
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			printf_s("%c", str2[j][i]);
		}
		printf_s("\n");
	}
	printf_s("\n");


	//различие между ПЕРВЫМ И ВТОРЫМ
	for (int i = 0; i < 3; i++) {
		if ((strcmp(str1[i], str2[i]) > 0) || strcmp(str1[i], str2[i]) < 0) {
			printf_s("file1.txt %d ", i + 1);
			for (int j = 0; j < 3; j++) {
				printf_s("%c", str1[i][j]);
			}
			printf_s("\n");
		}
	}
	printf_s("\n");

	//различие между ВТОРЫМ И ПЕРВЫМ
	for (int i = 0; i < 3; i++) {
		if ((strcmp(str2[i], str1[i]) > 0) || strcmp(str2[i], str1[i]) < 0) {
			printf_s("file2.txt %d ", i + 1);
			for (int j = 0; j < 3; j++) {
				printf_s("%c", str2[i][j]);
			}
			printf_s("\n");
		}
	}
	printf_s("\n");
	system("pause");
	return 0;
}
