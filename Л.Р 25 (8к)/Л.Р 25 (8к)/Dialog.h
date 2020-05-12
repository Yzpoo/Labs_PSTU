#pragma once
#include "List.h"
#include "Event.h"
using namespace std;

class Dialog : public List
{
protected:
	int EndState;
public:
	Dialog(void);								//контруктор
	virtual ~Dialog(void);						//деструктор

	virtual void GetEvent(TEvent& event);		//получить событие
	virtual int Execute();						//главный цикл обработки событий
	virtual void HandleEvent(TEvent& event);	//обработчик
	virtual void ClearEvent(TEvent& event);		//очистить событие

	int Valid();								//проверка атрибута EndState
	void EndExec();								//обработка события «конец работы»
};

