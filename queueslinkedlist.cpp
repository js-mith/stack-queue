 class Node{
    
        public:

        int data;
        Node *next;

        Node(int data){
            this -> data = data;
            next = NULL;
        }
    
};


class queue1
{
    Node *head;
    Node *tail;
    int size;

public:
    queue1()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getsize()
    {
        return size;
    }

    bool isempty()
    {
        return size == 0;
    }

    void enqueue(int element)
    {
        Node *newnode = new Node(element);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }

        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }
    int front()
    {
        if (isempty())
        {
            return 0;
        }
        return head->data;
    }

    int dequeue()
    {
        if (isempty())
        {
            return 0;
        }
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }


};