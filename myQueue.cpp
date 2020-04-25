#include "leetcode.h"

void myQueue::push_back(int a)
{
    s1.push(a);
}
int myQueue::pop_back()
{
    int tem;
    if(s1.empty()&& s2.empty())
    {
            return -1;
    }
    if(!s2.empty())
    {
        tem = s2.top();
        s2.pop();
        return tem;
    }
    if(s2.empty() && !s1.empty())
    {
        while (!s1.empty())
        {
            tem = s1.top();
            s1.pop();
            s2.push(tem);
        }
        tem = s2.top();
        s2.pop();
        return tem;
    }
    return tem;
}
