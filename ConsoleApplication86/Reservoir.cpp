#include<iostream>
#include "Reservoir.h"
using namespace std;

void Reservoir::Add(char* name)
{
    strcpy(this->name, name);
    cout << "ширина: ";
    cin >> width;
    cout << "длинна:";
    cin >> length;
    cout << "макс. глубина: ";
    cin >> depth;
}

void Reservoir::print()
{
    cout << "название: " << name << endl;
    cout << "ширина: " << width << endl;
    cout << "длинна:" << length << endl;
    cout << "глубина: " << depth << endl;
}

void Reservoir::Volume()
{

    cout << "ширина: " << length * width * depth << endl;
}

void Reservoir::Area()
{

    cout << "обл.: " << length * width << endl;
}

void Reservoir::Sravn()
{
    if (length * width * depth < 10000)
    {
        cout << name << " - бассеин" << endl;
    }
    else
    {
        cout << name << " - море" << endl;
    }

}

int Reservoir::Getsea()
{
    return length * width * depth;
}

Reservoir::Reservoir(const Reservoir& obj)
{

    strcpy(name, obj.name);

    //name
    //name = "obj.name";
    length = obj.length;
    width = obj.width;
    depth = obj.depth;
}

Reservoir::Reservoir()
{
    strcpy(name, "qwerty");
    length = 1 + rand() % 1000;
    width = 1 + rand() % 50;
    depth = 1 + rand() % 20;
}


Reservoir::~Reservoir()
{
    delete[] name;
    //cout << "del  ";

}