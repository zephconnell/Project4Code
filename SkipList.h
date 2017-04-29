// Zephaniah Connell, Michael Schwindt, and Marcus Rieker
// COSC 3020 Project 4
// Skip List: Search, Insert, Delete
// SkipList.h
// 04-29-17

using namespace std;

#include <vector>;

class SkipList
{
private:

	// Nodes provide access to element and the previous and next nodes
	class Node
	{
	private:

		vector<Node> nodeStructure;
		Node* before;
		int element;
		Node* after;

	public:

		Node::Node(Node* b, int e, Node* a)
		{
			before = b;
			element = e;
			after = a;
		}
	};

	vector<Node> structure;
	
public:

	SkipList::SkipList()
	{
		
	}

	bool SkipList::search(int numberToFind)
	{
		bool found = false;
		// look for top level of nodes
		// determin whether to look left or right // from current spot
		// look for next top level
		// go back to top
		return found;
	}

	void SkipList::insert(int numberToInsert)
	{
		if (structure.empty())
		{
			structure.push_back(new Node(nullptr, numberToInsert, nullptr));
		}
	}

	void SkipList::remove(int numberToRemove)
	{

	}
};