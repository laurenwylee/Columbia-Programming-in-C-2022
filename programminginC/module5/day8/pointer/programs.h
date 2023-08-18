#include<stdio.h>
#define ALLOCSIZE 10000
char allocbuff[ALLOCSIZE];
char *allocp = allocbuff;
// same as &allocbuff[0]

/*
char* alloc(int n){
    //&allocbuf[0] + size -  last free position
    if(allocbuff + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp - n; //return to use new space
    }
    else{
        return NULL;
        //return 0; //only num that becomes null pointer
    }
}

void afree(char *p){
    //p greater than the first elemnt
    //check still in buffer
    //by adding move allocbuff to end
    if( p > allocbuff && p < allocbuff+ALLOCSIZE){
        allocp = p;
    }
}

//stame as s[]
int mod_strlen(char* s){
    char *p = s;
    int i;
    while (*p != '\0'){
        ++p;
    }
    return (p-s);
    // for(i = 0; *s != '\0'; i++)
    // {
    //     p = p+1;
    // }
    //return i;
}

void strcopy(char *s, char *t){
    // for(int i = 0; t[i] != '\0'; i++){
    //     t[i] = s[i];
    // }

    // while((*s=*t)!='\0'){
    //     ++s;++t;
    // }

    // while((*s++=*t++)!='\0'){
    //     ++s;++t;
    // }

    while((*s++ = *t++))

    //s = t; //only copy pointers
}


int strCmp(char *s, char *t){
    // int i;
    //  for(i = 0; t[i] != '\0' && s[i] != '\0'; i++){
    //     if (t[i] < s[i]){
    //         return 1;
    //     } else if(t[i] > s[i]){
    //         return -1;
    //     }
    // }
    // if (t[i] == '\0' && s[i] == '\0'){
    //     return 0;
    // } else if(t[i] == '\0'){
    //     return 1;
    // } else{
    //     return -1;
    // }
  
    // for(;*s!='\0' && *t!='\0'; s++,t++ ){
    //     if (*s>*t){
    //         printf("here");
    //         return 1;
    //     } else if( *t>*s){
    //         return -1;
    //     }
    // }
    // if ( *t =='\0' && *s =='\0'){
    //     return 0;
    // }
    // else if (*s == '\0'){
    //     return -1;
    // } else{
    //     printf("there");
    //     return 1;
    // }

    for(; *s == *t; ++s;++t){
        if (*s == '\0')
            return 0;
        return *s-*t;
    }
    

    void Strcat(char* s, char* t){
        int i;
        for(i = 0 ; s[i] != '\0' ;i++);
        for (int j = 0; t[j] != '\0'; j++, i++){
            s[i] = t[j];
        }

        //  while (*s){
        //     s++;
        //  }
        //  for(;*t != '\0'; t++ ,s++){
        //     *s = *t;
        //  }
        //while(*s++ = *t++)

    }
    

    void Strncpy(char *s, char *t, int n){
        int i;
        for (i = 0; i < n && *t != '\0'; (*s++=*t++),i++ );
        for(;i<n;(*s++=0),i++ );
        // while(counter < n){
        //     counter++
        //     s++ = t++;
        // }
    }
    

    void Strncat(char* s, char *t,int n){
        // while(*s){
        //     s++;
        // }
        // Strncpy(s, t, n);
        Strncpy((*s+mod_strlen()), t,n);
    }

    */
    int Strncmp(char* s, char *t, int n){
        // while (n > 0){
        //     for(; *s == *t; ++s,++t,n--){
        //         if (*s == '\0')
        //             return 0;
        //     } 
        //     return *s-*t;
        // }
        // return 0;
        for(; *s == *t; ++s,++t,n--){
            if (*s == '\0' || --n<=0 )
                return 0;
        } 
        return *s-*t;
    }
    

    int strend(char* s, char* t){
        while(*s){
            s++;
        }
        char *p = t;
        while(*p){
            s--;
            p++;
        }
        for(; *s == *t ; ++s, ++t);
        if (*s == '\0')
            return 1;
        return 0;

        // char *bs = s;
        // char *bt = t;
        // for(; *s; s++);
        // for(; *t; t++;)
        // for(; *s == *t; --s, --t){
        //     if (t = bt || s = bs)
        //         break; //out of for loop
        // }
        // //error check for edge case
        // if(*s == *t && t == bt && s != '\0'){
        //     return 1;
        // } else{
        //     return 0;
        // }
    }
