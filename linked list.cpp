#include<iostream>
using namespace std;

//class Node;


class Node{
public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){}
    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        //cout<<"Deleting Node with "<<data<<endl;

    }
};
class LinkedList{
public:
    Node * head, *tail;

    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertAtFront(int d){
        if(head==NULL){
            head = tail = new Node(d);
        }
        else{
            Node *n = new Node(d);
            n->next = head;
            head = n;
        }
    }
    void insertAtTail(int d){
        if(head==NULL){
            head = tail = new Node(d);
        }
        else{
            Node * n = new Node(d);
            tail->next = n;
            tail = n;
        }
    }
    Node* search(int d){
        Node* temp = head;
        while(temp){
            if(temp->data == d){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;

    }
    Node* midPoint(){
        if(head==NULL||head->next==NULL){
            return head;
        }

        Node*fast = head->next;
        Node * slow = head;

        while(fast!=NULL&&fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;

        }
        cout<<slow->data<<endl;
        return slow;
    }
    int getLength(){
        int l=0;
        Node*temp = head;
        while(temp){
            l++;
            temp = temp->next;

        }
    return l;
    }
    void insertInMiddle(int d,int p){
        if(p==0){
            insertAtFront(d);
        }
        if(p>=getLength()){
            insertAtTail(d);
        }
        else{
            int jumps=1;
            Node*temp = head;
            while(jumps<=p-1){
                temp = temp->next;
                jumps++;
            }
            Node *n = new Node(d);
            n->next = temp->next;
            temp->next = n;
        }

    }
    void deleteFront(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }
    void deleteTail(){
        Node* prev = head;
        while(prev->next!=tail){
            prev = prev->next;
        }
        delete tail;
        prev->next = NULL;
        tail = prev;

    }
    void deleteMiddle(int p){
        if(p==0){
            deleteFront();
        }
        else if(p>=getLength()){
            deleteTail();
        }
        else{
            int jumps=1;
            Node*temp = head;
            while(jumps<=p-2){
                jumps++;
                temp = temp->next;
            }
            Node*n = temp->next;
            temp->next = n->next;
            n->next = NULL;
            delete n;
        }

    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"--> ";
            temp = temp->next;
        }
        cout<<endl;
    }
    ~LinkedList(){
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }

};

Node* mergeLL(Node*a,Node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node* newHead;
    if(a->data < b->data){
        newHead = a;
        newHead->next = mergeLL(a->next,b);
    }
    else{
        newHead = b;
        newHead->next = mergeLL(a,b->next);
    }
    return newHead;
}


int main(){
    /*
    LinkedList *ld = new LinkedList;
    LinkedList l;
    l.insertAtFront(3);
    l.insertAtFront(4);
    l.insertAtFront(2);
    l.insertAtFront(1);
    l.insertAtTail(5);
    l.insertAtTail(6);
    l.insertInMiddle(100,3);
    l.deleteMiddle(0);
    l.deleteMiddle(3);

    l.print();

    ld->insertAtFront(1000);
    ld->insertAtFront(2000);
    ld->insertAtFront(3000);
    ld->print();

    delete ld;
    */
    LinkedList l1,l2;
    l1.insertAtTail(1);
    l1.insertAtTail(3);
    l1.insertAtTail(5);
    l1.insertAtTail(7);


    l2.insertAtTail(4);
    l2.insertAtTail(6);
    l2.insertAtTail(8);

    l1.print();
    l2.print();
    l1.head = mergeLL(l1.head,l2.head);
    l1.print();

return 0;
}

