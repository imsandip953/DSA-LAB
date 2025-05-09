#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int queue1[MAX], front = -1, rear = -1;
void Enque(int val){
    if(rear == MAX - 1){
        cout << "Queue Overflow" << endl;
        return;
    }
    else if(front == -1 and rear == -1){
        front = rear = 0;
    }
    else{
        rear++;
    }
    queue1[rear] = val;
}
int Deque(){
    if(front == -1 and rear == -1){
        cout << "Queue Underflow!!!" << endl;
        return -1;
    }
    int val = queue1[front];
    if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
    return val;
}
void Print(){
    if(front == -1 and rear == -1){
        cout << "Empty Queue" << endl;
    }
    for(int i = front; i <= rear; i++){
        cout << queue1[i] << " ";
    }
    cout << endl;
}
int main(){
    int val, opt, tmp;
    while(1){
        cout << "\t" << "-------My Queue--------" << endl;
        cout << "1.Enque" << endl << "2.Deque" << endl << "3.Print" << endl << "4.Exit" << endl;
        cin >> opt;
        if(opt == 1){
            cout << "Enter a Value:";
            cin >> val;
            Enque(val);
        }
        else if(opt == 2){
            tmp = Deque();
            if(tmp != -1){
                cout << "Dequed: " << tmp << endl;
            }
        }
        else if(opt == 3){
            Print();
        }
        else if(opt == 4){
        exit(0);
        }
        else{
            cout << "Wrong Key!!!" << endl;
        }

    }
}