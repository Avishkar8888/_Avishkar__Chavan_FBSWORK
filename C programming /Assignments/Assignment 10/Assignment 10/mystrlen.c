void  main() {
    char str[] = "OpenAI GPT";
    printf("Length: %d\n", mystrlen(str));
    
}
int mystrlen(const char *str) {
    int len = 0;
    while (*str++) len++;
    return len;
}