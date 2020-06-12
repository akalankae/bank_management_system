/************************************************************************
 * hash.c
 * Hash function
 * This hash function was first reported by Dan Bernstein.
 * Reference: http://www.cse.yorku.ca/~oz/hash.html
 ************************************************************************/
unsigned long hash_str(char *s)
{
    int c;
    unsigned long hash = 5381;

    while ((c = *s++))
        hash = ((hash << 5) + hash) + c;    // hash * 33 + c

    return hash;
}
