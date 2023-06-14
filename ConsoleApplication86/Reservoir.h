#pragma once
class Reservoir
{
    char* name = new char[30];
    long long length;
    long long width;
    long long depth;
public:
    void Add(char*);
    void print();
    void Volume();
    void Area();
    void Sravn();
    int Getsea();

    Reservoir(const Reservoir& obj);


    Reservoir();
    ~Reservoir();
};