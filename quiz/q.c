
#include <stdio.h>

char * Reverse( char *s )
{
    for ( size_t i = 0, n = std::strlen( s ); i < n / 2; i++ )
    {
        std::swap( s[i], s[n-i-1] );
    }

    return s;
}

int main() 
{
    char s[] = { 'a', 'b', 'c', '\0' };

    std::cout << s << '\n';

    std::cout << Reverse( s ) << '\n';

    return 0;
}