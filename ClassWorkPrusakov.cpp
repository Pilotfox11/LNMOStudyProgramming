#include <iostream>


using namespace std;


class Operator
{
     virtual double eval() = 0;


};


class DivOp : public Operator   //Деление двух чисел
{

    private:
    Operator* left;
    Operator* right;
    

    public:

    DivOp(Operator*l,Operator*r)
    {
        left = l;
        right = r;
    }
    double eval() override{
        return left->eval() / right->eval();
    } 
};


class SumOp : public Operator   //Сумма двух чисел
{

    private:
    Operator* left;
    Operator* right;
    

    public:

    SumOp(Operator*l,Operator*r)
    {
        left = l;
        right = r;
    }
    double eval() override{
        return left->eval() + right->eval();
    } 
};


class SubOp : public Operator   //Разность двух чисел
{

    private:
    Operator* left;
    Operator* right;
    

    public:

    SubOp(Operator*l,Operator*r)
    {
        left = l;
        right = r;
    }
    double eval() override{
        return left->eval() - right->eval();
    } 
};


class MullOp : public Operator  //Умнажение двух чисел
{

    private:
    Operator* left;
    Operator* right;
    

    public:

    MullOp(Operator*l,Operator*r)
    {
        left = l;
        right = r;
    }
    double eval() override{
        return left->eval() * right->eval();
    } 
};

class NumOp : public Operator  //Класс числа
{
private:
double num;


public:
NumOp(double n)
{
    num = n;
}
double eval() override{
    return num;
}

}