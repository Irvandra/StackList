/*Tugas Kelompok Stack List
Nama-anggota:
1. 
2.
3.

Link Github: .....
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
    Lingkaran *top;
    
    ListStack(){
        top = NULL;
    }
    bool isEmpty(){
        //anggota 1
    }
    bool isFull(){
        //anggota 1
    }
    void push(Lingkaran *item){
        //anggota 2
    }
    void push(double radius){
        //anggota 2
    }
    Lingkaran *pop(){
    	//Anggota 3
    	Lingkaran *temp, *returned;
    	    	
    	if(isEmpty()){
            cout<<"Stack Kosong"<<endl;
            return NULL;    		
		}else{
			temp = top;
			
			while(temp -> next != NULL){
				top = temp;
				temp -> next = temp -> next -> next;
			}
			
			returned = temp;
			
			delete(temp);
			
			return returned;
		}
    }
};
int main(){
	
}
