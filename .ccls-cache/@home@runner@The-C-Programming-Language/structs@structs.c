#include <stdio.h>
struct user {
  char *name;
  int age;
};
struct user newuser(char *name, int age) {
  struct user temp = {name, age};
  return temp;
}

int main() {
  struct user testuser = {"Test User", 25};
  printf("Testuser name: ");
  puts(testuser.name);
  printf("Age: ");
  printf("%d\n", testuser.age);

  struct user cool = newuser("Function user", 26);

  printf("cool name: ");
  puts(cool.name);
  printf("Age: ");
  printf("%d\n", cool.age);
}