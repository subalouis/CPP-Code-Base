#include <iostream>
#include <stack>
#include <time.h> //time decalarion
// #include <conio.h>

time_t timeToday = time(NULL);            //time generator
int referencenumber = 2000;               //reference number generator
int choice,movienum=0; 

    std::string custname;                //reservation();
    int seat[20][20];                    //reservation();


class qLinkedList{
    private:
        struct qNode{
            int referenceNum, movieprice[5] = {210,200,220,205,200};
            std::string custName, movie[] = {};
            
            qNode *next;

        };

        struct node{
            std::string data;
            node* next;
        };

        struct stackNode{
            int stackData;
            stackNode *next;
        };

        qNode *qHead, *qTail;
        node *head, *tail;
        stackNode *top;
    public:

        qLinkedList(){
            qHead = qTail = NULL;
            top = NULL;
            head = tail = NULL;
        }
        void qAddNode(int Data){
            qNode* addptr = new qNode;
            addptr -> qData = Data;
            addptr ->next = NULL;
            if(qHead == NULL){
                qHead = qTail = addptr;
            }
            else{
                qTail -> next = addptr;
                qTail = addptr;
            }
            return;
        }
        void qDeleteNode(int deleData){
            qNode* deletePtr = qHead;
            qNode* delPtr = new qNode;
            while(deletePtr->next!= NULL){
                delPtr = deletePtr;
                deletePtr = deletePtr->next;
            }
            qTail = delPtr;
            qTail ->next = NULL;
            delete deletePtr;
            return;
        }
        void displayQueue(){
            qTail = qHead;
            while(qTail != NULL){
                std::cout<<qTail ->qData <<" ";
                qTail = qTail ->next;
            }
            std::cout<<std::endl;
            return;
        }
        void stackAddNode(int sData){
            stackNode* addptr = new stackNode;
            addptr -> stackData = sData;
            addptr -> next = NULL;
            if(top == NULL){
                top = addptr;
            }
            else{
                addptr -> next = top;
                top = addptr;
            }
            return;
        }
        void displaystack(){
            while(top !=NULL){
                std::cout<<top ->stackData << std::endl;
                top = top->next;
            }
            return;
        }
        void popStack(int sdeleteData){
        stackNode* deleteData = new stackNode;
            deleteData = top;
            top = top -> next;
        delete (deleteData);
    }
        void addNode(std::string addData){
        node* addptr = new node;
        addptr->data = addData;
        addptr->next = NULL;
        if(head == NULL){
            head = addptr;
            tail = addptr;
        }
        else{
            tail -> next = addptr;
            tail = addptr;
        }
        return;
    }
        void displayList(){
            tail = head;
            while(tail !=NULL){
                std::cout<< tail ->data <<std::endl;
                tail = tail ->next;
            }
        }
   
void movielist(){ 
    std::cout<< "--------------------------"<<std::endl;
    std::cout<< "\tNOW SHOWING"<<std::endl;
    std::cout<< "--------------------------"<<std::endl;
    std::cout<< "1.) The Rain"<<std::endl;
    std::cout<< "2.) Parasite"<<std::endl;
    std::cout<< "3.) Before Sunrise "<<std::endl;
    std::cout<< "4.) Before Sunrise "<<std::endl;
    std::cout<< "5.) Wall-E "<<std::endl;   std::cout<<std::endl;
    
    system ("pause");
    
}

<<<<<<< HEAD
void seats(){
    std::cout<< "Available Seats:"<<std::endl;
    for (int x=1;x<11;x++){
        for (int y=1;y<11;y++){
        // std::cout <<seating[x][y];
    }
    std::cout<< std::endl;
} 
};


=======
>>>>>>> parent of e4caf06 (added prgram flow ++ testing arrays)
void request()
{
int num;
    std :: cout << "Input: "; std :: cin >> num;
    pushStackFunction(num);
    std :: cout << "Input: "; std :: cin >> num;
    pushStackFunction(num);
    std :: cout << "Input: "; std :: cin >> num;
    pushStackFunction(num);
    std :: cout << "Input: "; std :: cin >> num;
    pushStackFunction(num);

    while(top != NULL){
        topStackFunction();
        top = top -> next;
}
}

void movielist(){
    std::cout<< "Enter number of movies for the day: "; std::cin>> movienum;
}


void reservation()
{
<<<<<<< HEAD
 system("cls");
            std::cout << "Here is the List of movies showing as of today " << std::endl;
            std::cout << "-----------------" << std::endl;
            movielist();
            std::cout << "Please select a movie: "; std::cin>>movie; 
                if (movie==1){
                    std::cout << "The Rain";
                }else if (movie==2){
                    std::cout << "Parasite";
                }else if (movie==3){
                    std::cout << "Before Sunrise";
                }else if (movie==4){
                    std::cout << "Before Sunset";
                }else if (movie==5){
                    std::cout << "Wall-E";
                }

            std::cout << "\nReference Number: " << referencenumber+1;
            std::cout << "\nName of the customer: "; std::cin>>(getline, custname);
            // std::cout<< "Seat Number: "; std::cin>>seat;
            
=======

>>>>>>> parent of e4caf06 (added prgram flow ++ testing arrays)
}

void mainscreen()
{
    std::cout << std::endl; std::cout << std::endl;  std::cout << std::endl; std::cout << std::endl;
    std::cout << "\t\t\t\t=================================================" << std::endl;
    std::cout << "\t\t\t\t\t     Welcome to CS Cinema!" << std::endl;
    std::cout << "\t\t\t\t=================================================" << std::endl;
    std::cout << "\t\t\t\tThe Current time today is: ";
    printf("%s", ctime(&timeToday));
        std::cout << std::endl; std::cout << std::endl;
 
        //pause after displaying welcome screen
        system("PAUSE");
        system("CLS");
        movielist();
        std::cout << "[1] Reservation" << std::endl;
        std::cout << "[2] Serve a ticket" << std::endl;
        std::cout << "[3] View Available Seats and Schedule" << std::endl;
        std::cout << "[4] Exit Program" << std::endl;
}

// main functionz
int main()
{
<<<<<<< HEAD
=======
    int choice, movie;

    while (true)
    {
>>>>>>> parent of e4caf06 (added prgram flow ++ testing arrays)
        mainscreen();
        std::cout << "Enter the number of your choice here: ";
        std::cin >> choice;

<<<<<<< HEAD
        
        switch (choice){
        while (true){
        case 1:

        case 2:
        reservation();
            break;

        case 3:
=======
        switch (choice)
        {
        case 1:
            std::cout << "[1] Reservation" << std::endl;
            std::cout<< "Please select a movie: \n"; movielist();
            std::cout << "\n"; std::cin>>movie;
            reservation();
            break;
        case 2:
>>>>>>> parent of e4caf06 (added prgram flow ++ testing arrays)
            std::cout << "[2] Serve a ticket" << std::endl;
            request();
            break;
        case 4:
            std::cout << "[3] View Available Seats and Schedule" << std::endl;
            break;
        case 5:
            std::cout << "Program Exiting...";
            return 0;
        }
    }
}