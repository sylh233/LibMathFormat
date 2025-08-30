#ifndef MATH_F
#define MATH_F

class mathf
{
private:
    int nume = 0;//分子
    int deno = 1;//分母
    int index = 1;//开几次方根
    void reduce_frac();
public:
    mathf(int,int,int);
    double value();
    void print();
};

#endif