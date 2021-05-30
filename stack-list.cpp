/*Tugas Kelompok Stack List
Nama-anggota:
1. Ages Ardiah Pramesti - 2017051064
2. Irvandra Dwidya Agsatra - 2017051055
3. Rafi Dinata - 2017051043

Link Github: https://github.com/Irvandra/StackList
*/
#include <bits/stdc++.h>
#define MAX_STACK_SIZE 100

using namespace std;
class Lingkaran{
public:
    double radius;
    Lingkaran *next;
    Lingkaran(){
        this->radius=1;
    }
    Lingkaran(double radius){
        this->radius = radius;
    }
    Lingkaran(Lingkaran &lingkaran) {
        this->radius = lingkaran.radius;
    }
    double getLuas(){
        return M_PI * radius * radius;
    }
    double getKeliling(){
        return 2 * M_PI * radius;
    }
};

class ListStack{
public:
	  int total;
    Lingkaran *top;
    
    ListStack(){
      top = NULL;
    }
  
    bool isEmpty(){
      //anggota 1
    	return total == 0;
    }
  
    bool isFull(){
      //anggota 1
      return total >= MAX_STACK_SIZE;
    }
  
    void push(Lingkaran *item){
      //anggota 2
      item->next=NULL; 
		  if(!isFull()){    
        	if (isEmpty()){
        		top=item;
        	} else {
        		item->next=top;
        		top=item;
        	}
        	cout<<"Stack Added"<<endl;
          total++;
    	}
    }
  
    void push(double radius){
        //anggota 2
        Lingkaran *item;
        item = new Lingkaran(radius);
        item->next=NULL;     
        if(!isFull()){
          if (isEmpty()){
    			  top=item;
        	} else {
        		item->next=top;
        		top=item;
        	}
        	cout<<"Stack Added"<<endl;
          total++;
        }
    }
  
    Lingkaran *pop(){
      //Anggota 3
      Lingkaran *temp, *returned;

      if(isEmpty()){
        cout<<"Stack Kosong"<<endl;
        return NULL;    		
      }
      else
      {
        temp = top;

        while(temp -> next != NULL){
          top = temp;
          temp -> next = temp -> next -> next;
        }

        returned = temp;

        delete(temp);
				total--;

        return returned;
      }
   }
};
int main(){
  
}
