void solve()
{
    int a, b, k;
    cin >> a >> b >> k;

    int ans = (a - b) * (k / 2);
    if (k % 2 != 0)
    {
        ans += a;
    }
    cout << ans << endl;
}

int32_t main()
{
    fastio();

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }
}
