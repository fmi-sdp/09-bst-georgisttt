// bst9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct node{

    int val;
    node* left;
    node* right;
    node(int _val =0, node* _left = nullptr, node * _right= nullptr ):val(_val) , left(_left ) , right (_right ) {}


};

// priemame che vhoda e korekten
node *  totree(string arr) {
    if (arr=="()") return nullptr;

    int head = 0;
    int it = 1;
    while (arr[it] <= '9' && arr[it] >= '0') {
        head = 10 * head + (arr[it] - '0');
        it++;

    }





    string l="(";
    int counter = 1;
    it++;
    while (counter != 0) {

        if (arr[it] == '(') counter++;

        if (arr[it] == ')')  counter--;

        l.insert(l.end(), arr[it]);
        it++;


    }
   
    string r  (arr.begin() + it , arr.end() -1);
    return new node{ head , totree(l) , totree(r) };




    
    
    



}



void incrord(node* root) {

    if (root == nullptr) return;
    incrord(root->left);
    std::cout << root->val<<endl;
    incrord(root->right);




}

void decord(node* root) {

    if (root == nullptr) return;
    decord(root->right);
    std::cout << root->val << endl;
    decord(root->left);




}


int sum(node* root) {
    if (root == nullptr) return 0;
    return root->val + sum(root->left) + sum(root->right);
}







void out(node* root) {
    if (root == nullptr) return;

    std::cout << root->val << endl;
    out(root->left);
    out(root->right);
    return;



}




int main(){
    string arr = "(10(7(2()())(8()()))(12(11()())(15()())))";
    node* st = totree(arr);
    //out(st);
    decord(st);
    cout<<sum(st);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
