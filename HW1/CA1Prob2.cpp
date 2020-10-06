bool isPrime(int p) {
    bool prime { true };
    for(int i=2;i<=p/2;i++) {
        if(p%i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

int* showPrime(int p) {
    int* ptr { new int[2] };
    if(isPrime(p)) {
        ptr[0] = p;
    }
    else {
        int ps {p};
        int pl {p};
        while(true) {
            ps--;
            if(isPrime(ps)) {
                ptr[0] = ps;
                break;
            }
        }
        while(true) {
            pl++;
            if(isPrime(pl)) {
                ptr[1] = pl;
                break;
            }
        }
    }
    return ptr;
}