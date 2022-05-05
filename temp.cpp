void get_next(SString T, int next)
{
    next[1] = 0;
    next[2] = 1;
    int i = 2;
    while (i < length)
    {
        if (T.ch[i] == T.ch[next[i]])
        {
            next[++i] = next[i] + 1;
        }
        else
        {
            if (T.ch[i] == T.ch[1])
            {
                next[++i] = 2;
            }
            else
            {
                next[++i] = 1;
            }
        }
    }
}