#include<iostream>
#include<stdio.h>
#include"complexvector.hpp"
#include"complexnumber.h"
#include"complexvector1.hpp"
#include"complexvector0.hpp"
int autotest();
int main(void)
{
    std::cout<<"begin"<<endl;
    FILE* first1;
    FILE* first2;

    first1=fopen("my.txt","w");
    fclose(first1);

    first2=fopen("your.txt","w");
    fclose(first2);
    scan("data.txt");
    cout<<autotest();
   /* CComplexVector1 a(3);
    CComplexVector1 b(3);
    a.setdata();
    b.setdata();
    CComplexVector1 m;
    cout<<"hey,16"<<endl;
    m=a+b;
    m.out();
    CComplexVector0 k(a);
    CComplexVector0 l(b);
    m.output("your.txt");
    cout<<"hey,16"<<endl;
    CComplexVector0 n;
    n=k*a;
    k.out();
    n.output("my.txt");*/


    return 0;
}
