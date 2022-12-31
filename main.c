#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include <stdbool.h>
#include<graphics.h>

#include "splash.h"
#include "login.h"
#include "menu.h"


int main(void)
{
    system("cls");
    splash();
    login();
    menu();

    return 0;
}