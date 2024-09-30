//Header File: node.h 

#ifndef H_nodeADT
#define H_nodeADT 

//Definition of the node 
template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};

#endif