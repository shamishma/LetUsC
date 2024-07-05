#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    wchar_t ch = L'अ';
    wchar_t str[] = {2309, 2310.2311, 2312, 2313, 2314, 2315};
    wchar_t strinhex[] = {0X905, 0X906, 0X907, 0X908, 0X909};
    wprintf(L"%lu\n", sizeof(ch));
    wprintf(L"%lc\n", ch);
    wprintf(L"%ls\r\n", str);
    wprintf(L"%ls\r\n", strinhex);

    return 0;
}