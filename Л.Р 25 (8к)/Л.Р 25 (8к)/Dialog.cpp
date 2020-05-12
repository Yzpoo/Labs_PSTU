#include "Dialog.h"

//�����������
Dialog::Dialog(void) :List()
{
	EndState = 0;
}

//����������
Dialog::~Dialog(void)
{
}

//��������� �������
void Dialog::GetEvent(TEvent& event)
{

	string s;
	string param;
	char code;
	cout << '>';
	cin >> s;
	code = s[0];//������ ������ �������
	event.what = evMessage; //�������� 
	switch (code)
	{
	case 'm':event.command = cmMake; break; //������� ������ �������� []
	case '+': event.command = cmAdd; break; //�������� ������ � ������
	case '-': event.command = cmDel; break; //������� ������ �� ������
	case 's': event.command = cmShow; break; //�������� ������
	case '?': event.command = cmGet; break; //�������� �������� ������ �� �������
	case 'q': event.command = cmQuit; break; //����� ������
	default: event.command = evNothing;	//��������� ����
	}

	//�������� ��������� �������, ���� ��� ����
	if (s.length() > 1)
	{
		param = s.substr(1, s.length() - 1);

		int A = atoi(param.c_str());//����������� ������� � �����
		event.a = A;//���������� � ���������
	}
}

int Dialog::Execute()
{
	TEvent event;
	do 
	{
		EndState = 0;
		GetEvent(event); //�������� �������
		HandleEvent(event); //���������� �������
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
	event.what = evNothing; //������ �������
}

void Dialog::EndExec()
{
	EndState = 1;
}

//���������� �������
void Dialog::HandleEvent(TEvent& event)
{
	if (event.what == evMessage)
	{
		switch (event.command)
		{
		case cmMake:					//�������� ������
			if (event.a <= 0)			//���� �������� ����� <= 0
			{
				cout << "enter correct m[number]\n";
			}
			else
			{
				cout << "Size = " << event.a << endl;
				size = event.a; //������ ������
			}
			ClearEvent(event);			//������� �������
			break;

		case cmAdd://����������
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

		case cmDel://��������
			Del(); 
			ClearEvent(event);
			break;

		case cmShow:
			cout << "\nSize = " << size << endl;	
			cout << "Current = " << current << endl;
			Show(); //��������
			ClearEvent(event);
			break;

		case cmGet: //�������� �� �������
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
			EndExec(); //�����
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