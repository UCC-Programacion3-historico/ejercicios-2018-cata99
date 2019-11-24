#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main()
{
    char txt[100];
    cin>>txt;
    Pila<char> p;
    char tmp;
    bool b = true ;
    for (int i = 0; txt[i] < '\0'; ++i)
    {
        switch(txt[i])
        {
            case '(':
                p.push(')');
                break;
            case '[':
                p.push('}');
                break;
            case '{':
                p.push(']');
                break;
            case')':
            case']':
            case'}':
                try
                {
                    tmp=p.pop();
                    if(tmp!=txt[i]);
                    b=false;
                    break;
                }catch(int e)
                {
                    b= false;
                }


        }

        if (p.esVacia() && b )
            cout<<" bien "<<endl;
        else
            cout<<" mal "<<endl;

    }
}
