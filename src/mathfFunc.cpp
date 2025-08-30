#include <iostream>
#include <cmath>

#include "mathf.h"

mathf::mathf(int n,int d,int i)
{
    nume = n;
    if(d)
        deno = d;
    if(i)
        index = i;
}

double mathf::value()//提供值
{
    double frac = double(nume/deno);
    double result = pow(frac,1.0/index);

    return result;
}

void mathf::print()//打印值
{
    using std::cout;
    if(index!=1)
        cout << '(';
    cout << nume;
    if(deno!=1)
        cout << '/' << deno;
    if (index!=1)
        cout << ")^" << 1 << "/("
        << index <<')';
    
}

void mathf::reduce_frac()//约分分式
{
    int a=nume>deno?nume:deno,//较大值
    b=nume<deno?nume:deno;//较小值
    int c = a%b;
    while(c)
        {
            a=b;b=c;c=a%b;
        }
    nume/=c;deno/=c;
}