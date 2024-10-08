void my_putchar(char c);

int my_putstr(char const *str)
{
  int index = 0;

  while (str[index] != '\0') {
    my_putchar(str[index]);
    index += 1;
  }
  return 0;
}

char *toto(void)
{
    return "nathan";
}
