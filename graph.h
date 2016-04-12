#include <iostream>
#include <string>
using namespace std;

struct Node{
	string dest;
	struct Node*next;
	Node();
	Node(string data);
	~Node();
};

class city{
	public:
		string name;
		struct Node*head;
		city();
		~city();
		city(string input);

};

class Query_sys{ 
	public:
		int count;
		bool flag;
		city*list;
		//struct Node*head;
		void createlist(int a);
		void Add_cities(string info);
		Node* addnode(string test);
		void addedge(string source, string desti);
		Query_sys();
		~Query_sys();
		string print();

};
