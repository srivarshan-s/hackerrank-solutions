int n, char **s;


int k = 0;
for (int i = 0; i < n - 1; ++i)
{
    if (!lexicBool(s[i], s[i + 1]))
    {
        k = i;
    }
}
int l = k;
for (int i = k; i < n; ++i)
{
    if (!lexicBool(s[k], s[i]))
    {
        l = i;
    }
}
char *temp;
temp = (char *)malloc(1024 * sizeof(char *));
temp = s[k];
s[k] = s[l];
s[l] = temp;
for (int i = 1; i <= (n - k) / 2; ++i)
{
    temp = s[k + i];
    s[k + i] = s[n - i];
    s[n - i] = temp;
}
