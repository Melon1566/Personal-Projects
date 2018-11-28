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
//getter function for right node pointer
Node<E>* getRight()
{
return right;
}
//setter function for right node pointer
void setRight(Node<E>* right)
{
this->right = right;
}
//getter function for left node pointer
Node<E>* getLeft()
{
return left;
}
//setter function for left node pointer
void setLeft(Node<E>* left)
{
this->left = left;
}
//getter function for node value
E getValue()
{
return value;
}
//setter function for node value
void setValue(E value)
{
this->value = value;
}


};

