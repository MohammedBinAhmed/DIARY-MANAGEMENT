#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include "cover.h"
#include "menu.h"
#include "password.h"

int main(void)
{
    int choice;
    splash();

    password();

    menu();

    return 0;
}