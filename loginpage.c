//write a program to display login page by accepting userid and password from the user check whether given userid and password matches or not 
//constraints 
//if userid is wrong then display output as user doesn't exists
//if password doesn't matches then display incorrect password 
//if both password and userid is correct then display login successfull
#include <stdio.h>

int main() {
    int id=7963;
    int pwd=5321;
    int uid;
    int upwd;
    printf("Enter the user id:\n");
    scanf("%d",&uid);
    printf("Enter the password:");
    scanf("%d",&upwd);
    if(uid==id)
    {
        if(upwd==pwd)
        {
            printf("Login Successfull");
        }
        else
        {
            printf("Incorrect Password ");
        }
    }
    else
    {
        printf("User doesn't exist");
    }

    return 0;
}