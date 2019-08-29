// DoubleLinkedList.h
struct Node {
	long long num;
	Node* prev;
	Node* next;
};

class DoubleLinkedList {
public:
        DoubleLinkedList();   // default construct
	~DoubleLinkedList();  // deconstruct
	DoubleLinkedList(const std::string& num, int digitsPerNode); // user defined construct
        DoubleLinkedList(int digitsPerNode);
	DoubleLinkedList(const DoubleLinkedList& list);  // copy construct
	DoubleLinkedList& operator = (const DoubleLinkedList& list);  // assignment consturct
public:
        //mandatory
        DoubleLinkedList operator + (const DoubleLinkedList& list) const;
	DoubleLinkedList operator * (const DoubleLinkedList& list) const;

	// optional
	DoubleLinkedList operator - (const DoubleLinkedList& list) const;
	// 10% extra 
	DoubleLinkedList operator / (const DoubleLinkedList& list) const;
	// 20% extra
	DoubleLinkedList Sqrt(const DoubleLinkedList& list) const;
public:
        const Node* GetHead() const;
	const Node* GetTail() const;
	void Append(Node* node);
	void Print() const;
private:
        Node* head;
        Node* tail;
        int m_digitsPerNode;
	long long remainder; // for / operator
	float decimal;  // for sqrt()  7 valid digits.
}

// main.cpp
#include "ArgumentManager.h"
int main(int argc, char* argv[])
{
	if (argc < 2) {
	  std::cerr << "Usage: infinitearithmetic \"input=xyz.txt;digitsPerNode=<number>\"\n");
	}
	ArgumentManager am(argc, argv);
	std::string filename = am.get("input");
	int digitsPerNode = std::stoi(am.get("digitsPerNode"));
	std::ifstream ifs(filename.c_str());
	std::string line;
	while (getline(ifs, line)){
		std::string num1;
		std::string num2;
		std::string op;
		// get num1 num2 and operator in line
                // ...
		DoubleLinkedList l1(num1, digitsPerNode);  // DoubleLinkedList(const std::string& num, int digitsPerNode)
		DoubleLinkedList l2(num2, digitsPerNode);
		DoubleLinkedList l;  // DoubleLinkedList();
		if (/* plus */)
		{l = l1 + l2;}         // DoubleLinkedList operator + (const DoubleLinkedList& list) const;  DoubleLinkedList& operator = (const DoubleLinkedList& list); 
		else if (/* mult */)     // DoubleLinkedList operator * (const DoubleLinkedList& list) const;
		{l = l1 * l2;}
		else if (/* div */)
		{l = l1 / l2;}         // DoubleLinkedList operator / (const DoubleLinkedList& list) const;
		else if (...)
		{//...}
		else {
			// ...
		}
		
		// output result
	}
		
	return 0;
}
digitsPerNode = 3
carry = 0
        123 456 789
      + 987 654 321
carry  1  1   1   0
----------------------------
       1 111 111 110 
	   
        123 456 789
      * 987 654 321	   
----------------------------
         123 456 789
       *         321
carry    146 253   0	  
----------------------------
list1 39 629 629 269
							
	        + 123 456 789
            *     654 000
carry   298   359   0	  
----------------------------
list2    80 740  583 784 000

	  
	  + 123 456 789
      * 987 000 000
list3	xxxxxxxxx 000 000  
----------------------------
result = list1 + list2 + list3

      10 001 000
	  
	  cout << node->num
	  0
