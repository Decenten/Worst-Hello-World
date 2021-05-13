#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// Define a class for the Linked List 
class Node
{
    public:
        string data;
        Node * next;
};

// Search each character based on defined lowercase/capital lettes
int main()
{
    // Variable & Node Declarations
    Node* helloWorld = NULL;
    Node* lowercase = NULL;
    Node* uppercase = NULL;
    int helloLength,lowerLength,upperLength = 0;

    // Assign a new Node, data and reference the next link
    helloWorld = new Node();
    helloWorld->data = "Hello World";
    helloWorld->next = lowercase;
    helloLength = helloWorld->data.length();

    lowercase = new Node();
    lowercase->data = "abcdefghijklmnopqrstuvwxyz";
    lowercase->next = uppercase;
    lowerLength = lowercase->data.length();
    
    uppercase = new Node();
    uppercase->data = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    uppercase->next = NULL;
    upperLength = uppercase->data.length();
    
    // For the length of the word
    for (int helloCompare = 0; helloCompare < helloLength; helloCompare++)
    {
        // While the above is going we want to iterate through each letter of the word and compare it to the alphabet
        for (int indexComp = 0; indexComp < lowerLength; indexComp++)
        {
            if(helloWorld->data[helloCompare] == lowercase->data[indexComp] || helloWorld->data[helloCompare] == uppercase->data[indexComp])
            {
                cout << helloWorld->data[helloCompare];
            }
        }
    }
    return 0;
}