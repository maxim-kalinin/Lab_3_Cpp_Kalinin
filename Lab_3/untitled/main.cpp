#include <iostream>
#include <string.h>
#include <math.h>


using namespace std;



float funcKubChisla(float);
void funcOutChar(char chr[]);
void funcInitialization();
void printChar(int, char, char, char);

void funcPeregruz(float, int);
void funcPeregruz(float);
void funcPeregruz(int);

void funcPoiskMaxMin(int, int);


// глобальная переменная к заданию 4
int gPerem = 123;


int main()
{

    cout<< "Задание 1." <<endl;
    cout<< "Создать функцию с возвращаемым значением типа double," <<endl;
    cout<< "с параметром типа double. В функции вычислить куб числа." <<endl;

    double kubChisla=0;

    cout<< "Введите число:  " <<endl;
    cin >> kubChisla;

    kubChisla = funcKubChisla(kubChisla);

    cout<< "Куб числа равен:  " << kubChisla <<endl;

    cout<<endl<<endl<<endl;


//================================================================================


    cout<< "Задание 2." <<endl;
    cout<< "Создать функцию с параметром char, в теле функции вывод значения на экран," <<endl;
    cout<< "в символьном и в десятичном виде" <<endl;

    char strChar[20];

    cout << "Введите строку типа char:  " << endl;
    cin >> strChar;
    cout << endl;

    funcOutChar(strChar);

    cout<<endl;


//------------------------------------------------------------


cout<< "Задание 3." <<endl;
cout<< "Выполнить инициализацию" <<endl;
cout<< "Сopy initialization, Direct initialization, Uniform initialization" <<endl;
cout<< "Вычислить и вывести их min-max диапазон в десятичном виде на экран." <<endl;
cout<< "Нажмите ENTER для выполнения задания:" <<endl;
// задержка ожидания ENTER
cin.ignore();
cin.get();

funcInitialization();

cout<<endl<<endl;


//------------------------------------------------------------

cout<< "Задание 4." <<endl;
cout<< "Объявить глобальную и локальную переменную типа int с одним и тем же именем," <<endl;
cout<< "и вывести на экран консоли." <<endl;
cout<< "Нажмите ENTER для выполнения задания:" <<endl;
// задержка ожидания ENTER
cin.get();

int gPerem = 456;

cout << "это глобальная переменная ::gPerem:  "<< ::gPerem << endl;
cout << "это локальная переменная    gPerem:  "<< gPerem << endl;

cout<<endl<<endl;

//------------------------------------------------------------

cout<<"Задание 5."<<endl;
cout << "С какими аргументами можно вызывать функцию:" <<endl;
cout << "void printChar(int c=’a’, charb=’b’, char c=’c’, char d=’d’);" <<endl;
cout << "если определены параметры по умолчанию, привидите все значения вызова функции printChar." << endl;
cout<< "Нажмите ENTER для выполнения задания:" <<endl;
// задержка ожидания ENTER
cin.get();

cout<< "Ответ:" <<endl;
cout<< "Функцию можно вызвать с одним аргументом типа int и тремя аргументами типа char." <<endl;
cout<< "Все значения вызова функции:" <<endl;

printChar('a', 'b', 'c', 'd');

cout<<endl<<endl;

//-------------------------------------------------------------

cout<< "Задание 6." << endl;
cout<< "Выполнить перегрузку функций с двумя параметрами (float, int)" <<endl;
cout<< "которые делают вывод: тип данных размер в байтах." <<endl;
cout<< "Нажмите ENTER для выполнения задания:" <<endl;
// задержка ожидания ENTER
cin.get();

funcPeregruz(123.45, 111);
cout<<endl;

funcPeregruz(345.67f);
cout<<endl;

funcPeregruz(777);
cout<<endl<<endl;

//-------------------------------------------------------------

cout<< "Задание 7." << endl;
cout<< "Создать функцию поиска максимума, минимума." <<endl;
cout<< "В функциях два параметра, первый параметр для сдвига, второй сдвиг." <<endl;

int param = 0;
int sdvig = 0;

cout<< "Введите параметр-число для сдвига:   ";
cin >> param;
cout<< "Введите число величину сдвига:   ";
cin >> sdvig;
cout<<endl;
cout<< "Ответ:" <<endl;
cout<<endl;

funcPoiskMaxMin(param, sdvig);
cout<<endl<<endl;


  return 0;
}




//===============================================================================
//                               ФУНКЦИИ К ЗАДАНИЯМ
//===============================================================================




//--------------------------------  ЗАДАНИЕ 1  ----------------------------------

float funcKubChisla(float x)
{
   return x = x*x*x;
}



//--------------------------------  ЗАДАНИЕ 2  ----------------------------------

void funcOutChar(char chr[])
{
  cout<< "Символьный вид строки:   ";

  for(int i=0; i<strlen(chr); i++) cout<< chr[i];

  cout<<endl;

  for(int i=0; i<strlen(chr); i++)
     cout<< "ASCII значение символа  "<<chr[i]<<"  "<< (int)chr[i] << endl;

   cout<<endl<<endl;
}



//--------------------------------  ЗАДАНИЕ 3  ----------------------------------

void funcInitialization()
{
  cout<< "Сopy initialization (инициализация копированием) имеет вид:" <<endl;
  cout<< "int iValue = 123" <<endl;
  cout<< "Direct initialization (прямая инициализация) имеет вид:" <<endl;
  cout<< "int iValue (123)" <<endl;
  cout<< "Uniform initialization (с помощью фигурных скобок С++ 11) имеет вид:" <<endl;
  cout<< "int iValue {123}" <<endl;
  cout<<endl;

  cout<< "Диапазон типа  int" << endl;
  cout<< "значение  min   " << (int) pow(2, sizeof(int)*8) << endl;
  cout<< "значение  max   " << ~(int) pow(2, sizeof(int)*8) << endl;
  cout<<endl;

  cout<< "Диапазон типа  char" << endl;
  cout<< "значение  min   " << ~(int) pow(2, sizeof(char)*8)/2 << endl;
  cout<< "значение  max   " << (int) pow(2, sizeof(char)*8)/2-1 << endl;
  cout<<endl;

  cout<< "Диапазон типа  long int" << endl;
  cout<< "значение  min   " << (int) pow(2, sizeof(long int)*8) << endl;
  cout<< "значение  max   " << ~(int) pow(2, sizeof(long int)*8) << endl;
}




//--------------------------------  ЗАДАНИЕ 5  ----------------------------------

void printChar(int a='a', char b='b', char c='c', char d='d')
{
  cout<< "первый параметр   a  равен:  " << a <<endl;
  cout<< "второй параметр   b  равен:  " << b <<endl;
  cout<< "первый параметр   c  равен:  " << c <<endl;
  cout<< "первый параметр   d  равен:  " << d <<endl;
}



//--------------------------------  ЗАДАНИЕ 6  ----------------------------------

void funcPeregruz(float x, int y)
{
  cout<< "Функция 1"  <<endl;
  cout<< "Это перегруженная функция с параметрами float и int" <<endl;
  cout<< "тип float имеет размер:   " << sizeof(float) << "  байт"<<endl;
  cout<< "тип int имеет размер:   " << sizeof(int) << "  байт"<<endl;
  cout<< "введеный аргумент float равен:  " << x <<endl;
  cout<< "введеный аргумент int равен:    " << y <<endl;
}


void funcPeregruz(float x)
{
  cout<< "Функция 2"  <<endl;
  cout<< "Это перегруженная функция с параметром float" <<endl;
  cout<< "введеный аргумент равен:  " << x <<endl;
}

void funcPeregruz(int y)
{
  cout<< "Функция 3"  <<endl;
  cout<< "Это перегруженная функция с параметром int" <<endl;
  cout<< "введеный аргумент равен:  " << y <<endl;
}



//--------------------------------  ЗАДАНИЕ 7  ----------------------------------

void funcPoiskMaxMin(int param, int sdvig)
{
  int x = param;
  int maxChislo =0;
  int minChislo =0;

  cout<< "параметр для сдвига равен:               " << param <<endl;
  cout<< "параметр величины сдвига на кол-во бит:  " << sdvig <<endl;
  cout<<endl;

  // производим сдвиг числа
  param <<= sdvig;

  cout<< "введеный параметр после сдвига равен:  " << param <<endl;

  if(x > param)
   {
     maxChislo = x;
     minChislo = param;
   }

  if(x < param)
   {
     minChislo = x;
     maxChislo = param;
   }


if(x == param) cout<< "Введеное число и число после сдвига равны";
if(x != param)
{
  cout<< "Максимальное число между введеным параметром и получивщимся значением:  " << maxChislo;
  cout<<endl;
  cout<< "Минимальное число между введеным параметром и получивщимся значением:  " << minChislo;
}


   cout<<endl;
}
































