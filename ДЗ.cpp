﻿// ДЗ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Напишите программу, проверяющую число, введенное с клавиатуры на четность. 

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "rus");
    cout << "Введите число для проверки на четность: "<< endl;

    int a;
    cin >> a;


    if (a%1 == 0)
    {
        cout << "Число " << a << " чётное!" << endl;
    }

    else 
    {

        cout << "Число " << a << " не чётное!" << endl;
    }
}


