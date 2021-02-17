#include <iostream>
#include <stack>
using namespace std;
int main (){

stack <int> stack1,stack2;

for (int i=10;i<=50; i+=10){
    stack1.push(i);
    stack2.push(i);
}
if (!stack1.empty()){
    cout <<"List is Empty!"<<endl;
}
while (!stack1.empty()){
    cout<< stack1.top()<<" ";
    stack1.pop();
}
cout<< endl;

while (!stack2.empty()){
    cout << stack2.top()<< " is removed.\n";
    stack2.pop();
        }

}