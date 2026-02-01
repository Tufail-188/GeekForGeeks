void toBinary(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }

    string ans = "";

    while (n > 0) {
        ans = char('0' + (n % 2)) + ans;
        n /= 2;
    }

    cout << ans;
}
