
#include <vector>
#include <string>
#include <iostream>
#include <stack>
#include <queue>
#include <map>
using std::map;
using std::queue;
using std::stack;
using std::cout;
using std::string;
using std::vector;

int binarry_search(int a[], int n, int key);

class SolutionHuiwen {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>> &queries);
};

class SolutionMaintan
{
public:
    void wiggleSort(vector<int> &nums);

    void swap(int &a, int &b);
};



class LinkList{
private:
    int val;
    LinkList *next;
public:
    //初始化链表
   LinkList *initList();

    //尾插法插入节点
    void appendNode(LinkList* head, LinkList* node);

    //释放链表
    void freeList(LinkList *head);

    //合并两个有序链表，生成一个新的链表
    LinkList *mergeList(LinkList *l1, LinkList *l2);
};

class myQueue
{   
private:
    stack<int> s1, s2;
public:
    void push_back(int a);
    int pop_back();
};

class myStack
{
private:
    queue<int> q1, q2;
public:
    void push_back(int a);
    int pop_back();
};


class SolutionPrimeArray {
public:
    int numPrimeArrangements(int n);

    int getjiechen(int n);
};

class SolutionPuzzle {
public:
    vector<int> findNumOfValidWords(vector<string> &words, vector<string> &puzzles);
};

void bublesort(int a[], int n);
void selectsort(int a[], int n);
void insertsort(int a[], int n);
void quicksort(int a[], int low, int high);