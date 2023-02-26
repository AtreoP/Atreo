#include<iostream>
#include<mysql.h>
#include<mysqld_error.h>
void main(){
    DBPROCESS *Dbproc;
    LOGINREC *Login;
    char cUsername[30];
    char cPassword[10];
    Login=dblogin();
    cout<<"Enter the user name";
    cin>>cUsername;
    cout<<"Enter the password";
    cin>>cPassword;
    DBSETLUSER(Login,cUsername);
    DBSETLPWD(Login,cPassword);
    Dbproc=dbopen(Login,NULL);
    if(Dbproc==NULL){
        exit();
    }
    dbuse(Dbproc,"films");
}