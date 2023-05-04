#include<climits>
template<typename T>

class stackUsingArray{
     T *data;
     int nextIndex;
     int capacity;

     public:

     stackUsingArray(){
        data = new T[4];
        nextIndex =0;
        capacity = 4;
     }
     // return the number of element in my stack

     int size(){
        return nextIndex;
     }

     bool isempty(){
        /*
        if(nextIndex == 0){
            return true;
        }
        else{
            return false;
        } */
        return nextIndex ==0;
     }
     //insert element
      void push(T element){
       if(nextIndex == capacity){
        T *newdata = new T[2*capacity];
        for(int i = 0 ; i < capacity ; i++){
            newdata[i] = data[i];
        }

        capacity *= 2;
        delete []data;
        data = newdata;

        /*
            cout << " stack full " << endl;
            return ;
        
        */
       }
        data[nextIndex] = element;
        nextIndex++;
      }

      // delete element
      T pop(){
        if(isempty ()){
            cout << " stack is empty" << endl;
            return 0;
        }
     nextIndex--;
     return data[nextIndex];
      }
      T top(){
         if(isempty ()){
            cout << " stack is empty" << endl;
            return 0;
        }
        return data[nextIndex-1];
      }


};