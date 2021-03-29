/*
**********  Fifth task on C++ course                                         ****
**********  Filename >main.cpp                                               ****
**********  IDE > QT Creator 4.13.2||CodeBlocks 20.03 + GCC 10.2.0           ****
**********  Created by > "~ORDA~" , Anton Bondarenko                         ****
**********  Date 29.03.2021                                                  ****
*/



//1) DONE● Написать функцию которая выводит массив double чисел на экран. Параметры функции это сам массив и его размер. Вызвать эту функцию из main.
//2) Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0.
//     Выводить на экран массив до изменений и после.
//3)DONE●Задать пустой целочисленный массив размером 8. Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22. Вывести массив на экран.
//4)DONE● * Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным), при этом метод должен циклически сместить все элементы массива на n позиций.
//5) ** Написать метод, в который передается не пустой одномерный целочисленный массив, метод должен вернуть истину если в массиве есть место, в котором сумма левой и правой части массива равны.
//      Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false, checkBalance ([10, || 1, 2, 3, 4]) → true. Абстрактная граница показана символами ||, эти символы в массив не входят.


#include <QCoreApplication>
#include <main.h>


using namespace std;

int main(int argc, char *argv[])
{
    double arr[ARR_SIZE];
    int task2_arr[8]={0};
    int task4_arr[ARR_SIZE]={0};
    int num_of_mov;
    int task5_1_mass[5]={1, 1, 1, 2, 1};
    int task5_2_mass[5]={2, 1, 1, 2, 1};
    int task5_3_mass[5]={10, 1, 2, 3, 4};

   cout <<"1St task in process\n";
   Task1_Func(arr, ARR_SIZE);


   cout <<"\n3RD task in process\n";
   Task3_Func(task2_arr);



   cout <<"\n4TH task in process\n";

   cout <<"Hey Mr, Wee need your data? please enter quantity of moving interation (1...50): ";
   cin  >>num_of_mov;
   Task4_Func (task4_arr, num_of_mov);

   cout <<"\n5TH task in process\n";
   cout <<"checking [1, 1, 1, 2, 1]\n";
   if(checkmassive(task5_1_mass,5))
   {
       cout<<"TRUE\n";
   }
    else
       cout<<"FALSE\n";

   cout <<"checking [2, 1, 1, 2, 1]\n";
   if(checkmassive(task5_2_mass,5))
   {
       cout<<"TRUE\n";
   }
    else
       cout<<"FALSE\n";
   cout <<"checking [10, 1, 2, 3, 4]\n";
   if(checkmassive(task5_3_mass,5))
   {
       cout<<"TRUE\n";
   }
    else
       cout<<"FALSE\n";


   //QCoreApplication a(argc, argv);





    return 0;
}


