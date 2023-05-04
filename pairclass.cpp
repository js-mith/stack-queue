template<typename T , typename V >

class pair1{
    T x;
    V y;

    public :
    void setX( T x){
        this -> x = x;
    }

    T getX(){
        return x;
    }

    void setY(V y){
        this -> y = y;
    }

    V getY(){
        return y;
    }

};
