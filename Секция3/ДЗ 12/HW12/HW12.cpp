#include <iostream>
#include <algorithm>

struct Node
{
    int dat;
    Node* left;
    Node* right;
};

struct bintree
{
    Node* MainRoot;
};

void TreeInit(bintree* tree)
{
    tree->MainRoot = NULL;
}

Node* balancedTree(int n)
{
    Node* newNode;
    int x;
    int nL;
    int nR;
    if (n == 0)
    {
        return nullptr;
    }
    else
    {
        nL = n / 2;
        nR = n - nL - 1;
        newNode = new Node;
        newNode->dat = rand() % 10 + 1;
        newNode->left = balancedTree(nL);
        newNode->right = balancedTree(nR); 
    }
    return newNode;
}

void printTree(Node* root)
{
    if (root)
    {
        std::cout << root->dat;
        if (root->left || root->right)
        {
            std::cout << "(";
            if (root->left)
                printTree(root->left);
            else
                std::cout << "NULL";
            std::cout << ",";
            if (root->right)
                printTree(root->right);
            else
                std::cout << "NULL";
            std::cout << ")";         
        }
    }
}

int checkdeep2(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
        return (1+checkdeep2(root->left));
}

int checkdeep(Node* root)
{
    int q = 1;
    int b = 3;
    int max;
    if (root)
    {
        std::cout << root->dat;
        q = checkdeep2(root->left) + 1;
        b = checkdeep2(root->right) + 1;
    }
    max = q;
    if (max < b)
        max = b;
    return max;
}

bool checkBalance(Node* root)
{
    if (root)
    {
        int R = checkdeep(root->right);
        int L = checkdeep(root->left);
        if (R-L == 1 || R-L == 0 || R-L == -1)
        {
            std::cout << std::endl << "balanced tree" << std::endl;
            return true;
        }
        else
        {
            std::cout << std::endl << "unbalanced tree" << std::endl;
            return false;
        }
    }
}


Node* treeins(Node* tree, int data)
{
    Node* newNode;
    newNode = new Node;
    newNode->dat = data;
    newNode->left = NULL;
    newNode->right = NULL;
    Node* current = tree;
    Node* pearent = tree;
    if (tree == NULL)
        tree = newNode;
    else
    {
        while (current->dat != data)
        {
            pearent = current;
            if (current->dat > data)
            {
                current = current->left;
                if (current == NULL)
                {
                    pearent->left = newNode;
                    return tree;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    pearent->right = newNode;
                    return tree;
                }

            }
        }
    }
    return tree;


}


//================================================== EXRS 2 ==================================================

bool binRecursiveSearch(Node* root, int value)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->dat == value)
    {
        return true;
    }
    if (value < root->dat)
    {
        return binRecursiveSearch(root->left, value);
    }
    else
    {
        return binRecursiveSearch(root->right, value);
    }
}



int main()
{
    
    //================================================== EXRS 1
    std::cout << std::endl << std::endl << "========== Exrsz 1 ==========" << std::endl;
    
    srand(time(0));

    int N = 50;
    int C = 10000;
    int balancecount = 0;
    bintree** trees = new bintree*[N];
    for (int i = 0; i < N; i++)
    {
        trees[i] = new bintree;
        TreeInit(trees[i]);
        for (int j = 1; j < C; j++)                                 //Makes both balanced and unbalanced trees
        {
            int R = rand();                                         //intresting, that № of elements depends on limits of random. case system starts to skip similar values. and if i try to enter rand from 1 to 5 10000 times, than i take only 5 nods!
            trees[i]->MainRoot = treeins(trees[i]->MainRoot, R);
        }
        //trees[i]->MainRoot = balancedTree(C);                     // that alternative for cycle from 195-199 lines. more random trees, but all they balanced T__T
        printTree(trees[i]->MainRoot);
        bool Q = checkBalance(trees[i]->MainRoot);
        if (Q == true)
            balancecount++;
    }    

    // that part has made for controllable creation of balanced and unbalanced trees
    /*
    tree->MainRoot = treeins(tree->MainRoot, 10);
    tree->MainRoot = treeins(tree->MainRoot, 9);
    tree->MainRoot = treeins(tree->MainRoot, 8);
    tree->MainRoot = treeins(tree->MainRoot, 7);
    tree->MainRoot = treeins(tree->MainRoot, 11);
    tree->MainRoot = treeins(tree->MainRoot, 12);
    printTree(tree->MainRoot);
    */
    std::cout << "Total balanced trees: " <<  balancecount;
    


    //================================================== EXRS 2
    std::cout << std::endl << std::endl << "========== Exrsz 2 ==========" << std::endl;

    std::cout << "Enter value: ";
    int val;
    std::cin >> val;
    bintree* treeforsearch = new bintree;
    TreeInit(treeforsearch);

    srand(time(0)); // You can comment that line to remove random generation for easyest checking code.

    for (int i = 1; i <= 20; i++)
    {
        int R = rand() % 20 + 1;
        treeforsearch->MainRoot = treeins(treeforsearch->MainRoot, R);
    }
    printTree(treeforsearch->MainRoot);

    std::cout << std::endl;

    bool check = binRecursiveSearch(treeforsearch->MainRoot, val);
    if (check == true)
    {
        std::cout << "Value " << val << " exists in tree!" << std::endl;
    }
    else
    {
        std::cout << "Value " << val << " dont exists in tree!" << std::endl;
    }
}
