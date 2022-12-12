#include <iostream>

using namespace std;

class Singleton {
   static Singleton *obj;
   int data;
 
   
   Singleton() {
      data = 0;
   }

   public:
   static Singleton *getobj() {
      if (!obj)
      obj = new Singleton;
      return obj;
   }

   int getData() {
      return this -> data;
   }

   void setData(int data) {
      this -> data = data;
   }
};


Singleton *Singleton::obj = 0;

int main(){
   Singleton *s = s->getobj();
   cout << s->getData() << endl;
   s->setData(100);
   cout << s->getData() << endl;
   return 0;
}