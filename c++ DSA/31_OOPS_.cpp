
#include<iostream>
using namespace std;

class Hero {

    //properties of class   means variables
    //behaviour means method/function

    //char name[100];
    //int health;
    //char level;
    
   int health;


};
int main(){

    //creation of object
    Hero h1;

    cout << "size: " << sizeof(h1)<< endl; // data type ki size return karega in bytes o/p--->4
    return 0;

}



//Que----> How to access property of class ?
/*
#include<iostream>
using namespace std;

class Hero {
    private:
    
    // public: use karunga to error nhi ayega kyo by default class is private 
    int health ;

    public:
    char level;
  //Agar hum private member se accces karna chate hai to use 
    void print(){
        cout << level << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }


};

int main(){
    //creation of object 
    Hero Ramesh;
    //call the getter and set method 
    cout << "Ramesh health is :" << Ramesh.getHealth() << endl;

    //use of setter
    //set  ke use se hum value change kar sakte hai , condition bhi laga sakte hai 
    Ramesh.setHealth(70);

    // aggar value nhi dalu or direct  print karvau to garbege value return karega 
    // Ramesh.health = 70;
    Ramesh.level = 'A';

    cout << "Health is: " << Ramesh.getHealth() << endl;
    cout << "Level is: " << Ramesh.level << endl;
    return 0;
}
*/




//TOPIC ----> Constructer  default and Parametrise 
/*
#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    //constructur 
    Hero() {
        cout << "Constructor Called" << endl;
    }

    //declaration of paramerterised Constructor
    Hero(int health) {

        //health = health; // agar esa karenge to ye khudki value utha ke khud me dal reha hai 
        // hum chate hai ki jo 96 line pr (int health) hai uski  value uthake is me dale 
        //iske liya ek "this" key word use karte hai 


        cout << "this->" << this <<endl;
        this -> health = health;


    } 


    void print(){
        cout << level << endl;
    }

    int getHealth(){  // get output return karne ke kam ata hai 
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {    // or ye perameter leta hai , input dena me kam ata hai 
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

};
int main() {

    // object created statically
    Hero ramesh(10);

    cout << "address of ramesh: " << &ramesh << endl;

    //dynamically
    Hero *h = new Hero();

}
 
*/

//Copy constructer 
/*
#include<iostream>
using namespace std;
class Hero {
   //properties 
    private:
    int health;

    public:
    char level;
    
    Hero(int h, char ch) {
        // cout << "default constructor called " << endl;
        health = h;
        level = ch;
    }


    void print(){
        cout << "Health :" << health << endl << "Level :" << level << endl;
    }
    int  getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

};
int main(){
    //Hero ram();

    Hero ram(560 , 'd');
    ram.print(); //yha jo parameter me valaue pass ki hai vo print hogi

    ram.setHealth(70);// using default constructor 
    ram.setLevel('c');
    ram.print(); //yha jo set se update kari hai value vo print hogi

    //Hero R(suresh);

    // hamne in values ko replacce kar diya hai is obj suresh ke sath
    // R.health = suresh.health;
    // R.level = suresh.level;
}
*/