#include <iostream>

struct List
{
    int x; /*
		   *�
		   *�
		   *�
		   *�
		   *�
		   *�
		   *�
		   */
    List *Next,*Head; /* !������ ����� � ��������� �� ��������� ������� */
};

////����������
////��������
////�
////������

void main()
{
    List *list=new List; 
    list->Head=NULL; 

    for (int i=0;i<10;i++) Add(i,&list); 
    Print(list); /***********������� ���� �� �����**********/

void DeleteList(List *list);
   
}

void DeleteList(List *list)
{   
     while (list->Head!=NULL)  //���� �� ������ �� �����
     {   
        List *t=list->Head->Next; /*
								  *��������� 
								  *���������� ��� �������� ������ ���������� �������� */
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

void Add(int x, List **list) //��������� ������� ����� � ��������� �� ����, ��� ���� �������, ��� ����������� ��������� ����� ��� �� ���� ����������
{
    List *t=new List; //!�������� ������
    t->x=x; 
    t->Next=(*list)->Head; 
    (*list)->Head=t; /* !
					 *�������� 
					 *������ 
					 *�� ������� 
					 *������ 
					 */
}


