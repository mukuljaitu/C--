#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct emp{
    string name,id,address;
    int contact,salary;
};
emp e[100];/* Creating an Array */
int total=0;
void empdata(){
    int choice;
    cout<<"How many employees data you want to enter?"<<endl;
    cin>>choice;
    for(int i=total;i<total+choice;i++){
        cout<<"Enter data of employee"<<i+1<<endl;
        cout<<"Employee Name: ";
        cin>>e[i].name;
        cout<<"ID: ";
        cin>>e[i].id;
        cout<<"Address: ";
        cin>>e[i].address;
        cout<<"Contact: ";
        cin>>e[i].contact;
        cout<<"Salary: ";
        cin>>e[i].salary;

    }
    total=total+choice;
};
void show(){
    if(total!=0){
        for(int i=0;i<total;i++){
                cout<<"Data of employee "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"ID: "<<e[i].id<<endl;
                cout<<"Address: "<<e[i].address<<endl;
                cout<<"Salary: "<<e[i].salary<<endl;
                cout<<"Contact: "<<e[i].contact<<endl;
        }
    }
    else{
        cout<<"Your record is empty";
    }
}
void search(){
    if(total!=0){
        string id;
        cout<<"Enter id of data which you want to search"<<endl;
        cin>>id;
        for(int i=0;i<total;i++){
            if(id==e[i].id){
                cout<<"Data of employee "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"ID: "<<e[i].id<<endl;
                cout<<"Address: "<<e[i].address<<endl;
                cout<<"Salary: "<<e[i].salary<<endl;
                cout<<"Contact: "<<e[i].contact<<endl;
                break;  
            }
            if(i==total-1){
                cout<<"No such record found";
            }
        }
    }
    else{
        cout<<"Your record is empty"<<endl;
    }
};
void update(){
    if(total!=0){
        string id;
        cout<<"Enter id of data which you want to update"<<endl;
        cin>>id;
        for(int i=0;i<total;i++){
            if(id==e[i].id){
                cout<<"Previous data"<<endl;
                cout<<"Data of employee "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"ID: "<<e[i].id<<endl;
                cout<<"Address: "<<e[i].address<<endl;
                cout<<"Salary: "<<e[i].salary<<endl;
                cout<<"Contact: "<<e[i].contact<<endl;
                cout<<"\nEnter new data"<<endl;;
                cout<<"Employee Name: ";
                cin>>e[i].name;
                cout<<"ID: ";
                cin>>e[i].id;
                cout<<"Address: ";
                cin>>e[i].address;
                cout<<"Contact: ";
                cin>>e[i].contact;
                cout<<"Salary: ";
                cin>>e[i].salary;
                break;  
            }
            if(i==total-1){
                cout<<"No such record found";
            }
        }
    }
    else{
        cout<<"Yoyr record is empty"<<endl;
    }
};
void del(){
    if(total!=0){
        char user;
        cout<<"Press 1 to delete full record"<<endl;
        cout<<"Press 2 to delete specific record"<<endl;
        user=getch();
        if(user=='1'){
            total=0;
            cout<<"All record is deleted..!!"<<endl;
        }
        else if(user=='2'){
            string id;
            cout<<"Enter id of data which you want to search"<<endl;
            cin>>id;
            for(int i=0;i<total;i++){
                if(id==e[i].id){
                    for(int j=i;j<total;j++){
                        e[j].name=e[j+1].name;
                        e[j].id=e[j+1].id;
                        e[j].address=e[j+1].address;
                        e[j].contact=e[j+1].contact;
                        e[j].salary=e[j+1].salary;
                        total--;
                        break;
                    }
                if(i==total-1){
                    cout<<"No such record found"<<endl;
                }
                   
                }
            } 
        }
    }
    else{
        cout<<"No such record found"<<endl;
    }
};
int main(){
    cout<<"\n\t\tEmploye Management System"<<endl;
    cout<<"\n\t\tSign Up"<<endl;
    string username,password;
    cout<<"\n\n\t\tEnter usename: ";
    cin>>username;
    cout<<"\n\n\t\tEnter password: ";
    cin>>password;
    cout<<"\n\t\tYour id is creating..PLease wait";
    for(int i=0;i<8;i++){
        cout<<".";
        Sleep(1000);
    }
    cout<<"\n\t\tYour id created successfully"<<endl;
    system("cls");
    start:
    cout<<"\n\t\tEmploye Management System"<<endl;
    cout<<"\n\t\tLogin"<<endl;
    string username1,password1;
    cout<<"username: ";
    cin>>username1;
    cout<<"password: ";
    cin>>password1;
    if(username1==username&&password1==password){
        system("cls");
        char user;
        while(1){
            cout<<"\n\nPress 1 to enter data"<<endl;
            cout<<"\n\nPress 2 to show data"<<endl;
            cout<<"\n\nPress 3 to search data"<<endl;
            cout<<"\n\nPress 4 to update data"<<endl;
            cout<<"\n\nPress 5 to delete data"<<endl;
            cout<<"\n\nPress 6 to logout"<<endl;
            cout<<"\n\nPress 7 to exit"<<endl;
            user=getch();
            switch (user){
                 case '1':
                    empdata();
                    break;
                 case '2':
                    show();
                    break;
                 case '3':
                    search();
                    break;
                 case '4':
                    update();
                    break;
                 case '5':
                    del();
                    break;
                 case '6':
                    goto start;
                    break;
                default:
                cout<<"\aInvalid input"<<endl;
                    break;
            }
        }
    }
    else if (username1!=username){
        cout<<"Your username is incorrect"<<endl;
        Sleep(3000);
        goto start;
    }
    else if (password1!=password){
        cout<<"Your password is incorrect"<<endl;
        Sleep(3000);
        goto start;
    }

    return 0;
}