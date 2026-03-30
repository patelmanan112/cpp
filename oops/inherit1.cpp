#include<iostream>
#include<string>

using namespace std;

class ParentA{
    
    // Common Data members.....
    
    public:
       
        string name ;
        
    // Common Function members....
      ParentA(string name){
        this->name = name;
        cout<< "kaam ho gaya hai"<<endl;
        cout<< this->name<< "  parent bol raha hu mein" <<endl;
      }
       
       void display(){
           cout << "Parent fucntion got called and the common data members are;  " << endl;
       }
       
       
};

// :: know as scope resoulation
class Children : public ParentA{
    
    // Distinct Data members...
     
     public:
        
        string name1;
        Children(string name,string name1): ParentA(name){
            this->name1 = name1;
            cout << this->name1<< " beech ka bandar bol raha hu" <<endl;
        }
        
        void display1(){
            cout << "Children fucntion is getting called:" << endl;
        }
        
        void accessParentVaraible(){
        //    cout << "The Storage value is" << Storage << endl;
       }
};
class Children1 : public Children{

    public:


    string name2 ;
    Children1(string name2 , string name , string name1) : Children( name , name1){
        this->name2 = name2;
        cout << "bohot chhota bacha " << this->name2 << endl;
    }
};


int main(){
    
    Children1 c1("manan" , "Patel", "nileshbhai");
    

    return 0;
}