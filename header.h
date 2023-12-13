#ifndef HEADER_H
 #define HEADER_H
/*  void show();
 void decode(bool value); */
 void insertlast(int value);
/* extern bool  uplink;
extern bool downlink; */ 
class node
{
    public:
    int data;
    node*next;
   node  *head=nullptr;
   void decode(bool value);
    void show();
    void insertlast(int value);
    bool uplink;
    bool downlink;
    node(bool ul=0,bool dl=0)
    {
        this->uplink=ul;
        this->downlink=dl;
    }


};

 #endif