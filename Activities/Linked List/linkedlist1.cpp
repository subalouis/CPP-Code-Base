// Louis Andrei Suba
// BSCS 2A

#include<iostream>
using namespace std;

class linkedList{
    public:
        struct node{
            int data;
            node *next = NULL;
        };
        node *head = NULL, *current = NULL;

        bool isEmpty(){
            if (head == NULL){
                return true;
            }
            return false;
        }

        void addNode(int num){
            node *n = new node;
            n->data = num;

            if (head == NULL){
                this->head = n;
                this->current = head;
            }
            else {
                this->current->next = n;
                this->current = current->next;
            }
        }

        void headDeletion(){
            if (isEmpty()){
                cout << "List is empty!\n";
                return;
            }
            else if (head->next == NULL){
                cout << head->data << " is removed.\n";
                head = NULL;
            }
            else{
                cout << head->data << " is removed.\n";
                this->head = head->next;
            }
        }

        void searchDeletion(int num){
            if (isEmpty()){
                cout << "List is empty!\n";
                return;
            }
            
            node *temp = head;
            while (temp->next->data != num){
                temp=temp->next;
                if (temp->next == NULL){
                    cout << "No Data Found\n";
                    return;
                }
            }

            cout << temp->next->data << " is removed.\n";
            temp->next = temp->next->next;
        }

        void displayOutput(){
            if (isEmpty()){
                cout << "List is empty!\n";
                return;
            }
            else {
                current = head;
                while(current != NULL){
                    cout << current->data << " ";
                    current = current->next;
                }
                cout << "\n";
                return;
            }
        }
};
int main(){
    linkedList a;

    a.displayOutput();
    for (int x = 50; x > 0; x-=10){
        a.addNode(x);
    }
    a.displayOutput();
    a.searchDeletion(2);
    a.searchDeletion(20);
    a.displayOutput();
}