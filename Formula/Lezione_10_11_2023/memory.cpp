struct ArrayVector3 {
    float x[1000], y[1000], z[1000];
};

/*ArrayVector3 * create_vector(){ 
    ArrayVector3 v;
    return &v;
}*/

ArrayVector3 * create_vector(){ 
    return new ArrayVector3;
}

int main(){
    auto * v = create_vector();
    v->x[0]=1;

    delete v; //dealloco la memoria

}