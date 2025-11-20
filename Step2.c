
int step1(char *value) {
    //puts("Value can't be converted to integer.");
    if (strlen(value) != 5) {
        return;
    }
    printf("Format string + %s", value);
    step2();
}


int main(int argc, char**argv) {

    //puts("Value can't be converted to integer.");
    if (argc != 2) {
        return 1;
    }
    step1(argv[1]);
    //puts("Value can't be converted to integer.");
    return 0;
}