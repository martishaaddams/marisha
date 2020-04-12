#include "complexvector.hpp"

CComplexVector::CComplexVector()
{
    n=0;
    arr=nullptr;
}
CComplexVector::CComplexVector(const int k)
{
        n=k;
        arr=new ComplexNumber[k];
}
CComplexVector::CComplexVector(const int k, const ComplexNumber *str)
{
    n=k;
    arr=new ComplexNumber[k];
    for(int i=0;i<n;i++)
    {
        arr[i]=str[i];
    }
}
CComplexVector::CComplexVector(const CComplexVector& k)
{
    n=k.n;
    arr=new ComplexNumber[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=k.arr[i];
    }

}
CComplexVector::~CComplexVector()
{
    delete arr;
    arr=nullptr;
    //std::cout<<"destructor worked"<<endl;
}

/*const CComplexVector& CComplexVector::operator +(const CComplexVector &k)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]+k.arr[i];
    }
    return *this;
}
const CComplexVector& CComplexVector::operator -(const CComplexVector &k)
{
    CComplexVector *z;
    z=new CComplexVector;
    z->n=n;
    for(int i=0;i<n;i++)
    {
        z->arr[i]=arr[i]-k.arr[i];
    }
    return z;
}
const CComplexVector& CComplexVector::operator *(const CComplexVector &k)
{
    for(int i=0;i<n;i++)
    {
        arr[i].outp();
        cout<<" ";
        arr[i]=arr[i]*k.arr[i];
        arr[i].outp();
        cout<<endl;
    }
    return *this;
}*/
CComplexVector& CComplexVector::operator =(const CComplexVector &k)
{
    n=k.n;
    delete arr;
    arr=new ComplexNumber [n];
    for(int i=0;i<n;i++)
    {
        arr[i]=k.arr[i];
    }
   // cout<<"basic"<<endl;
    return *this;
}
void CComplexVector::out()
{
    for(int i=0;i<n;i++)
    {
        arr[i].outp();
        if(i+1<n)std::cout<<",";

    }
    std::cout<<endl;
}
void CComplexVector::setdata()
    {
        for (int i=0;i<n;i++)
        {
            cin>>arr[i].a;
            cin>>arr[i].b;
        }
    }



