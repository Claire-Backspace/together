#include<iostream>
using namespace std;
#include<stdio.h>
#include <string.h>
void bruteForce(char *S,char *P)
{
    //strlen头文件为#include <string.h>
    int lenS=strlen(S),lenP=strlen(P);

    for (int i = 0; i <= lenS-lenP; i++)
    {
        /* code */
        int flag=true;
        for (int j = 0; P[j] != '\0'; j++)
        {
            /* code */
            if(S[i+j]!=P[j]){
                flag=false;
                break;
            }
        }

        if (flag)
        {
            /* code */
            printf("pos=",i);
        } 
        
    }
    
}