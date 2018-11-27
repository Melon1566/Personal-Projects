#include <iostream>


template<typename E>
class Node
{
private:

E value;        //value for the node

Node<E>* right; //rightside pointer

Node<E>* left;  //leftside pointer

public:

Node()//default constructor
{
right = NULL;
left = NULL;

}

Node(E v, Node<E>* r, Node<E>* l)//constructor with value and pointers passed
{
right = r;
left = l;
value = v;

}

Node(E v)//constructor with just value parameter
{
right = NULL;
left = NULL;
value = v;


}


}

