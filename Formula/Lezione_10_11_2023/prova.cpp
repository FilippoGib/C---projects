struct Vector3 {
    float x, y, z;
};
struct Vector5 : Vector3{
    float a, b;
};

int main(){
    Vector3 v3;
    Vector5 v5;

    v3=v5; //flloat a e float b vengono completamente tagliati via

    Vector3 *pv3;
    Vector5 *pv5;

    pv3=pv5; //tutto ok
    
}
