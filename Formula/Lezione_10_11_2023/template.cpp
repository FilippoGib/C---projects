template <typename T>
struct Vector3 {
    T x,y,z;

    T length() const { //nei template non si può lasciare le impelementazioni fuori dalla classe
        return sqrt(x*x+y*y+z*z);
    }
};