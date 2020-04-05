#include"complexvector0.hpp"
CComplexVector0::CComplexVector0(const CComplexVector1 &k)
{
    n=k.n;
    arr=new ComplexNumber [n];
    for(int i=0;i<n;i++)
    {
        arr[i]=k.arr[i];
    }
}

const CComplexVector0 CComplexVector0::operator +(const CComplexVector0 &k)
{
    CComplexVector0 z(n);
    for(int i=0;i<n;i++)
    {
        z.arr[i]=arr[i]+k.arr[i];
    }
    return z;
}
const CComplexVector0 CComplexVector0::operator -(const CComplexVector0 &k)
{
    CComplexVector0 z(n);
    for(int i=0;i<n;i++)
    {
        z.arr[i]=arr[i]-k.arr[i];
    }
    return z;
}
const CComplexVector0 CComplexVector0::operator *(const CComplexVector0 &k)
{
     CComplexVector0 z(n);
    for(int i=0;i<n;i++)
    {
        z.arr[i]=arr[i]*k.arr[i];

    }
    return z;
}
CComplexVector0& CComplexVector0::operator =(const CComplexVector0 &k)
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
int CComplexVector0::output(const char* Filename)
{
        {
        FILE *o=stdout;
        freopen(Filename,"a",stdout);
        for(int i=0;i<n;i++)
         {
             arr[i].outp();
             cout<<",";
         }
         cout<<endl;
         fclose(stdout);
         freopen("CON","a",stdout);
         *stdout=*o;
         return 0;
    }


}
