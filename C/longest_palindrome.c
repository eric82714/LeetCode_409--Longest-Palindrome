int count(char* s, char w){
    int n = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == w){
            n ++;
            *(s+i) = ' ';
        }
    }
    
    return n;
}

int longestPalindrome(char * s){
    int store[100] = {0};
    int size = 0;
    int add = 0;
    int index = 0;
        
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' '){
            store[index] = count(s, s[i]);
            index ++;
        }
        else continue;
    }
                
    for(int j = 0; j < index; j++){
        if(store[j] % 2 == 0) size += store[j];
        if(store[j] % 2 == 1) { 
            size += (store[j] - 1);
            add = 1;
        }
    }
        
    return size + add;
}
