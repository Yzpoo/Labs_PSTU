#include "List.h"

//деструктор
List::~List()
{
	while (Head != NULL)                      
	{
		Node* temp = Head->next;     
		delete Head;                    
		Head = temp;                      
	}
}

List::List()
{
	Head = NULL;
}

//конструктор с параметрами
List::List(int n)
{
	Head = NULL;
	current = 0;
	size = n;
}

//добавление объекта в начало списка
void List::Add()
{
	Object* p;
	Node* temp = new Node;

	cout << "1.Person" << endl;
	cout << "2.Student" << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		Person* a = new Person;
		a->Input(); //ввод значений атрибутов
		p = a;		//p - указатель на объект
	}
	else if (y == 2)
	{
		Student* b = new Student;
		b->Input();
		p = b;
	}
	else
		return;
	if (current < size)
	{
		temp->data = p;        //data указывает на объект
		temp->next = Head;    //след объект - голова
		Head = temp;
		current++;			//колво заполненных ячеек списка
	}
}

//просмотр 
void List::Show()
{
	if (current == 0) 
		cout << "Empty" << endl;
	int i = 0;
	Node* p = Head;
	while (p != NULL)
	{
		cout << "  Index: " << i;
		p->data->Show();
		p = p->next;
		i++;
	}
}


int List::operator ()()
{
	return current;
}

void List::Del()
{
	if (current == 0)
		return;
	Node* temp = Head->next;
	delete Head;
	Head = temp;
	current--;
}