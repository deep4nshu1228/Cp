#include <cstdio>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    bool meet(true);
    char color[101], prev('*');
    while (n--)
    {
        scanf("%s", color);
        if (color[0] == prev)
        {
            meet = false;
            break;
        }
        prev = color[0];

        for (int i = 1; i < m; ++i)
        {
            if (color[i] != color[0])
            {
                meet = false;
                break;
            }
        }

        if (!meet)
        {
            break;
        }
    }
    printf(meet ? "YES\n" : "NO\n");
    return 0;
}