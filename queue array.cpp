#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // ukuran maksimum queue

class Queue {
   private:
      int data[MAX_SIZE];
      int head, tail;
   
   public:
      Queue() // constructor
      {
         head = 0;
         tail = 0;
      }
      
      bool isEmpty()
      {
         return (head == tail);
      }
      
      bool isFull()
      {
         return (tail == MAX_SIZE);
      }
      
      void enqueue(int x)
      {
         if(isFull())
         {
            cout << "Queue penuh!" << endl;
         }
         else
         {
            data[tail] = x;
            tail++;
         }
      }
      
      void dequeue()
      {
         if(isEmpty())
         {
            cout << "Queue kosong!" << endl;
         }
         else
         {
            cout << "Elemen yang dikeluarkan: " << data[head] << endl;
            head++;
         }
      }
      
      void print()
      {
         if(isEmpty())
         {
            cout << "Queue kosong!" << endl;
         }
         else
         {
            cout << "Isi queue: ";
            for(int i = head; i < tail; i++)
            {
               cout << data[i] << " ";
            }
            cout << endl;
         }
      }
};

int main()
{
   Queue q;
   
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5); // queue sekarang penuh
   q.enqueue(6); // akan menampilkan pesan "Queue penuh!"
   
   q.print(); // akan menampilkan "Isi queue: 1 2 3 4 5"
   
   q.dequeue(); // akan menampilkan "Elemen yang dikeluarkan: 1"
   q.dequeue(); // akan menampilkan "Elemen yang dikeluarkan: 2"
   
   q.print(); // akan menampilkan "Isi queue: 3 4 5"
   
   q.enqueue(6);
   
   q.print(); // akan menampilkan "Isi queue: 3 4 5 6"
   
   return 0;
}

