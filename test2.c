#include<stdio.h>
#include<string.h>
void main(){
    char str[100],f='a';
    printf("Enter valid string : ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        switch(f)
        {
            case 'a': 
                if(str[i]=='0') f='b';
                else if(str[i]=='1') f='a'; 
            case 'b':
                if(str[i]=='0') f='b';
                else if(str[i]=='1') f='c';

            case 'c':
              if(str[i]==0) f='b';
              else if(str[i]==1) f='a';
        }

    }

    if(f='c')
    printf("accepted");
    else 
       printf("rejected");
    return;   
}