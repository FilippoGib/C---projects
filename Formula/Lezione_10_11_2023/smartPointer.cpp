#include <memory>

struct ArrayVector3 {
    float x[1000], y[1000], z[1000];
};

struct smartPointer
{
    ArrayVector3*p;
    smartPointer(){p=new ArrayVector3;}
    ~smartPointer(){delete p;}
};



int main(){

    std::unique_ptr<ArrayVector3> v;

}
