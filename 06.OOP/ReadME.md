# Title of the documentation
UML : Unified Modeling Language (Strong Containment) 
1- Inheritance (is_a) 
2- Accosiation (has_a) (strong/weak)_Containment

------------------------------------------------
Inheritance:
       is_a :-
*Private inheritance
*Multiple inheritance
*Public inheritance



super_Class <----is_a-------  Sub_Class
Animal <-------is_a--------- Cat

-----------------------------------------------------------


      Has_a :
      
like : window (has_a) button ----->Accosiation
Accosiation:
1) Composition: Strong Containment
2) Aggregation: Weak Containment



Accosiation:
      Has_a :
      
like : window (has_a) button ----->Accosiation
Accosiation:
1) Composition: Strong Containment
2) Aggregation: Weak Containment


1) composition (Strong Containment) :
[Memory allocation inside the class]
Resource acquisition is initialization (RAII):
Allocate and deallocate  pointer of object from Basic Class



2) Aggregation (Weak Containment):
[Memory allocation outside the class]

obj alocation out of class A _ but (pointer / referance ) on class A 


---------------------------------------------------------------------
---------------------------------------------------------------------
---------------------------------------------------------------------



class B{} ;


//composition (Strong Containment) [Memory allocation inside the class]

class A 
{
    private :
    B b ;
};




//Resource acquisition is initialization (RAII)
//pointer
class A 
{
    public:
    //allocate
    A()
    {
        b = new B ();
    }
    //deallocate
    ~A()
    {
        delete b;
    }

    private :
    B* b ;
};




//----------------------------------------------------------------------------------------

//Aggregation -------> (Weak Containment) [Memory allocation outside the class]

//obj alocation out of class A _ but (pointer / referance ) on class A :

//pointer:
class A 
{
    public:
    A(B* pb):b(pb) {}
    

    private :
    B* b ;

};


//Referance:
class A 
{
    public:
    A (B& pb) :b(pb) {}
   

    private :
    B &b ;

};





             OOP_relationships
               /\
              /  \
             /    \
            /      \
           /        \
        is_a        has_a
-private             Association
-Multiple               /\
-publice               /  \
                      /    \ 
            composition   Aggregation
    (Strong_con.)          (Week _containment)