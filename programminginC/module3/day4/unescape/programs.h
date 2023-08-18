#include<stdio.h>

int getLine(char s [], int lim){   
    int c , i ;
    for ( i = 0; i <lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i)
        s [ i ] = c;
    if (c == '\n'){
        s [ i ] = c;
        ++i;
    }
    s [ i ] = '\0' ;
    return i ;
}

void unescape (char s[], char t[]){
    int i,j;
    for (i = j = 0; t[i] !='\0'; ++i){
        switch (t[i]){
            case '\\':
                switch(t[++i]){
                    case 'n':
                        s[j++] = '\n';
                        i++;
                        break;
                    case 't':
                        s[j++] = '\t';
                        i++;
                        break;
                    default:
                        s[j++] = '\\';
                        break;
                }
            default:
                s[j++] = t[i];
                break;
        }
        s[j] = '\0';
    }
}
//  void unescape(char s[], char t[]){
//     int i,j;
//     for(i = j = 0; t[i] != '\0'; ++i){
//         if(t[i] != '\\')
//             s[j++] = t[i];
//         else{
//             switch (t[i++]){
//                 case 'n':
//                     s[j++] = '\n';
//                     break;
//                 case 't':
//                     s[j++] = '\t';
//                     break;
//                 default:
//                     s[j++] = '\\';
//                     s[j++]=t[i];
//                     break;
//             }
//         }
//         s[j] = '\0';
//     }
//  }
