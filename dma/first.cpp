#include <iostream>
using namespace std;
int main(){
    //static memory allocation
    int x;
    x=10;
    cout<<x<<endl;

    //dynamic memory allocation
    // int new -->return the address of int 

    // int * ptr -->pointer that stores the address of int
    //int * --> datatype of pointer to int
    //ptr-->name of pointer

    int * ptr= new int;
    *ptr=10;
    cout<<*ptr<<endl;

    //delete keyword-->delete variable from heap
    //pointer ko delete krna hota hai --> that points to new int
    //delete pointerkanaam -->syntax

    delete ptr; //free the memory that is pointed by ptr
    ptr=nullptr; //never point a pointer to a grabage value (bec after th pointer is deleted it points to garbage value)

    float f=90.6;

    float * fptr= new float;
    *fptr=f;
    cout<<*fptr<<endl;

    delete fptr;
    fptr=nullptr;

    // cout<<*fptr<<endl; -->gives segmentation fault bec fptr is deleted

    




}