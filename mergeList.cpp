#include "leetcode.h"


//初始化链表
LinkList* LinkList::initList()
{
    LinkList *head = new LinkList;
    head->val = 0;
    head->next = nullptr;
    return head;
}

//尾插法插入节点
void LinkList::appendNode(LinkList* head, LinkList* node)
{
    LinkList *p = head;
    while (p->next)
    {
        p = p->next;
    }
    p->next = node;
}

//释放链表
void LinkList::freeList(LinkList* head)
{
    LinkList *t1, *t2;
    t1 = head;
    t2 = head->next;
    while (t2)
    {
        delete t1;
        t1 = t2;
        t2 = t2->next;
    }
    delete t1;
}



//合并两个有序链表，生成一个新的链表
LinkList *LinkList::mergeList(LinkList* l1, LinkList* l2)
{
    LinkList *p1 = l1->next;
    LinkList *p2 = l2->next;
    LinkList *ret = new LinkList;
    LinkList *p3 = ret;
    while (p1 && p2)
    {
        LinkList *tem = new LinkList;
        if(p1->val < p2->val)
        {
            tem->val = p1->val;
            tem->next = nullptr;
            p3->next = tem;
            p3 = p3->next;
            p1 = p1->next;
        }else{
            tem->val = p2->val;
            tem->next = nullptr;
            p3->next = tem;
            p3 = p3->next;
            p2 = p2->next;
        }
    }
    while (p1)
    {
        LinkList *tem = new LinkList;
        tem->val = p1->val;
        tem->next = nullptr;
        p3->next = tem;
        p3 = p3->next;
        p1 = p1->next;
    }
    while (p2)
    {
        LinkList *tem = new LinkList;
        tem->val = p2->val;
        tem->next = nullptr;
        p3->next = tem;
        p3 = p3->next;
        p2 = p2->next;
    }

    return ret;
}
