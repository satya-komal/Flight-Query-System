#include <iostream>
#include <string>
#include "graph.h"
using namespace std;

Node::Node(){
	dest="\0";
	next=NULL;
}

Node::~Node(){
}

Node::Node(string data){
	dest=data;
}

city::city(){
	name="\0";
	head=NULL;
}

city::city(string input){
	name=input;
	//cout<<input<<endl;
}

city::~city(){
}

Query_sys::Query_sys(){
	count=0;

}

Query_sys::~Query_sys(){

}

Node* Query_sys::addnode(string test){
	city c;
	Node*temp=c.head;		
	if(temp==NULL){
		temp=new Node;
		temp->dest=test;
		temp->next=NULL;
		//cout<<temp->dest<<endl;
		return temp;
	}	 
}

void Query_sys::addedge(string source, string desti){
	//addnode(desti);
	 Node* temp = addnode(desti);
         //temp->next=    
            
            
            /*temp->next = list[src].head;
            list[src].head = temp;
             temp = addnode(src);
             temp->next = list[dest].head;
            list[dest].head = temp; */
}

void Query_sys::createlist(int a){
	list =new city[a];
}

void Query_sys::Add_cities(string info){
	list[count]=city(info);
	//cout<<list[count].name<<endl;
	count++;
}


string Query_sys::print(){

} 
