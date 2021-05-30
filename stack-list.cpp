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
    }
    void push(double radius){
        //anggota 2
    }
    Lingkaran *pop(){
    	//Anggota 3
    }
};
int main(){
	
}
