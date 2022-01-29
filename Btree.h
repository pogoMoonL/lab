class BTree
{

private:
    struct Node
    {
        Node *left;
        Node *right;
        int data;
    };

    Node *root;

    void insert(Node **t, const int &x);

public:
    BTree();
    void insert(const int &x);
    void print();
};