// This is a test file for BST312.h
// Jackson S. Hall / 4/19/19

#include <iostream>
#include "BST312.h"

using namespace std;

int main()
{
   cout << "---------" << endl;
   cout << "INT" << endl;
   cout << "---------" << endl;

   BST_312<int> t;
   t.insertItem(2019);
   t.insertItem(2021);
   t.insertItem(1999);
   t.insertItem(1967);
   t.insertItem(2001);
   t.insertItem(1980);
   t.insertItem(1963);
   t.insertItem(1990);

   cout << "# of nodes: " << t.countNodes() << endl;

   vector<int> preOrder = t.preOrderTraversal();
   vector<int> inOrder = t.inOrderTraversal();
   vector<int> postOrder = t.postOrderTraversal();

   //cout << "Pre-Order Size: " << preOrder.size() << endl;
   cout << "Pre-Order Traversal" << endl;
   for (int i = 0; i < preOrder.size(); i++) {
      cout << preOrder[i] << endl;
   }
   cout << endl;

   cout << "In-Order Traversal" << endl;
   for (int i = 0; i < inOrder.size(); i++) {
      cout << inOrder[i] << endl;
   }
   cout << endl;

   cout << "Post-Order Traversal" << endl;
   for (int i = 0; i < postOrder.size(); i++) {
      cout << postOrder[i] << endl;
   }
   cout << endl;

   cout << "Is 1992 in tree? " << t.isItemInTree(1992) << endl;
   cout << "Is 1990 in tree? " << t.isItemInTree(1990) << endl;
   cout << endl;

   cout << "---------" << endl;
   cout << "STRING" << endl;
   cout << "---------" << endl;

   BST_312<string> s;
   s.insertItem("Jackson");
   s.insertItem("Spencer");
   s.insertItem("Matt");
   s.insertItem("Henry");
   s.insertItem("Alex");
   s.insertItem("Hayden");
   s.insertItem("Himani");
   s.insertItem("Sam");
   s.insertItem("Ani");
   s.insertItem("Mats");
   s.insertItem("Jackson"); // Again - Should not do anything

   cout << "# of nodes: " << s.countNodes() << endl;

   vector<string> preOrderS = s.preOrderTraversal();
   vector<string> inOrderS = s.inOrderTraversal();
   vector<string> postOrderS = s.postOrderTraversal();

   //cout << "Pre-Order Size: " << preOrder.size() << endl;
   cout << "Pre-Order Traversal" << endl;
   for (int i = 0; i < preOrderS.size(); i++) {
      cout << preOrderS[i] << endl;
   }
   cout << endl;

   cout << "In-Order Traversal" << endl;
   for (int i = 0; i < inOrderS.size(); i++) {
      cout << inOrderS[i] << endl;
   }
   cout << endl;

   cout << "Post-Order Traversal" << endl;
   for (int i = 0; i < postOrderS.size(); i++) {
      cout << postOrderS[i] << endl;
   }
   cout << endl;

   cout << "Is Jackson in tree? " << s.isItemInTree("Jackson") << endl;
   cout << "Is Sasha in tree? " << s.isItemInTree("Sasha") << endl;

   return 0;
}

