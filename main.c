#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int maxaccount=0;

int account[999];
int money[999];
char name[999][10];
char password[999][20];
char info[999][6][50];







int main()
{
    defaultaccount();

    int i=0;


        printf("\n\n\t\t\tWELCOME!\n\n\t\t\tLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        menu();
        return 0;
}
int menu()
{
    char choice,menu;
    printf("\n\n\t\t\tBANKING MANAGEMENT SYSTEM");

    login:

    printf("\n\n\n\n\t\t1.User Account\n\n\n\t\t2.Admin Account\n\n\n\t\t3.Create Account\n\n\n");

    menu=getch();
    if(menu=='2'){
        admin();
        goto login;
        }
    else if(menu=='1')
    {
        int n;
        printf("\n\n\t\tEnter Your Account No: ");
        scanf("%d",&n);

        /*if(n==123456789)
        {
            n=n-123456789;
            security(n);

        }

        else if(n>=0)
        {
            printf("\n\n\t\tInvalid Account,Try again");
            getch();
            goto login;
        }
        else
        {

            printf("System Error.......................");
            main();
        }
        */
        n=n-123456789;
            security(n);
        useraccount:
        printf("\n\n\n\t\t\tUSER MENU");
    printf("\n\n\t\t1.Deposit Money\n\t\t2.Money Withdraw\n\t\t3.Transfer Money\n");
    printf("\t\t4.Check Account Details\n\t\t5.Change Password\n\t\t6.Delete Account\n\t\t7.Logout\n");



    choice=getch();


    switch(choice)
    {
        case '1':deposite(n);
        goto useraccount;
        break;
        case '2':withdraw(n);
        goto useraccount;
        break;
        case '3':transfermoney(n);
        goto useraccount;
        break;
        case '4':accountdetails(n);
        goto useraccount;
        break;
        case '5':changepassword(n);
        goto useraccount;
        break;
        case '6':deleteaccount(n);
        goto useraccount;
        break;
        case '7':logout();
        break;
        default:
            printf("\n\n\t\tPlease press a valid number\n");
        goto useraccount;

    }
}

    else if(menu=='3')
        newaccount();
    else
        printf("\n\n\t\tPlease press a valid number\n");
        goto login;

}







logout()
{
    menu();
}
int fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

int admin()
{
    int n;
    char choice,menu;
    adminsecurity();




    useraccount:
    printf("\n\n\n\t\t\tADMIN PANEl");
    printf("\n\n\t\t1.Create new account\n\t\t2.Account Information\n\t\t3.Transfer Money\n");
    printf("\t\t4.Bank Money\n\t\t5.Change Password\n\t\t6.Delete Account\n\t\t7.Logout\n");



    choice=getch();
    int s;
    int b;
    int pass;
    int del;


    switch(choice)
    {
        case '1':newaccount();
        goto useraccount;
        break;
        case '2':
            printf("\n\n\t\t1.All Account\n\n\t\t2.Individual");
            char a=getch();
            if(a=='1')
                allaccount();
            else if(a=='2'){
                    printf("\n\n\t\tAccount No:");
                    scanf("%d",&b);
                    b=b-123456789;
            accountdetails(b);
            }
        goto useraccount;
        break;
        case '3':
        printf("\n\n\t\tEnter Senders Account No:");
        scanf("%d",&s);
        s=s-123456789;
        transfermoney(s);
        goto useraccount;
        break;
        case '4':bankmoney();
        goto useraccount;
        break;
        case '5':printf("\n\n\t\tEnter Account No To Change Password:");
        scanf("%d",&pass);
        pass=pass-123456789;

            changepassword(pass);
        goto useraccount;
        break;
        case '6':printf("\n\n\t\tEnter Account No to Delate:");
        scanf("%d",&del);
        del=del-123456789;
        deleteaccount(del);
        goto useraccount;
        break;
        case '7':logout();
        break;

        default:
            printf("\n\n\t\tPlease press a valid number\n");
        goto useraccount;

    }


}
int allaccount()
{
    printf("\n\n\t\tAccount No\tMoney\t\n");
for(int i=0;i<999;i++){
    printf("\n\n\t\t%d\t",account[i]);
    printf("%d\t\n",money[i]);

}
getch();
}
int bankmoney()
{
int sum=0;
for(int i=0;i<999;i++)
    sum+=money[i];
printf("\n\n\t\tTotal Bank Money= %d",sum);
getch();
}
int security(int n)
{

    char inputpassword[10];
    int i=0;
    int count=5;

    printf("\n\n\t\tPassword:");
    scanf("%s",inputpassword);

    if(strcmp(password[n],inputpassword)==0)
        {
            printf("\n\n\t\tWelcome!\n\t\tLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
            return 0;
        }

    else if(strcmp(password[n],inputpassword)!=0){

        while(strcmp(password[n],inputpassword)!=0){
            count--;
            if(count==0){

                        printf("System Error\n");
                printf("Please restart the system");
                for(i=0;i<=6;i++)
                {
                fordelay(100000000);
                printf(".");
                }
                menu();



            }

           printf("\n\nIncorrect Info, try again (%d attemp left)\n",count);

    printf("\n\n\t\tPassword:");
    scanf("%s",inputpassword);

    }}
}
int newaccount()
{
    char choice;
    char add[20];


    maxaccount+=1;
    account[maxaccount]=123456789+maxaccount;




    printf("\n\n\t\t\tCreate A New Account");

    printf("\n\n\t\tYour account number is:");
    printf("%d",account[maxaccount]);

        printf("\n\n\tEnter Your Name:");
    scanf("%s",&name[maxaccount]);

    printf("\n\n\tEnter the date of birth(mm/dd/yyyy):");
    scanf("%s",&info[maxaccount][1]);
    printf("\n\n\tEnter the age:");
    scanf("%s",&info[maxaccount][0]);
    printf("\n\n\tEnter Address:");
    scanf("%s",&info[maxaccount][2]);
    printf("\n\n\tEnter NID number:");
    scanf("%s",&info[maxaccount][3]);
    printf("\n\n\tEnter your phone number: ");
    scanf("%s",&info[maxaccount][4]);
    printf("\n\n\tEnter amount to deposite(Tk):");
    scanf("%d",&money[maxaccount]);
    printf("\n\n\tType of account:\n\t#Saving\n\t#Student\n\t#Business\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s",&info[maxaccount][5]);

    printf("\n\n\tSet Password:");
    scanf("%s",&password[maxaccount]);


    printf("\n\n\tAccount created successfully!");

    getch();

}
accountdetails(int n)
{


    printf("\n\n\t\tAccount no: %d\n",account[n]);

    printf("\n\n\t\tAccount Balence: %d\n",money[n]);

    printf("\n\n\t\tPassword: %s\n\n\n",password[n]);

    printf("\n\t\tName:");
    printf("%s",name[n]);


    printf("\nDate of birth(mm/dd/yyyy):");
    printf("%s",info[n][1]);
    printf("\nAge:");
    printf("%s",info[n][0]);
    printf("\nAddress:");
    printf("%s",info[n][2]);
    printf("\nNID number:");
    printf("%s",info[n][3]);
    printf("\nPhone number:");
    printf("%s",info[n][4]);

    printf("\nType of account:");
    printf("%s",info[n][5]);


    getch();



    getch();
}
int deposite(int n)
{
    int ammount;

    printf("\n\n\t\tEnter Ammount:");
    scanf("%d",&ammount);
    printf("\n\n\t\tPlease wait");
    for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }

    money[n]+=ammount;

    printf("\n\n\t\tDeposite Complete");
    getch();


}
int defaultaccount()
{
    account[0]=123456789;
    money[0]=2000000;
    name[0][0]='M';
    name[0][1]='r';
    name[0][2]='i';
    name[0][3]='d';
    name[0][4]='u';
    name[0][5]='l';

    password[0][0]='1';
    password[0][1]='2';
    password[0][2]='3';
    password[0][3]='4';

    info[0][0][0]='T';
    info[0][0][1]='H';
    info[0][0][2]='E';
    info[0][0][3]=' ';
    info[0][0][4]='O';
    info[0][0][5]='W';
    info[0][0][6]='N';
    info[0][0][7]='E';
    info[0][0][8]='R';


    return 0;


}
transfermoney(int n)
{
    int ammount;
    int reciver;
    printf("\n\n\t\tEnter Receiver's Account No:");
    scanf("%d",&reciver);
    reciver=reciver-123456789;
    printf("\n\n\t\tEnter Ammount:");
    scanf("%d",&ammount);
    printf("\n\n\t\tPlease wait");
    for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
    money[n]=money[n]-ammount;
    money[reciver]=money[reciver]+ammount;
    printf("\n\n\t\tTransfer Complete");
    getch();

}
int withdraw(int n)
{
    int ammount;

    printf("\n\n\t\tEnter Amount:");
    scanf("%d",&ammount);
    printf("\n\n\t\tPlease wait");
    for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }

    money[n]-=ammount;

    printf("\n\n\t\tWithdraw Complete");
    getch();
}
int changepassword(int n)
{
    printf("\n\n\t\tEnter New Password");
    scanf("%s",&password[n]);
    printf("\n\n\t\tPlease wait");
    for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
    printf("\n\n\t\tPassword Changed");
    getch();

}
deleteaccount(int n)
{

top:
    printf("\n\n\t\tAre you sure want to delete the account......?");
    printf("\n\n\t\t1.yes\n\n\t\t2.no");
    char choice=getch();
    if(choice=='2')
        return 0;
    else if(choice=='1'){
    printf("\n\n\t\tPlease wait");
    for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        account[n]=0;
    password[n][0]='0';
    password[n][1]='0';
    password[n][2]='0';
    password[n][3]='0';
    printf("\n\n\t\tAccount Delete Complete");
    getch();
    logout();
    }
    else
        printf("\n\n\t\tPlease press a valid number\n");
        goto top;
}


int adminsecurity()
{
    char account[10]="admin",password[10]="admin";
    char inputaccount[10]="admin",inputpassword[10]="admin";
    int i=0;
    int count=5;
    printf("\n\n\t\tUser:");
    scanf("%s",inputaccount);
    printf("\n\n\t\tPassword:");
    scanf("%s",inputpassword);

    if(strcmp(account,inputaccount)&&strcmp(password,inputpassword)==0)
        {
            printf("\n\nWelcome!\nLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
            return 0;
        }

    else if(strcmp(account,inputaccount)&&strcmp(password,inputpassword)!=0){

        while(strcmp(account,inputaccount)&&strcmp(password,inputpassword)!=0){
            count--;
            if(count==0){
                    for(int j=0;j<1;j){
                        printf("System Error\n");
                printf("Please restart the system");
                for(i=0;i<=6;i++)
                {
                fordelay(100000000);
                printf(".");
                }
                scanf("%d");
                main();
                }


            }

           printf("\n\nIncorrect Info, try again (%d attemp left)\n",count);
        printf("\n\n\t\tAccount No:");
    scanf("%s",inputaccount);
    printf("\n\n\t\tPassword:");
    scanf("%s",inputpassword);

    }}
}
