#include<iostream>

using namespace std;

int main(){
    char startValue,choiceAgain;
    float Shopping(void);
    startLevel:
    cout<<"Please press S to start Shooping: ";
    start:
    cin>>startValue;
    if(startValue=='s'|| startValue=='S'){
        float totalAm=Shopping();
        cout<<"Total Bill Amount is: "<<totalAm<<endl;
        shopAgain:
        cout<<"\n\nDo you want shopping again, Y or N: ";
        cin>>choiceAgain;
        if(choiceAgain=='y'|| choiceAgain=='Y'){
            goto startLevel;
        }
        else if(choiceAgain=='n'|| choiceAgain=='N'){
            cout<<"Thanks for Shopping"<<endl;
        }
        else{
            cout<<"You have entered wrong options, please type again"<<endl;
            goto shopAgain;
        }
    }
    else{
        cout<<"You have entered wrong options, please type s"<<endl;
        goto start;
    }
}

float Shopping(){
    char choice,item;
    float total=0;
    int quantity;
    cout<<"-------------------Wecome To Shopping-------------------\n"<<endl;
    cout<<"-------------Please follow instructions-------------"<<endl;
    cout<<"(1) Please enter m to order mobiles."<<endl;
    cout<<"(2) Please enter l to order laptops."<<endl;
    cout<<"(3) Please enter d to order desktops."<<endl;
    cout<<"(4) Please enter s to order Speakers."<<endl;
    cout<<"(5) Please enter h to order Headphones.\n"<<endl;
    cin>>choice;  

/* Mobile phones */

    if(choice=='m'||choice=='M'){
        Mobilelevel:
        cout<<"\n\nMobile details:"<<endl;
        cout<<"(1)Apple =>Price : 40,000"<<endl;
        cout<<"(2)Vivo =>Price : 25,000"<<endl;
        cout<<"(3)Oppo =>Price : 20,000"<<endl;
        cout<<"(4)Redmi =>Price : 18,000"<<endl;
        cout<<"(5)Realme =>Price : 170,000"<<endl;
        cout<<"(6)Samsung =>Price : 25,000\n"<<endl;
        cout<<"Please enter your choice: ";
        cin>>item;
        if(item=='1'){
            cout<<"Enter quantity: ";
            cin>>quantity;
            total = total+(quantity*40000);
        }
        else if(item=='2'){
            cout<<"Enter quantity: ";
            cin>>quantity;
            total = total+(quantity*25000);
        }
        else if(item=='3'){
            cout<<"Enter quantity: ";
            cin>>quantity;
            total = total+(quantity*20000);
        }
        else if(item=='4'){
            cout<<"Enter quantity: ";
            cin>>quantity;
            total = total+(quantity*18000);
        }
        else if(item=='5'){
            cout<<"Enter quantity: ";
            cin>>quantity;
            total = total+(quantity*170000);
        }
        else if(item=='6'){
            cout<<"Enter quantity: ";
            cin>>quantity;
            total = total+(quantity*25000);
        }
       else{
        cout<<"You have entered wrong options, please type s"<<endl;
        goto Mobilelevel;
        }
    }
    return total;
}