class Node{
    
        public:

        int data;
        Node *next;

        Node(int data){
            this -> data = data;
            next = NULL;
        }
    
};




class stack{
   Node *head ;
   int size;  // no. of element present in the stack
  public:
   stack(){
    head = NULL;
    size =0;
   }

   int getSize(){
         return size;
   }

   bool isEmpty(){
    return size == 0;
   }
   
   void push(int data){
    Node *temp = new Node(data);

    if(temp ==NULL){
        cout << "stack overflow" << endl;
        return ;
    }
    temp -> next = head;
    head = temp;
    size++;

   }
   int pop(){
    
    if(isEmpty()){
        return 0 ;
    }
    int ans= head -> data;
    Node *temp = head;
    head = head -> next;
    
    size--;
    return ans;
   }
   int top(){
    if(isEmpty()){
        return 0;
    }
    return head -> data;

   }

};