#include<stdio.h>
# define MAXLEN 1000
char *LinePtr[MAXLEN];

#define ALLOCSIZE 10000
char allocbuff[ALLOCSIZE];
char *allocp = allocbuff;
// same as &allocbuff[0]


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

void swap(char *v[], int i, int j){
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[i] = temp;
}

int getLine(char s[], int limit){
    int c, i;
    //a
    //need space for null terminating character
    for(i=0; i< limit-1 && (c=getchar())!=EOF && c!= '\n'; ++i){
        s[i] = c;
    }
    if (c=='\n') {
        //b
        //new line considered a new character
        s[i]=c;
        //need to increment for the null terminating character
        ++i;
    }
    //c
    s[i] = '\0';
    return i;
}

int Strcmp(char* s, char * t){
    int i;
    for(i = 0; s[i] == t[i]; ++i){
        if (*s == '\0')
            return 0;
    }
        return s[i] - t[i];
}

void Strcpy(char *s, char *t){
    for(int i = 0; t[i] != '\0'; i++){
        t[i] = s[i];
    }
}

int readLines(char* linePtr[], int maxlines){
    int len, nLines;
    char *p, line[MAXLEN];
    nLines = 0;
    while((len = getLine(line, MAXLEN))>0){
        if (nLines >= maxlines || (p = alloc(len)) == NULL){
            return -1; //error check: if hit max lines, stop
        } else {
            line[len - 1] = '\0'; // get rid of /n
            Strcpy(p, line);
            linePtr[nLines++] = p;
        }
    }
    return nLines;
}

//array of pointers -- if i derefernce, get string
void writeLines(char * linePtr[], int nLines){
    while ( nLines-- > 0){
        printf("%s\n", *linePtr ++);
    }
    // for (; nLines > 0; nLines--){
    //     printf("%s\n", %linePtr++);
    // }
}


void Qsort(char* v[] , int left , int right)

{

    int i , last ;

    void swap(char* v[], int i , int j) ; /* declaration*/

    if(left >= right)   

        return;

    swap(v, left, (left + right) /2);  /* move partition elem to v[0]*/

    last = left;

    for(int i = left +1 ; i <= right ; ++i)

        if(Strcmp(v[i], v[left]) < 0)

            swap(v, ++last, i);

    swap(v,left, last);

    Qsort(v, left, last -1);

    Qsort(v, last + 1, right);

 

}