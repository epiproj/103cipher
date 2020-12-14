void ps (char *s);

int display_help(void)
{
    ps ("USAGE\n");
    ps ("    ./103cipher message key flag\n\n");
    ps ("DESCRIPTION\n");
    ps ("    message     a message, made of ASCII characters\n");
    ps ("    key         the encryption key, made of ASCII characters\n");
    ps ("    flag        0 for the message to be encrypted, 1 to be decrypted\n");
    return 0;
}
