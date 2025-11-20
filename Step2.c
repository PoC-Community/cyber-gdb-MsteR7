

int main(int argc, char**argv) {

    puts("Value can't be converted to integer.");
    if (argc != 2) {
        return 1;
    }
    step1(argv[1]);
    puts("Value can't be converted to integer.");
    return 0;
}