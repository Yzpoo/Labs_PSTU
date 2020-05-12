#include "Dialog.h"

//конструктор
Dialog::Dialog(void) :List()
{
	EndState = 0;
}

//деструктор
Dialog::~Dialog(void)
{
}

//получение события
void Dialog::GetEvent(TEvent& event)
{

	string s;
	string param;
	char code;
	cout << '>';
	cin >> s;
	code = s[0];//первый символ команды
	event.what = evMessage; //непустое 
	switch (code)
	{
	case 'm':event.command = cmMake; break; //создать группу размером []
	case '+': event.command = cmAdd; break; //добавить объект в группу
	case '-': event.command = cmDel; break; //удалить объект из группы
	case 's': event.command = cmShow; break; //просмотр группы
	case '?': event.command = cmGet; break; //показать элементы группы по индексу
	case 'q': event.command = cmQuit; break; //конец работы
	default: event.command = evNothing;	//ошибочный ввод
	}

	//выделяем параметры команды, если они есть
	if (s.length() > 1)
	{
		param = s.substr(1, s.length() - 1);

		int A = atoi(param.c_str());//преобразуем парметр в число
		event.a = A;//записываем в сообщение
	}
}

int Dialog::Execute()
{
	TEvent event;
	do 
	{
		EndState = 0;
		GetEvent(event); //получить событие
		HandleEvent(event); //обработать событие
	} 
	while (!Valid());
	return EndState;
}

int Dialog::Valid()
{
	if (EndState == 0)
		return 0;
	else 
		return 1;
}

void Dialog::ClearEvent(TEvent& event)
{
	event.what = evNothing; //пустое событие
}

void Dialog::EndExec()
{
	EndState = 1;
}

//обработчик событий
void Dialog::HandleEvent(TEvent& event)
{
	if (event.what == evMessage)
	{
		switch (event.command)
		{
		case cmMake:					//создание группы
			if (event.a <= 0)			//если получено число <= 0
			{
				cout << "enter correct m[number]\n";
			}
			else
			{
				cout << "Size = " << event.a << endl;
				size = event.a; //размер группы
			}
			ClearEvent(event);			//очищаем событие
			break;

		case cmAdd://добавление
			if (size == 0)
			{
				cout << "Size = 0. Use m\n";
			}
			else if (current == size)
			{
				cout << "Current = size. Use m\n";
			}
			else
			{
				Add();
			}
			ClearEvent(event);
			break;

		case cmDel://удаление
			Del(); 
			ClearEvent(event);
			break;

		case cmShow:
			cout << "\nSize = " << size << endl;	
			cout << "Current = " << current << endl;
			Show(); //просмотр
			ClearEvent(event);
			break;

		case cmGet: //просмотр по индексу
			if (event.a < 0)
			{
				cout << "enter correct ?[number]\n";
				ClearEvent(event);
				break;
			}
			if (event.a >= current)
			{
				cout << "Index >= or size. Use correct index\n";
				ClearEvent(event);
				break;
			}
			cout << "  Index = " << event.a;
			Node* p;
			p = Head;
			for (int i = 0; i < event.a; i++)
			{
				p = p->next;
			}
			p->data->Show();
			ClearEvent(event);			
			break;

		case cmQuit:
			EndExec(); //выход
			ClearEvent(event);
			break;

		case evNothing:
			ClearEvent(event);
			break;

		default:
			ClearEvent(event);
		};
	};
}