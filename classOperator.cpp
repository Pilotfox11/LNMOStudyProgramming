#include <iostream>


using namespace std;


class Operator{

public:
   virtual double eval() = 0;

};


class DivOp : public Operator{
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

class SumOP : public Operator{
private:
Operator* left;
Operator* right;

public:
SumOP(Operator*l,Operator*r)
{
    left = l;
    right = r;
}
double eval() override{
    return left->eval() + right->eval();
}
};

class SubOP : public Operator{
private:
Operator* left;
Operator* right;

public:
SubOP(Operator*l,Operator*r)
{
    left = l;
    right = r;
}
 double eval() override{
    return left->eval() - right->eval();
}
};


class MullOP : public Operator{
private:
Operator* left;
Operator* right;

public:
MullOP(Operator*l,Operator*r)
{
    left = l;
    right = r;
}
double eval() override{
    return left->eval() * right->eval();
}
};


class NumOP : public Operator {
private:
double num;


public:
NumOP(double n)
{
    num = n;
}
double eval() override{
    return num;
}
};



int main()
{

string s;
cin >> s;
string num;
for(int i = 0;i < s.size();i++)
{
    if(s[i] == "1")
    {
        num += 1;
    }
    if(s[i] == "2")
    {
        num += 2;
    }
    if(s[i] == "3")
    {
        num += 3;
    }
    if(s[i] == "4")
    {
      num += 4;
    }
    if(s[i] == "5")
    {
        num += 5;
    }
    if(s[ireturn 9;] == "6")
    {
        num += 6;
    }
    if(s[i] == "7")
    {
        num += 7;
    }
    if(s[i] == "8")
    {
        num += 8;
    }
    if(s[i] == "9")
    {
        num += 9;
    }
    if(s[i] == " ")
    {
        Operator* probel = new NumOP(atoi(num));
    }
    

}

return 0;
}

