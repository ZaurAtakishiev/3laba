#include <iostream>

struct List
{
    int x; /*
		   *э
		   *л
		   *е
		   *м
		   *е
		   *н
		   *т
		   */
    List *Next,*Head; /* !начало стека и указатель на следующий элемент */
};

////добавление
////элемента
////в
////список

void main()
{
    List *list=new List; 
    list->Head=NULL; 

    for (int i=0;i<10;i++) Add(i,&list); 
    Print(list); /***********выводим стек на экран**********/

void DeleteList(List *list);
   
}

void DeleteList(List *list)
{   
     while (list->Head!=NULL)  //Пока по адресу не пусто
     {   
        List *t=list->Head->Next; /*
								  *Временная 
								  *переменная для хранения адреса следующего элемента */
        delete list->Head; 
        list->Head=t; 
     }
}

void Print(List *list)
{
    List *t=list->Head; 
    while (t!=NULL)  
    {
        cout<<t->x<<" "; 
        t=t->Next; 
    }
}

void Add(int x, List **list) //Принимаем элемент стека и указатель на стек, при этом говорим, что принимаемый указатель будет сам по себе указателем
{
    List *t=new List; //!Выделяем память
    t->x=x; 
    t->Next=(*list)->Head; 
    (*list)->Head=t; /* !
					 *Сдвигаем 
					 *голову 
					 *на позицию 
					 *вперед 
					 */
}


