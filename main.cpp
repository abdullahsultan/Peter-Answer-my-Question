#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
    on:
    char hidden[31],l,temp;
    int a,x=0,b,h=0;
    char peter[31] = {'P','e','t','e','r',' ','p','l','e','a','s','e',' ','a','n','s','w','e','r',' ','m','y',' ','q','u','e','s','t','i','o','n'};
    hidden[0]=-1;
    hidden[1]=-1;
    hidden[2]=-1;
    cout<<"\nGive your petition \n";

    for(b=0; b<=31; b++)
    {

        l=getch();
        //x=x+1;

        if(l=='.')
        {

            for(a=b; a<=31; a++)
            {
                temp=getch();
                if(temp=='.')
                {
                    break;
                }
                hidden[x]=temp;
                cout<<peter[a];
                x=x+1;
                b=b+1;
            }
        }
        if(l!='.')
            cout<<l;
    }
    cout<<"\n What's your Question? \n";
    cin>>temp;

    if(hidden[0]!=-1 &&  hidden[1]!=-1 && hidden[2]!=-1)
    {
        for(a=0; a<=x-1; a++)
        {
            cout<<hidden[a];
        }
    }
    if(hidden[0]==-1 &&  hidden[1]==-1 && hidden[2]==-1)
        cout<<"\n I am not Google.";
    goto on;
    return 0;
}
