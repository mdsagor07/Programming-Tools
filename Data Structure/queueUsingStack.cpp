#include<bits/stdc++.h>
using namespace std;

struct Queue{

    stack<int> s1,s2;

void EnQuee(int x)
{
    s1.push(x);
}

    int deQueue()
    {
        if(s1.empty() && s2.empty()){

            cout<<"Q is empty";
        }
        if(s2.empty()){

            while(!s1.empty()){

                s2.push(s1.top());
                s1.pop();
            }
        }

        int x= s2.top();

        s2.pop();
        return x;
    }



};


int main()
{
    Queue q;
    q.EnQuee(1);
    q.EnQuee(2);
    q.EnQuee(3);

    cout<<q.deQueue();
    cout<<q.deQueue();
    cout<<q.deQueue();


}

