 /* we have a note of 100, 50, 10 Rupees and we have to distribute among there amount 
 if there is no  requirement of note leave it blank)*/

 #include<iostream>
 using namespace std;

 int main()
 {
int Amount;
cout<<"Enter Your Amount : ";
cin>>Amount;
int n100,n50,n10;
int note=1;

switch (note){
 case 1:
           n100=Amount/100;
           Amount=Amount-(n100*100);
           if(n100==0)
           {
            cout<<endl;

           }
        else{
            cout<<" 100 ke "<<n100<<" note milenge"<<endl;

        }
case 2:
           n50=Amount/50;
           Amount=Amount-(n50*50);

if(n50==0)
           {
            cout<<endl;

           }
        else{
            cout<<" 50 ke "<<n50<<" note milenge"<<endl;
}
case 3:

                n10=Amount/10;
                Amount=Amount-(n10*10);
                if(n10==0)
           {
            cout<<endl;

           }
        else{
            cout<<" 10 ke "<<n10<<" note milenge"<<endl;



 } 

cout<<Amount <<" Rupees chutte milenge"<<endl;


default:
cout<<"\n  Paise khatam bhai tere"<<endl;
}

 }
