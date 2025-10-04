bool isAcronym(char** words, int wordsSize, char* s) {
    char k[wordsSize+1];
    for(int i =0;i<wordsSize;i++){
        k[i]=words[i][0];
    }
    k[wordsSize] = '\0';
    if(strcmp(k,s)==0)
        return true;
    else
        return false;
}