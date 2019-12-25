var
  N: integer;
  factorial, sum: real;
begin
  readln(N);
  factorial := 1;
  sum := 0;
  for var i := 1 to N do
  begin
    factorial *= i;
    sum += factorial;
  end;
  writeln(sum);
end.
  