#include <iostream>
#include <stdlib.h>

void main()
{
   List First;
      
   system("pause");
}
/* !
*���������
*������� 
*������
*/
  struct Struct
	  
    {
       int x;
       Struct *Next; 
    };


{
 Struct *t=Head; //// ���������
//// �� ������
//// ������
 while (t!=NULL) /******************************���� � ������ ���-�� ����*****************************/

   {
     t=Head->Next; //������ ������ �� ��������� ������� ������
     delete Head;  /* !������������ ������ */

     Head=t;  

   } 
} 

class List
{
    Struct *Head,*Tail; /**��������� �� ������ � �����*/
Struct
public:
     List():Head(NULL),Tail(NULL)
	 {
	 }; 
     ~List(); 
     void Add(int x); ////������� 
	 ////���������� ���������, 
	 ///���������� � � ������ ��� ��������
     void Print();
 };


List::~List() /*
			  *����������
			  *�����
			  *��������
			  *������
			  */


void List::Add(int x)
{
    Struct *t=new Struct; //��������� ������ ��� ������ ����� ������
    t->x=x; //��������� ����������� ��������� ��������� x
    t->Next=NULL; //��������, ��� ��������� ����� ������������� ��������� ���� ������

    if (Head!=NULL) //���� ������ �� ���� 
    {
        Tail->Next=t; //��������, ��� ��������� ����� ������ ��� ������������� ���������
        Tail=t;      
    }     else Head=Tail=t; //���� ������ �� ����, ���������� ������� ��������
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

