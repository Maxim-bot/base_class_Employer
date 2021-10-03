// base_class_Employer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>

using namespace std;

class Employer
{
protected:
	string name;
	int age;
	string posada;
public:
	Employer(string name,int age,string posada) {
		this->name = name;
		this->age = age;
		this->posada = posada;
	}
	~Employer() = default;

	virtual void Print() = 0;
};

class President:public Employer
{
public:
	President(string name, int age, string posada) :Employer(name,age,posada)
	{
		this->name = name;
		this->age = age;
		this->posada = posada;
	}
	void Print()
	{
		cout << name << " " << age << " " << posada << endl;
	}

};

class Manager :public Employer
{
public:
	Manager(string name, int age, string posada) :Employer(name, age, posada)
	{
		this->name = name;
		this->age = age;
		this->posada = posada;
	}
	void Print()
	{
		cout << name << " " << age << " " << posada << endl;
	}
};

class Worker :public Employer
{
public:
	Worker(string name, int age, string posada) :Employer(name, age, posada)
	{
		this->name = name;
		this->age = age;
		this->posada = posada;
	}
	void Print()
	{
		cout << name << " " << age << " " << posada << endl;
	}
};

int main()
{
	President* president = new President("Vasya Pupkin",33," president");
	president->Print();

	Manager* manager = new Manager("Ivan Ivanov", 30, "manager");
	manager->Print();

	Worker* worker = new Worker("Petr Petrov", 24, "worker");
	worker->Print();

}

