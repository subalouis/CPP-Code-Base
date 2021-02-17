/*                                      
Movie Resevation System
BSCS 2A
--------------------------
Suba, Louis Andrei L. 
Pangilinan, Jerico
Gaspar, Mark Jimwell
Sumandal III, Fernando
Intal, Ferwinkle

Table of Contents
Linked List - Line
Linked List Stacks
Linked List Queue
git repo at: https://github.com/subalouis/CPP-Code-Base
*/

#include <iostream>
#include <time.h>   //time decalarion
#include <conio.h>


int refNum = 343248;
int ticketNum = 241234;
std :: string movieList[5] = {"Cinema 1 - The Rain ", "Cinema 2 - Parasite", "Cinema 3 - Before Sunrise", "Cinema 4 - Before Sunset", "Cinema 5 = Wall-E"};

double moviePrices[5] = {350,420,690,777,666};

time_t timeToday = time(NULL);             //time generator
int referencenumber = 2000;                //reference number generator
    //reservation();

struct stackLinkedList{
    int ticketNum;
    int referencenumber;
    std :: string modePayment;
    std :: string movieName;
    stackLinkedList *next;
};

struct linkedList{
    std :: string custName;
    int seatNum;
    int referencenumber;
    std :: string movieName;
    std :: string modePayment;
    linkedList *next;
};
struct linkedList *head = NULL, *tail = NULL;

struct reservationLinkedList{
    std :: string custName;
    int seatNum;
    int referencenumber;
    std :: string movieName;
    std :: string modePayment;
    reservationLinkedList *next;
};
struct reservationLinkedList *reserveHead  = NULL , *reserveTail  = NULL;

class llFunctions{
    public:
        bool islinkedListEmpty(){
            if(head == NULL)
                return true;
            
            else
                return false;
        }

        void pushlinkedList(std :: string custName, int seatNum, int movieNum ,std :: string modePayment, int referencenumber){
            linkedList *newNode = new linkedList;
            newNode -> movieName = movieList[movieNum];
            newNode -> custName = custName;
            newNode -> seatNum = seatNum;
            newNode -> referencenumber = referencenumber;
            newNode -> modePayment = modePayment;
            newNode -> next = NULL;

            if(islinkedListEmpty()){
                head = newNode;
                tail = newNode;
            } 
            else{
                tail -> next = newNode;
                tail = newNode;
            }
        }
        void displaylinkedList(){
            linkedList *temp = new linkedList;
            temp = head;

            if(islinkedListEmpty()){
                std :: cout << "No input for reservation \n\n";
            } 
            else{
                while(temp != NULL){
                    std :: cout << temp -> referencenumber << "\t\t\t" << temp -> movieName << "\t" << temp -> seatNum << "\n";
                    temp = temp -> next;
                }
            }
            system("pause");
        }
};


class queuefunction{
    
    public:
        bool isReservationEmpty(){
            if(reserveHead == NULL)
                return true;
            else
                return false;
        }   
        
        void reservationFunction(std :: string custName, int seatNum, int movieNum ,std :: string modePayment, int referencenumber){
            reservationLinkedList *newNode = new reservationLinkedList;
            newNode -> movieName = movieList[movieNum];
            newNode -> custName = custName;
            newNode -> seatNum = seatNum;
            newNode -> referencenumber = referencenumber;
            newNode -> modePayment = modePayment;
            newNode -> next = NULL;

            if(isReservationEmpty()){
                std :: cout << "Data is in\n\n";
                reserveHead = newNode;
                reserveTail = newNode;
            } 
            else{
                reserveTail ->next = newNode;
                reserveTail = newNode;
            }
        }

        void displayReservations(){
            reservationLinkedList *temp = new reservationLinkedList;
            temp = reserveHead;

            if (isReservationEmpty()){
                std :: cout << "The Reservation List is empty. \n\n";
            }

            else{
                std :: cout << "Reference Number\tMovie Name-Cinema#\t Seat Number\n";
                while(temp != NULL){
                    std :: cout << temp -> referencenumber << "\t\t\t" << temp -> movieName << "\t" << temp -> seatNum << "\n\n";
                    temp = temp -> next;
                }
            }
            
        }
        void dequeueReservation(){
            reservationLinkedList *temp = new reservationLinkedList;
            temp = reserveHead;
            reserveHead = reserveHead -> next;
            free(temp);
        }
};

void movielist(){ 
    
    std::cout<< "1.) The Rain"<<std::endl;
    std::cout<< "2.) Parasite"<<std::endl;
    std::cout<< "3.) Before Sunrise "<<std::endl;
    std::cout<< "4.) Before Sunrise "<<std::endl;
    std::cout<< "5.) Wall-E \n\n\n";
    
}
void reservation()
{
    queuefunction object;
    llFunctions object2;
    std::string custName;
    std :: string modePayment;             //reservation();
    int seat,movieNum;   
    system("cls");
 
    std::cout << "Here is the List of movies showing as of today " << std::endl;
    std::cout << "-----------------" << std::endl;
    movielist();
    
    std::cout << "Please select a movie: "; std::cin>>movieNum; 
          
    std::cout << "\nSeat Number: "; std::cin>>seat;
    std :: cin.ignore();
    std::cout << "\nName of Customer : "; getline(std::cin,custName);
    std::cout<< "Mode of Payment[Cash/Card]: "; getline(std::cin,modePayment);
    object.reservationFunction(custName, seat, movieNum - 1, modePayment,++refNum);
    object2.pushlinkedList(custName, seat, movieNum - 1, modePayment,refNum);  
}


class stackLLFunctions{
    private:
        stackLinkedList *top;

    public:
    
        stackLLFunctions(){
            top = NULL;
        }

        bool isStackEmpty(){
             if(top == NULL)
                return true;
            else
                return false;
        }

        void pushStackFunction(int ticketNum, int referencenumber, std :: string modePayment, std :: string movieName){ //stack push fuction
            stackLinkedList* newNode = new stackLinkedList;
            newNode -> ticketNum = ticketNum;
            newNode -> referencenumber = referencenumber;
            newNode -> modePayment = modePayment;
            newNode -> movieName = movieName;

            if(isStackEmpty()){
                top = newNode;
            }
            else{
                newNode -> next = top;
                top = newNode;
            }  
        }

        void topStackFunction(){
           std :: cout << top -> referencenumber << std::endl;
        }

        void popStackFunction(){
            stackLinkedList* temp = new stackLinkedList;
            temp = top;
            top = top -> next;
            free(temp);
        }
        void serveTicket(){
            queuefunction object;
            reservationLinkedList *temp = new reservationLinkedList;
            temp = reserveHead;
            pushStackFunction(++ticketNum, temp -> referencenumber, temp -> modePayment, temp -> movieName);
            object.dequeueReservation();
            system("pause");
}
        
};

void mainscreen()
{
    queuefunction object;
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
        object.displayReservations();
        std::cout << "[1] Reservation" << std::endl;
        std::cout << "[2] Serve a ticket" << std::endl;
        std::cout << "[3] Display all reservations mode" << std::endl;
        std::cout << "[4] Exit Program" << std::endl;
}

int main()
{
    int choice;
    stackLLFunctions object;
    llFunctions object2;
    while (true){
        mainscreen();
        std::cout << std::endl;
        std::cout << "Enter the number of your choice here: ";
        std::cin >> choice;
    
        switch (choice){
        case 1:
        reservation();
            break;
        case 2:
            object.serveTicket();
            break;
        case 3:
            object2.displaylinkedList();
            break;
        case 4:
            std::cout << "Program Exiting...";
            return 0;
            break;
        default:
            std :: cout << "Invalid Input" << std::endl;
            continue;
        }
    }
    return 0;
}//EoF