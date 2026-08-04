void string(const char *s, char *dest) {
    int j = 0; 
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalnum((unsigned char)s[i])) {
            dest[j++] = tolower((unsigned char)s[i]); 
        } 
    } 
    dest[j] = '\0'; 
}
bool isPalindrome(char* s) {
    char dest[20000005];
    string(s,dest);
    int n=strlen(dest);
    for (int i = 0;i<n/2; i++) {
        if(dest[i]==dest[n-1-i])
        continue;
        else
        return false;
       
    }      
    return true; 


}
