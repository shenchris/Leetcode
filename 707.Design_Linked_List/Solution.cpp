class MyLinkedList {
public:

    MyLinkedList() {
        _dummyHead=new Node(0);
        size=0;
    }

    int get(int index) {
        if(index<0 or index>=size){
            return -1;
        }
        Node *currentNode = _dummyHead;
        for(int i=0; i<=index;i++){
            currentNode=currentNode->next;
        }
        return currentNode->value;
    }

    void addAtHead(int val) {
        addAtIndex(0,val);
    }

    void addAtTail(int val) {
        addAtIndex(size,val);
    }

    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }
        if (index < 0) {
            index = 0;
        }
        size++;
        Node *pred = _dummyHead;
        for (int i = 0; i < index; i++) {
            pred = pred->next;
        }
        Node *toAdd = new Node(val);
        toAdd->next = pred->next;
        pred->next = toAdd;
    }

    void deleteAtIndex(int index) {
        if (index >= size) {
            return;
        }
        if (index < 0) {
            index = 0;
        }
        size--;
        Node *pred = _dummyHead;
        for (int i = 0; i < index; i++) {
            pred = pred->next;
        }
        pred->next = pred->next->next;
    }

private:
    struct Node{
        int value;
        Node* next;
        Node(int val){
            value=val;
            next=nullptr;
        }
    };
    int size;
    Node* _dummyHead;
};

