int invalidOpenBraces = 0;
int invalidCloseBraces = 0;
for (int i = 0; i < n; i++) {
  if (s[i] == '(') {

      // Number of open braces that
      // hasn't been closed yet.
      invalidOpenBraces++;
  }
  else {
      if (invalidOpenBraces == 0) {
          // Number of close braces that
          // cannot be mapped to any open
          // brace.
          invalidCloseBraces++;
      }
      else {
          // Mapping the ith close brace
          // to one of the open brace.
          invalidOpenBraces--;
      }
  }
}
return (n -(invalidOpenBraces+invalidCloseBraces));
