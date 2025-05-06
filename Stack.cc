#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int stack1[MAX], top = -1;
void Push(int val){
    if(top == MAX - 1){
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    stack1[top] = val;
}
int Pop(){
    if(top == -1){
        cout << "Stack Underflow!!!" << endl;
    }
    top--;
    return stack1[top + 1];
}
void Print(){
    if(top == -1){
        cout << "Empty Stack" << endl;
    }
    for(int i = 0; i <= top; i++){
        cout << stack1[i] << " ";
    }
    cout << endl;
}
int main(){
    int val, opt, tmp;
    while(1){
        cout << "\t" << "-------My Stack--------" << endl;
        cout << "1.Push" << endl << "2.Pop" << endl << "3.Print" << endl << "4.Exit" << endl;
        cin >> opt;
        if(opt == 1){
            cout << "Enter a Value:";
            cin >> val;
            Push(val);
        }
        else if(opt == 2){
            tmp = Pop();
            cout << "Popped: " << tmp << endl;
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
