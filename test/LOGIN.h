

int login (void)
{
    char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"sakif")==0){
        if(strcmp(password,"123")==0){

        printf("\nWelcome.Login Success!");


        }else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
}

}
