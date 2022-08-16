#include<iostream>
using namespace std;


int main()
{
    int amount;
    cout<<"enter amount:  ";

    cin>>amount;

int note=1;
int n100,n50,n10;
switch(note)
{
    case 1:

       n100=amount/100;
       amount=amount-(n100*100);

      cout<<n100 <<"   100 rs ke notes "<<endl;

    case 2:
            n50=amount/50;
           amount =amount-(n50*50);

           cout<<n50<<"  50 rs ke note "<<endl;

    case 3:
           n10=amount/10;
           amount=amount-(n10*10);

           cout<<n10<<"  10rs ke note milenge "<<endl;


           default:

           cout<<"bs bhai khtm hua paisa "<<endl;
}
}

