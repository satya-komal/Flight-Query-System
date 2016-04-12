#include <iostream>
#include "graph.h"
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

city c1;
Query_sys q1;
//Node n1;
int a,b;
int num=1;
string line,temp1,temp2;


int main(int argc,char* argv[]){

	if(argc==2) {
		ifstream readfile;
		readfile.open(argv[1]);
		readfile>>a;
                q1.createlist(a);
		for(int i=0;i<a;i++){
			string input;	
			readfile>>input;
			if(input!="\0" ){
			q1.Add_cities(input);	

			}	
		}

		// read total no of routes
		readfile>>b;
		
		for(int i=0;i<b;i++){

			readfile>>temp1;
			readfile>>temp2;
			for(int i=0;i<a;i++){                                 
				if(q1.list[i].name==temp1){
					
					//q1.addnode(temp2);
					q1.addedge(temp1,temp2);

				}

			}  

		}
	}

}

