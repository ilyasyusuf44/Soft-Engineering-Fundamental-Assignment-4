#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include "menu.h"
#include <stdio.h>
void startmenu()
{
	printf("To choose a function, enter its letter label:\n\n"); 
	printf("1) Play a round\n");
	printf("2) Quit\n");
}

int getmenuoption()
{
	int option = 0;
	if (scanf("%d", &option) != 1)
	{
		fprintf(stderr, "invalid input\n");
	}
	return option;
}