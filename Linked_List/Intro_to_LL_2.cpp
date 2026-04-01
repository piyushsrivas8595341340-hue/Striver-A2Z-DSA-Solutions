#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val, Node* nextNode = nullptr){
        data = val;
        next = nextNode;
    }
};

Node* convertArr2LL(vector<int>& arr){
    Node* head = new Node{arr[0]};
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node{arr[i]};
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* removesHead(Node* head){
    if (head==NULL)
    {
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

void print(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* removesTail(Node* head){
    if (head==NULL || head->next==NULL)
    {
        return NULL;
    }
    Node* temp=head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next= nullptr;

    return head;
}

Node* removeK(Node*head, int k){
    if(head==NULL) return head;
    if (k==1)
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while (temp!=NULL)
    {
        count++;
        if (count==k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* removeElement(Node*head, int element){
    if(head==NULL) return head;
    if (head->data == element)
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while (temp!=NULL)
    {
        if (temp->data==element)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* insertHead(Node* head, int val){
    return new Node(val,head);
}

Node* insertTail(Node* head, int val){
    if (head==NULL)
    {
        return new Node(val);
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertK(Node* head, int element, int k){
    if (head==NULL)
    {
        if (k==1)
        {
            return new Node(element);
        }
        else
        {
            return head;
        }    
    }
    if (k==1)
    {
        return new Node(element, head);
    }
    int count=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        count++;
        if (count==(k-1))
        {
            Node* x = new Node(element, temp->next);
            temp->next=x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertBeforeValue(Node* head, int element , int value){
    if (head==NULL)
    {
        return NULL;
    }
    if (head->data==value)
    {
        return new Node(element,head);
    }
    Node* temp= head;
    while (temp->next!=NULL)
    {
        if (temp->next->data==value)
        {
            Node* x= new Node(element,temp->next);
            temp->next=x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2, 15, 56, 84, 99};
    Node* head = convertArr2LL(arr);
    //head = removesHead(head);
    //head = removesTail(head);
    //head = removeK(head, 3);
    //head = removeElement(head,84);
    //head = insertHead(head,69);
    //head = insertTail(head,130);
    //head = insertK(head,100,3);
    head = insertBeforeValue(head,225,56);
    print(head);

    return 0;
}