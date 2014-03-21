#include <conio.h>
#include <iostream>

struct el ////Структура с инфополями и адресным полем
{
 int x; 
 el *Next; 
};

class List //Класс Список
{
 el *Begining; 
 public:
  List() {Begining=NULL;} 
 ~List();
 void Add(int x); ////Функция для добавления значений в список
 void Show();
};

List::~List() //Деструктор вынесен за класс
{
    while (Begining!=NULL)  //Пока по адресу не пусто 
     {    
        el *t=Begining->Next; 
        delete Begining; 
        Begining=t; /***********Меняем адрес на следующий*************/
     }
}

void List::Add(int x) /** очень и очень подробно: функция добавления элементов в список */
{
 el *t=new el; //При каждом вызове выделяется память
t->x=x; /*Записываем
		   *x 
		   *в 
		   *элемент 
		   *структуры  el
		   */
t->Next=Begining; 
Begining=t; 
}

void List::Show() //Функция отображения списка на экране
 el *t=Begining; //! Определяем указатель, указывает на начало списка

 while (t!=NULL) //пока не ноль 
  cout<<t->x<<" "; 
  t=t->Next; 
 }
}

void main()
{
 clrscr();
  int N; ///Число 
  ///элементов
  ///в 
  ///списке
  int x; //Элементы вводимые в список
  List First; /**********Переменная типа список*************.

   cout<<"N = ";cin>>N; /*
						*
						*
						*
						*
						количество элементов, вводимых в список
						*/
for (int i=0;i<N;i++)
 {
  cout<<i+1<<". x = "; cin>>x; //Ввод x с клавиатуры
  First.Add(x); /*!
			  Добавление элемента в список
 */
 }

First.Show(); /* ! Вывод списка на экран */
 getch();
}