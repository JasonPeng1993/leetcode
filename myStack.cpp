#include "leetcode.h"
void myStack::push_back(int a)
{
    if(!q1.empty())
    {
        q1.push(a);
    }else{
        q2.push(a);
    }
}

int myStack::pop_back()
{
    int ret;
    
    if(!q1.empty())
    {
        int n = q1.size();
        while (n > 1)
        {
            q2.push(q1.front());
            q1.pop();
            --n;
        }
        ret = q1.front();
        q1.pop();
    }else{
        int n = q2.size();
        while (n > 1)
        {
            q1.push(q2.front());
            q2.pop();
            --n;
        }
        ret = q2.front();
        q2.pop();
    }
    return ret;
}
