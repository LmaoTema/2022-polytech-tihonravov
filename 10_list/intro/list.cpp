#include <iostream>
using namespace std;

struct Node 
{
    string val;
    Node* next;

    Node(string _val) : val(_val), next(nullptr) {}
};

struct list
 {
    Node* first;
    Node* last;

    list() : first(nullptr), last(nullptr) {}

    bool is_empty()
    {
        return first == nullptr;
    }

    void push_back(string _val)
    {
        Node* p = new Node(_val);
        if (is_empty())  
        {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    void print() 
    {
        if (is_empty()) return;
        Node* p = first;
        while (p)
        {
            cout << p->val << "->";
            p = p->next;
        }
        cout << endl;
    }
void push_forward(string _val)
};
{
    Node* p = new Node(_val);
    if (is_empty())
    {
      first = p;
      last = p;
      return;
    }
    first->next = p;
    first = p;
};
int main() 
{
    list l;
    l.push_back("420");
    l.push_back("69");
    l.push_back("0101");
    l.push_back("314");
    l.push_back("214");
    l.print();
    return 0;
}