#include <conio.h>
#include <iostream>

struct el ////��������� � ���������� � �������� �����
{
 int x; 
 el *Next; 
};

class List //����� ������
{
 el *Begining; 
 public:
  List() {Begining=NULL;} 
 ~List();
 void Add(int x); ////������� ��� ���������� �������� � ������
 void Show();
};

List::~List() //���������� ������� �� �����
{
    while (Begining!=NULL)  //���� �� ������ �� ����� 
     {    
        el *t=Begining->Next; 
        delete Begining; 
        Begining=t; /***********������ ����� �� ���������*************/
     }
}

void List::Add(int x) /** ����� � ����� ��������: ������� ���������� ��������� � ������ */
{
 el *t=new el; //��� ������ ������ ���������� ������
t->x=x; /*����������
		   *x 
		   *� 
		   *������� 
		   *���������  el
		   */
t->Next=Begining; 
Begining=t; 
}

void List::Show() //������� ����������� ������ �� ������
 el *t=Begining; //! ���������� ���������, ��������� �� ������ ������

 while (t!=NULL) //���� �� ���� 
  cout<<t->x<<" "; 
  t=t->Next; 
 }
}

void main()
{
 clrscr();
  int N; ///����� 
  ///���������
  ///� 
  ///������
  int x; //�������� �������� � ������
  List First; /**********���������� ���� ������*************.

   cout<<"N = ";cin>>N; /*
						*
						*
						*
						*
						���������� ���������, �������� � ������
						*/
for (int i=0;i<N;i++)
 {
  cout<<i+1<<". x = "; cin>>x; //���� x � ����������
  First.Add(x); /*!
			  ���������� �������� � ������
 */
 }

First.Show(); /* ! ����� ������ �� ����� */
 getch();
}