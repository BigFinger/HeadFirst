#pragma once

class Observer;
class Subject{
public:
	virtual bool registerObserver(Observer* ob) = 0;
	virtual bool removeObserver(Observer* ob) = 0;
	virtual void notifyObservers() = 0;
};