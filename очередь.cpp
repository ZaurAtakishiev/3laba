#include <iostream>
#include <stdlib.h>

void main()
{
   List First;
      
   system("pause");
}
/* !
*структура
*элемент 
*списка
*/
  struct Struct
	  
    {
       int x;
       Struct *Next; 
    };


{
 Struct *t=Head; //// указатель
//// на начало
//// списка
 while (t!=NULL) /******************************Пока в списке что-то есть*****************************/

   {
     t=Head->Next; //Резерв адреса на следующий элемент списка
     delete Head;  /* !Освобождение памяти */

     Head=t;  

   } 
} 

class List
{
    Struct *Head,*Tail; /**Указатели на начало и конец*/
Struct
public:
     List():Head(NULL),Tail(NULL)
	 {
	 }; 
     ~List(); 
     void Add(int x); ////Функция 
	 ////заполнения структуры, 
	 ///добавления её в список как элемента
     void Print();
 };


List::~List() /*
			  *деструктор
			  *чтобы
			  *очистить
			  *память
			  */


void List::Add(int x)
{
    Struct *t=new Struct; //Выделение памяти для нового звена списка
    t->x=x; //Временное запоминание принятого параметра x
    t->Next=NULL; //Указание, что следующее звено новосозданной структуры пока пустое

    if (Head!=NULL) //Если список не пуст 
    {
        Tail->Next=t; //Указание, что следующее звено списка это новосозданная структура
        Tail=t;      
    }     else Head=Tail=t; //Если список не пуст, добавление первого элемента
} 


void List::Print()
{
    Struct *t=Head; 
     while (t!=NULL) 
     {
         cout<<t->x<<" "; 
         t=t->Next; 
     }
    cout<<endl;
}

