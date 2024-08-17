#ifndef CALC_PROCESS_H
#define CALC_PROCESS_H

#include<stack>
#include<string>
using namespace std;

string Conv(char* exp)
{
    stack<char> st;
    char e;
    //string res;
    int i = 0;
    char res[100] = { 0 };

    while (*exp != '\0')
    {
        switch (*exp)
        {
        case '(':
            st.push('(');
            exp++;
            break;
        case ')':
            e = st.top(); st.pop();
            while (e != '(')
            {
                res[i++] = e;
                e = st.top(); st.pop();
            }
            exp++; break;
        case '+':
        case '-':
            while (!st.empty())
            {
                e = st.top();
                if (e != '(')
                {
                    res[i++] = e;
                    st.pop();
                }
                else
                    break;
            }
            st.push(*exp);
            exp++; break;
        case '*':
        case '/':
            while (!st.empty())
            {
                e = st.top();
                if (e == '*' || e == '/')
                {
                    res[i++] = e;
                    st.pop();
                }
                else
                    break;


            }
            st.push(*exp);
            exp++; break;

        default:
            if(*exp>='a'&&*exp<='z')
            {
                return "a";
            }
            while (*exp >= '0' && *exp <= '9')
            {
                res[i++] = *exp;
                exp++;
            }
            res[i++] = '#';
        }
    }
    while (!st.empty())
    {
        e = st.top(); st.pop();
        res[i++] = e;
    }
    res[i] = '\0';
    string ans;
    ans.assign(res);
    return ans;

}
double comvalue(char* hou)
{
    double a, b, c, d, e;
    stack<double> st;
    while (*hou != '\0')
    {
        switch (*hou)
        {
        case '+':
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            c = b + a;
            st.push(c);
            break;
        case '-':
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            c = b - a;
            st.push(c);
            break;
        case '*':
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            c = b * a;
            st.push(c);
            break;
        case '/':
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            if (a != 0)
            {
                c = b / a;
                st.push(c);
                break;
            }
            else
            {
                return 139213.8772;
            }
            break;

        default:
            if(*hou>='a'&&*hou<='z')
            {
                return 139213.8772;
            }
            d = 0;
            while (*hou >= '0' && *hou <= '9')
            {
                d = 10 * d + *hou - '0';
                hou++;
            }
            st.push(d);
            break;
        }
        hou++;
    }
    e = st.top();
    return e;
}




#endif // CALC_PROCESS_H
