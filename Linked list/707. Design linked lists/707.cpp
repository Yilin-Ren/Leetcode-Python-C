class MyLinkedList {
public:

    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr){}
    };

    MyLinkedList() {
        dummyhead = new LinkedNode(0);
        size = 0;
    }
    
    int get(int index) {
        // 非法判断
        if(index > (size - 1)|| index < 0){
            return -1;
        }
        LinkedNode* cur = dummyhead->next;
        while(index--){
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedNode* temp = new LinkedNode(val);
        temp->next = dummyhead->next;
        dummyhead->next = temp;
        size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* temp = new LinkedNode(val);
        LinkedNode* cur = dummyhead;
        while(cur->next!=nullptr){
            cur = cur->next;
        }
        cur->next = temp;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > size){
            return ;
        }
        if(index < 0){
            index = 0;
        }

        LinkedNode* temp = new LinkedNode(val);
        LinkedNode* cur = dummyhead;
        while(index--){
            cur = cur->next;
        }
        temp->next = cur->next;
        cur->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index >= size || index < 0) {
            return;
        }

        LinkedNode* cur = dummyhead;
        while(index--){
            cur = cur->next;
        }
        LinkedNode* temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        temp = nullptr;
        size--;
    }

    void printLinkedList() {
        LinkedNode* cur = dummyhead;
        while (cur->next != nullptr) {
            cout << cur->next->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
private:
    int size;
    LinkedNode* dummyhead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
