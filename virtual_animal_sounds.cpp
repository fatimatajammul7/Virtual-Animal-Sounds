#include <iostream>
#include <conio.h>
using namespace std;


class Animal
{
public:
	virtual char* speak()
	{
		return "speak() called.";
	}
	virtual ~Animal() 	
	{ 
		cout << "~Animal() called."<<endl;	
	}
};

class Dog: public Animal
{
public:
	char* speak()
	{
		return "woof!";
	}
	~Dog() 
	{ 
		cout << "~Dog() called."<<endl;		
	}

	

};

class Sheep: public Animal
{
public:
	char* speak()
	{
		return "bleat!";
	}
	~Sheep() 
	{ 
		cout << "~Sheep() called."<<endl;		
	}

	

};
class cows: public Animal
{
public:
	char* speak()
	{
		return "moo!";
	}
	~cows() 
	{ 
		cout << "~cows() called."<<endl;		
	}

	

};
class horses: public Animal
{
public:
	char* speak()
	{
		return "neigh!";
	}
	~horses() 
	{ 
		cout << "~horses() called."<<endl;		
	}

	

};
class Cat: public Animal
{
public:
	char* speak()
	{
		return "mew!." ;
	}

	~Cat() 
	{ 
		cout << "~Cat() called."<<endl;		
	}
};

void main()
{
	
	const int size = 5;
	Animal * myPets[size];
	int i = 0;
	char choose;
while (i<size)
{
	cout << "Press 1 for a Dog and 2 for a Cat and 3 for Sheep and 4 for Cow and 5 for Horse." << endl ;
	cin>>choose;
	switch (choose)
	{
		case '1':
			myPets[i] = new Dog;
			cout << "Dog added at position "<< i <<endl<<endl;
			i++;
			break;
		case '2':
			myPets[i] = new Cat;
			cout << "Cat added at position "<< i <<endl<<endl;
			i++;
			break;
		case '3':
			myPets[i] = new Sheep;
			cout << "Sheep added at position "<< i <<endl<<endl;
			i++;
			break;
		case '4':
			myPets[i] = new cows;
			cout << "Cow added at position "<< i <<endl<<endl;
			i++;
			break;
		case '5':
			myPets[i] = new horses;
			cout << "horse added at position "<< i <<endl<<endl;
			i++;
			break;
		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;
			break;
	}		

}

for(int I=0; I<size; I++)
{
	cout<<myPets[I]->speak()<<endl;
	delete myPets[I];
}




	system("pause");
}




 
