int main() {
  char op;
  int a, b;
  printf("Enter 1st operand than operator and than 2nd operand\n");
  scanf("%d %c %d", &a, &op, &b);

  switch (op) {
    case '+':
      printf("%d + %d = %d", a, b, a + b);
      break;
    case '-':
      printf("%a - %b = %d", a, b, a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a * b);
      break;
    case '/':
      printf("%d / %d = %d", a, b, a / b);
      break;
    case '%':
      printf("%d % %d = %d", a, b, a % b);
      break;
    // if choosen invalid operator
    default:
      printf("Error! Please choose valid operator");
  }

  return 0;
}
